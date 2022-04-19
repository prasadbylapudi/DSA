
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char First_Unique_Character_in_a_String(string &s)
{
    unordered_set<char> h;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
       if(h.find(c)==h.end())
       {
           return c;
       } 
       else
            h.insert(c);
    }
    
    return '\0';
}

int main()
{
    
    string s1="loveleetcode";
    
    string s2="abcdfghd";
    
    cout<<First_Unique_Character_in_a_String(s1)<<endl;
    
    cout<<First_Unique_Character_in_a_String(s2)<<endl;

    return 0;
}
