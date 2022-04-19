//Largest Sum Contiguous Subarray
// it's also handles for the negative numbers also...

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n){
    
    int max_so_far=arr[0];
    
    int max_ending_here=0;
    
    //start is to store the starting index of the sub array
    int start=0;
    //end is to find the ending of the sub array.
    int end=0;
    //s is to find the starting index of the sub array.
    int s=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here=max_ending_here+arr[i];
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
            start=s;
            end=i;
        }
        
        if(max_ending_here<0)
        {
            max_ending_here=0;
            s=i+1;
        }
       
    }
     cout << "Maximum contiguous sum is "
        << max_so_far << endl;
    cout << "Starting index "<< start
        << endl << "Ending index "<< end << endl;
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
