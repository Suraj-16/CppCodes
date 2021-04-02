// Created by Suraj Parkale BTech Computer Engineer
// Student of Vishwakarma Institute of Information Technology, Pune


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

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<"\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j+1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<"\n";


    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<"\n";

    return 0;
}

/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

Auxiliary Space: O(1)

Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.




Sorting In Place: Yes

Stable: Yes
*/