
/*
Always we have to give sorted array to binarySerch Algorithm..
*/

#include<iostream>
using namespace std;

int binarySearch(int a[], int k, int n);

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int k;
    cout<<"Enter element to search : ";
    cin>>k;

    int result = binarySearch(a,k,n);
    if(result == -1){
        cout<<"Number is not found !! \n";
    }else{
        cout<<"Number present at index : "<<result<<"\n";
    }
    
    return 0;
}

int binarySearch(int a[], int k, int n){
    int l = 0;
    int m = n-1;
    while(l <= m){
        int mid = (l+m)/2;
        if(a[mid] == k){
            return mid;
        }else if(k < a[mid]){
            m = mid - 1;
        }else {
            l = mid + 1;
        }
    }
    return -1;
}