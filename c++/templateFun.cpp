#include<iostream>
using namespace std;

template<class T>
T large(T n1, T n2){
    return (n1 > n2) ? n1 : n2;
}

int main(){
    int i1,i2;
    float f1,f2;

    cout<<"Enter two Number : ";
    cin>>i1>>i2;
    cout<<"Large Number is "<<large(i1,i2)<<"\n";
    cout<<"Enter two Numbers : ";
    cin>>f1>>f2;
    cout<<"Large number is : "<<large(f1,f2)<<"\n";
    return 0;
}