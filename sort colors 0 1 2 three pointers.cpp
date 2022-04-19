#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void MoviesZeroes(vector<int>&nums, int n)
{
  int low=0, medium=0, high=nums.size()-1;
        
        while(medium<=high)
        {
            if(nums[medium]==2)
            {
                swap(nums[medium],nums[high]);
                high--;
            }
            if(nums[medium]==0)
            {
                swap(nums[low],nums[medium]);
                low++;
                medium++;
            }
            if(nums[medium]==1){
                medium++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
}
  
int main()
{   
    vector<int>arr={2,0,2,1,1,0,0,1,1,1,2};
    
    int n=arr.size();
    MoviesZeroes(arr, n);
    return 0;
}