#include<iostream>
using namespace std;

class area{
    int len;
    int br;
    public:
    void setdim(){
        cout<<"Enter the length of rectangle : ";
        cin>>len;
        cout<<"Enter the Breadth of rectangle : ";
        cin>>br;
    }

    int getArea(){
        return (len*br);
    }
};

int main(){
    area a;
    a.setdim();
    cout<<"Area of rectangle : "<<a.getArea()<<"\n";

    return 0;
}