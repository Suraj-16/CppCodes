#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>a1;
    for(int i=1;i<6;i++){
        a1.push_back(i);
    }
    for(int i=0;i<5;i++){
        cout<<a1[i]<<" ";
    }
    cout<<a1.front()<<"  "<<a1.back()<<endl;

    return 0;
}