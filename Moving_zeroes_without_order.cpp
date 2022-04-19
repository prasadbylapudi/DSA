#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void MoviesZeroes(int arr[], int n)
{

    int left=0,right=n-1;
  
     while(left<right){
        if(arr[left]==0 && arr[right]!=0)
      {
          swap(arr[left],arr[right]);
          cout<<"swapped "<<arr[left]<<"and "<<arr[right]<<endl;
          left++;
            right--;
      }
      
      left++;
      if(arr[right]==0){
          right--;
      }
      
     }
  

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={0,1,0,3,12,4,0,9,0,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    MoviesZeroes(arr, n);
    
    return 0;
}

/*
Time Complexity

he worst case occurs when all elements are sorted in decreasing order.
If elements are sorted in decreasing order, then every element is processed at most 4 times.
*/