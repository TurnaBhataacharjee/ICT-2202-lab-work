#include<iostream>
using namespace std;
int main(){
    int n,temp,j;
    cout<<"How many numbers to be sorted: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;


    }
    cout<<"The sorted list are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}