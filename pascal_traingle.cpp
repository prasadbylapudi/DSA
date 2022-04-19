
//program to find the frequency of elements in vector using map.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// void printFrequency(vector<int>vec){
    
//     map<int,int> M;
    
//     for(int i=0;i<vec.size();i++)
//     {
//         if(M.find(vec[i])==M.end()){
//             M[vec[i]]=1;
//         }
        
//         else{
//             M[vec[i]]++;
//         }
//     }
//     int n=vec.size();
  
//     for(auto it:M)
//     {
//         // cout<<"hi"<<endl;
//         if((it.second)>(n/3))
//          {
//              cout<<"inner if";
//               cout<<it.first<<endl;
//          }
//         //cout<<it.first<<"--"<<it.second<<endl;
//     }
    
    
    
// }

int main()
{
   int numRows=5;
    // printFrequency(vec);
    vector<vector<int>> m(numRows);// creating 2-D vector with rows=numRows
        
            for(int i=0;i<numRows;i++)
            {
                m[i].resize(i + 1);    //to increase column size as level increases
                m[i][0] = m[i][i] = 1; //first and last element of every row is 1 always so

                //loop to calculate sum of remaining elements from previous row  
                for (int j = 1; j < i; j++)
                   m[i][j] = m[i - 1][j - 1] + m[i - 1][j];
        
            }
            
            for(int i=0;i<numRows;i++)
            {
                for(int j=0;j<=i;j++)
                {
                    cout<<m[i][j]<<" ";
                }
                cout<<"\n";
            }
        
        
    return 0;
}
