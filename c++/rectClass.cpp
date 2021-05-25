#include<iostream>
using namespace std;

class rectClass
{
private:
    int length;
    int breadth;
public:
    rectClass(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return (length*breadth);
    }
};


int main(){
    rectClass r(5,4);
    int re = r.area();
    cout<<"Area of Rectangle : "<<re<<"\n";
    return 0;
}