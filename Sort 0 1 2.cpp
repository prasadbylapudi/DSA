#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void MoviesZeroes(vector<int>&nums, int n)
{
  int count0=0,count2=0,count1=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==0)
               count0++;
           if(nums[i]==1)
               count1++;
           if(nums[i]==2)
               count2++;
       }
       cout<<"count0 "<<count0<<endl;
       cout<<"count1 "<<count1<<endl;
       cout<<"count2 "<<count2<<endl;
       
       nums.clear();
        for(int i=count0;i>0;i--)
        {
            
            nums.push_back(0);
        }
        for(int i=count1;i>0;i--)
        {
            nums.push_back(1);
            
        }
        for(int i=count2;i>0;i--)
        {
            
            nums.push_back(2);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            
            cout<<nums[i]<<" ";
        }
        
}
int main()
{   vector<int>arr={2,0,2,1,1,0,0,1,1,1,2};
    
    int n=arr.size();
    MoviesZeroes(arr, n);
    return 0;
}