/* C++ program for finding out majority
element in an array */
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	int arr[3][3] = {{1,1,1},
	            {1,0,1},
	           {1,1,1}};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(arr[i][j]==0)
	        {
	            for(int p=0;p<n;p++)
	           {    
	               
	               //arr[i][p]=0;
	               arr[p][j]=0;
	           }
	           
	        }
	    }
	}
	for(int i=0;i<n;i++){    
        for(int j=0;j<n;j++){    
            printf("%d",arr[i][j]);    
        }
        printf("\n");
    }//end of i   
	
    
	return 0;
}

// This code is contributed by Aman Chowdhury
