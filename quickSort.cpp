#include<iostream>
using namespace std;

int partition(int a[], int first, int last);
void quickSort(int a[], int first, int last);

int main(){
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int a[n];             // Initialization of array for n numbers.

    cout<<"Enter elements : \n";
    for(int i=0;i<n;i++){
        cin>>a[i];        // Taking value of n elements of array from User.
    }

    cout<<"Elements before sorting : \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";        //  Display of each element of array.
    }cout<<"\n";
    int first = 0, last = n-1;
    quickSort(a,first,last);

    cout<<"Elements before sorting : \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";        //  Display of each element of array.
    }cout<<"\n";

    return 0;
}

void quickSort(int a[], int first, int last){
    if(first < last){
        int p = partition(a,first,last);
        quickSort(a,first,p-1);
        quickSort(a,p+1,last);

    }
}

int partition(int a[], int first, int last){
    int pivot;
    pivot = a[first];
    int i = first;
    for(int j = first+1;j<=last;j++){
        if(a[j] < pivot){
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i];
    a[i] = pivot;
    a[first] = temp;

    return i;
}