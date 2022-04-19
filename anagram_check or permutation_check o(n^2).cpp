
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool anagramCheck(string str1,string str2)
{
    int count[256]={0};
    
    for(int i=0;i<str1.length();i++)
    {
        count[str1[i]]++;
    }
    
    for(int i=0;i<str2.length();i++)
    {
        count[str2[i]]--;
    }
    
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
            return false;
    }
    
    return true;
    
    
}
int main()
{
    string text="geeksforgeeks";
    string pat="gks";
    bool res;
    vector<vector<char> > result;
     for(int i=0;i<text.length();i++)
    {
        vector<char> s;
        for(int j=0;j<pat.length();j++)
        {
            s.push_back(text[i+j]);
            
        }
        string s1 (s.begin(),s.end());
        //cout<<"s1 is :"<<s1<<endl;
        
        res=anagramCheck(s1,pat);
        if(res==1)
        {
            cout<<"YES";
            break;
        }
        else
            cout<<"NO"<<endl;
        result.push_back(s);
       
    }
  
    //anagramCheck(s1,s2);
    //cout<<"result is: "<<res;

    return 0;
}
