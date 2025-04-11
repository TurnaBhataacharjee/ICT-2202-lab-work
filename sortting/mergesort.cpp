#include<iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub){
    int i,j,k=0;
    i=lb;
    j=mid+1;
    int size=ub-lb+1;
    int b[size];
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=mid){
        b[k++]=a[i++];

    }
    while(j<=ub){
        b[k++]=a[j++];

    }
    for(int x=0;x<size;x++){
        a[lb+x]=b[x];

    }
}
void mergesort(int a[],int lb,int ub){
    if(lb<ub){
        int mid =lb+(ub-lb)/2;
        mergesort(a,lb,mid-1);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
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
mergesort(a,0,n-1);
cout<<"The sorted list are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}