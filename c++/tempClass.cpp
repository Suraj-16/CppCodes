#include<iostream>
using namespace std;

template <class T>
class calculator{
    T num1,num2;
    public:
    calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }

    void display(){
        cout<<"Addition is :"<<add()<<"\n";
        cout<<"Substraction is :"<<Sub()<<"\n";
        cout<<"Multiplication is :"<<Mult()<<"\n";
        cout<<"Division is :"<<Div()<<"\n";
    }

    T add(){
        return num1 + num2;
    }
    T Sub(){
        return num1 - num2;
    }
    T Mult(){
        return num1 * num2;
    }
    T Div(){
        return num1 / num2;
    }
};

int main(){

    calculator<int> intcal(6,3);
    intcal.display();
    calculator<float> floatcal(9.23, 3.67);
    floatcal.display();
    return 0;
}