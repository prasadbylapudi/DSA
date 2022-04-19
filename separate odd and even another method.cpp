#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void MoviesZeroes(vector<int>&nums, int n)
{
        int index=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                int temp=nums[index];
                nums[index++]=nums[i];
                nums[i]=temp;
                    
            }
        }

    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}
  
int main()
{   
    vector<int>arr={3,1,2,4};
    
    int n=arr.size();
    MoviesZeroes(arr, n);
    return 0;
}