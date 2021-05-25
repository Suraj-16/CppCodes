#include<iostream>
using namespace std;

template <class T>

class calculator{
    T num1;
    T num2;

    public:
        calculator(T n1,T n2){
            num1 = n1;
            num2 = n2;
        }

        void display(){
            cout<<"Addition is : "<<add(num1,num2)<<"\n";
            cout<<"Substraction is : "<<sub(num1,num2)<<"\n";
            cout<<"Multiplication is : "<<mult(num1,num2)<<"\n";
            cout<<"Division is : "<<div(num1,num2)<<"\n";
        }

        T add(T num1, T num2){
            return (num1 + num2);
        }

        T sub(T num1, T num2){
            return (num1 - num2);
        }

        T mult(T num1,T num2){
            return (num1 * num2);
        }

        T div(T num1, T num2){

            return (num1 / num2);
        }
};

int main(){
    calculator<int> c1(10,5);
    c1.display();
    return 0;
}