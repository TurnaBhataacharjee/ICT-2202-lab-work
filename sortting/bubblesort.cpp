#include<iostream>
using namespace std;
int main(){
    int n,temp,flag;
    cout<<"How many numbers to be sorted: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        flag=0;

        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            //cout<<"The array is already sorted.";
            break;
        }
    }
    cout<<"The sorted list are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}