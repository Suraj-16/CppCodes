#include<iostream>
using namespace std;

int main(){
    int t,x,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        cin>>a;
        cin>>b;
        int c = a + (100 - x) * b;
        cout<<(c * 10)<<endl;
    }
    return 0;
}