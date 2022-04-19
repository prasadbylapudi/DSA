#include <bits/stdc++.h>
using namespace std;

void sort(vector<int>v)
{
    map<int,int>M;
    
    for(int i=0;i<v.size();i++)
    {
        M[v[i]]++;
    }
    
   multimap<int,int> MM;
   
   for(auto it:M)
        MM.insert(make_pair(it.second,it.first));
        
    
    for(auto it:MM)
        cout<<it.second<<" "<<it.first<<endl;
    
}


int main()
{

vector<int> v={1,1,2,2,2,3};
   sort(v);
   return 0;
}
