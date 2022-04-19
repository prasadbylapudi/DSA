#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void MoviesZeroes(vector<int>&nums, int n)
{
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0){
                //result.push_front(nums[i]);
                result.insert(result.begin(),nums[i]);
            }
            else{
                result.push_back(nums[i]);
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