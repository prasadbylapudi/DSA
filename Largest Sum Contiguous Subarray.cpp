//Largest Sum Contiguous Subarray
// it's also handles for the negative numbers also...

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n){
    
    int max_so_far=arr[0];
    
    int max_ending_here=arr[0];
    
    for(int i=1;i<n;i++)
    {
        
        max_ending_here=max(arr[i],max_ending_here+arr[i]);
        
        max_so_far=max(max_so_far,max_ending_here);
    }
    return max_so_far;
}
int main()
{
    
    
    
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
