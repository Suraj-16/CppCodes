// Created by Suraj Parkale BTech Computer Engineer
// Student of Vishwakarma Institute of Information Technology, Pune


#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n],k,j;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The elements of the array are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int i=1;i<n;i++){
        j = i - 1;
        while(j>=0 && a[j+1] < a[j]){
            int temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
            j--;
        }
        cout<<"The elements of the array are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    }
    cout<<"The elements of the array are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}



/*
Time Complexity: O(n*2) 
Auxiliary Space: O(1)
Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. 
And it takes minimum time (Order of n) when elements are already sorted.
Algorithmic Paradigm: Incremental Approach
Sorting In Place: Yes
Stable: Yes
Online: Yes
Uses: Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, 
only few elements are misplaced in complete big array.
What is Binary Insertion Sort? 
We can use binary search to reduce the number of comparisons in normal insertion sort. 
Binary Insertion Sort uses binary search to find the proper location to insert the selected item at each iteration. In normal insertion, 
sorting takes O(i) (at ith iteration) in worst case. We can reduce it to O(logi) by using binary search. The algorithm, as a whole, 
still has a running worst case running time of O(n2) because of the series of swaps required for each insertion.
*/