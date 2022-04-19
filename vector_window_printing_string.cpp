
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<vector<char> > result;

    string str="geeksforgeeks";
    for(int i=0;i<str.length();i++)
    {
        vector<char> s;
        for(int j=0;j<4;j++)
        {
            s.push_back(str[i+j]);
        }
        
        result.push_back(s);
        cout<<"\n";
    }
  
    for(int i=0;i<str.length();i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<result[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
