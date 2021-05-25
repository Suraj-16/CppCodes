#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll_no;

};

int main(){
    student s1;
    s1.name = "John";
    s1.roll_no = 2;
    cout<<"Name : "<<s1.name<<"  "<<"Roll No : "<<s1.roll_no<<"\n";
    return 0;
}