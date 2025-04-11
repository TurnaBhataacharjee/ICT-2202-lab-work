#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partion(int a[],int lb,int ub){
    int start =lb;
    int end=ub;
    int pivot=a[lb];
    while(start<end){
    while(a[start]<=pivot){
        start++;
    }
    while(a[end]>pivot){
        end--;
    }
    if(start<end){
        swap(&a[start],&a[end]);
    }
}
swap(&a[lb],&a[end]);
return end;

}
void quicksort(int a[],int lb,int ub){
    
    if(lb<ub){
        int loc=partion(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);

    }
}
int main(){
    int n;
    cout<<"How many numbers to be sorted: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    quicksort(a,0,n-1);
    cout<<"The sorted list are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}