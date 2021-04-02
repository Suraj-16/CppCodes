#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }cout<<"\n";
    cout<<"Elements of array are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}