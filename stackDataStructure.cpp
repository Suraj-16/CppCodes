#include<iostream>
using namespace std;
int stack[10];
int top = -1;

void push();
int isFull();
void pop();
int isEmpty();
int peek();

int main(){
    int y=1,c;
    do{
        cout<<"1. push \n2. pop \n3. peek \n4. IsFull \n5. IsEmpty \n Enter Choice : ";
        cin>>c;
        switch(c){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            default: cout<<"Wrong Input\n";
        }
        cout<<"Press 1 to continue else press 0 to stop : ";
        cin>>y;
    }while(y == 1);
}

void push(){
    if(!isFull()){
        cout<<"Enter the value : ";
        cin>>stack[++top];
    }
}


int isFull(){
    if(top >= 9){
        cout<<"Stack is full !! \n";
        return 1;
    }
    else{
        return 0;
    }
    
}

void pop(){
    if(!isEmpty()){
        cout<<"Poped element is : ";
        cout<<stack[top--]<<"\n";
    }
}

int isEmpty(){
    if(top <= -1){
        cout<<"Stack is Empty !! \n";
        return 1;
    }else{
        return 0;
    }
}

int peek(){
    return stack[top];
}