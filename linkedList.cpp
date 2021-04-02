#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
} *head = NULL;

void insertEnd();
void insertBegin();
void display();


int main(){
    int c,y=0;
    do{
        cout<<"1. Insert at End \n2. Display \n3. Insert at Begining\n ";
        cin>>c;
        switch(c){
            case 1: insertEnd();
            break;
            case 2: display();
            break;
            case 3: insertBegin();
            break;
            default:cout<<"Wrong Input\n";
        }
        cout<<"Press 0 to continue \n press 1 to Stop ";
        cin>>y;
    }while(y == 0);

    return 0;
}



void insertEnd(){
    struct node * temp, * nn;
    nn = new node;
    cout<<"Enter the Value : ";
    cin>>nn->data;
    nn->next = NULL;
    temp = head;
    if(head == NULL){
        head = nn;
    }else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nn;

    }
}


void display(){
    struct node * temp;
    temp = head;
    cout<<"Data in a nodes : \n";
    while(temp != NULL){
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
}


void insertBegin(){
    struct node * nn;
    nn = new node;
    cout<<"Enter the Value : ";
    cin>>nn->data;
    nn->next = head;
    head = nn;
}
