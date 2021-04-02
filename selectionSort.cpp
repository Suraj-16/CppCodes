// Created by Suraj Parkale BTech Computer Engineer
// Student of Vishwakarma Institute of Information Technology, Pune

#include<iostream>
using namespace std;

void selectionSort(int n, int a[]);

int main(){
    int n;
    cout<<"Enter the Number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<"\n";
    selectionSort(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<"\n";
    return 0;
}

void selectionSort(int n, int a[]){
    int min = 0;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }cout<<"\n";
    }
}

/*
Time Complexity: O(n2) as there are two nested loops.

Auxiliary Space: O(1)
The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.
*/