#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next = NULL;
    }
};

class queue{
    node* head;
    node* tail;
    public:
    queue(){
        head = tail = NULL;
    }

    void back_push(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        tail-> next = newnode;
        tail = newnode;

    }

    void front_pop(){
        node* temp = head;
        if(head==NULL){
            cout<<"empty list!";
        }
        head = temp->next;
        temp =NULL;
        delete temp;
    }

    void front(){
        if(head==NULL){
            cout<<"queue is empty";
        }
        cout<<head->data<<endl;
    }

    void isEmpty(){
        if(head==NULL){
            cout<<"queue is empty";
        }
        else{
            cout<<"not empty";
        }
    }

    void print(){
        if(head==NULL){
            cout<<"queue is empty";
        }
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }

    }
};

int main(){
    queue q;
    q.back_push(1);
    q.back_push(2);
    q.back_push(3);
    q.back_push(4);
    q.print();
    return 0;
    
}