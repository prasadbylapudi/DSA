
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int firstRepeating(string s1)
{
    int count[255]={0};
    
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        for(int j=i+1;j<s1.length();j++)
        {
            if(count[s1[i]]==count[s1[j]])
                return i;
        }
    }
    return -1;
    
}

int main()
{
    
    string s1="geeks for geeks";
    
    string s2="abbcc";
    
    cout<<firstRepeating(s1)<<endl;
    
    cout<<firstRepeating(s2)<<endl;

    return 0;
}
