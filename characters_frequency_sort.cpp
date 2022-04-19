#include <bits/stdc++.h>
using namespace std;

void sort(string str)
{
    
   unordered_map<char,int> MM;
   
   for(auto it:str)
        MM[it]++;

    for(auto it:MM)
        cout<<it.first<<" "<<it.second<<endl;
    
}


int main()
{

    string str="tree";
   sort(str);
   return 0;
}
