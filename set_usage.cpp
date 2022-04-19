
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// int firstRepeating(string s1)
// {
//      int count[256]={0};
        
//         for(int i=0;i<s1.length();i++)
//         {
//             count[s1[i]]++;
//             //cout<<"element "<<s1[i]<<" count is: "<<count[s1[i]]<<endl;
            
//         }
        
//         for(int i=0;i<256;i++)
//         {
//             // if(count[s1[i]==1])
//             //     return i;
//                 cout<<"element "<<s1[i]<<" count is: "<<count[s1[i]]<<endl;
//         }
        
    
// }

int main()
{
    
    
    int size=10;
    int arr[]={1,2,3,1,1,3,4,1,3,1};
    set<int> s(arr, arr + size);
    // for(int i=0;i<10;i++)
    // {
    //     s.insert(arr[i]);
    // }
    
    for (auto x : s)
        cout << x << " ";
    return 0;
}
