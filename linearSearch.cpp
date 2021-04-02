// Program is written by Suraj Parkale BTech Computer Engineer
// Student of Vishwakarma Institute of Information Technology, Pune


#include<iostream>
using namespace std;

int linearSearch(int a[],int n,int x);

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int x;
    int a[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter element to search : ";
    cin>>x;

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<"\n";
    int result = linearSearch(a,n,x);
    if(result == -1){
        cout<<"Element not found !! \n";
    }else{
        cout<<"Element found at index : "<<result<<"\n";
    }
    return 0;
}

int linearSearch(int a[], int n, int x){
    for(int i=0;i<n;i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}


/*
The time complexity of the above algorithm is O(n). 

Linear search is rarely used practically because other search algorithms such as the binary search algorithm and hash tables 
allow significantly faster-searching comparison to Linear search.

Improve Linear Search Worst-Case Complexity

if element Found at last  O(n) to O(1)
if element Not found O(n) to O(n/2)
*/