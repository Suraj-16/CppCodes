#include <iostream>
using namespace std;

int main () {
    int a = 10;
    int* x = &a;
    cout<<a<<"\n";
    cout<<&a<<"\n";
    cout<<x<<"\n";
    cout<<*x<<"\n";
    cout<<&x<<"\n";
   return 0;
}