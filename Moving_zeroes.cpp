#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void MoviesZeroes(int arr[], int n)
{
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0){
            arr[count++]=arr[i];
            cout<<"count:"<<count<<endl;
        }
        
    }
    while(count<n){
        arr[count++]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    MoviesZeroes(arr, n);
    return 0;
}