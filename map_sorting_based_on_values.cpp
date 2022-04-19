
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
void sort_by_frequency(vector<int> v)
{
    map<int,int> M;
    for(int i=0;i<v.size();i++)
    {
       M[v[i]]++;
    }
    for(auto x:M)
        cout<<x.first<<" "<<x.second<<endl;

    vector<pair<int,int>> A;
    
    for(auto it:M)
        A.push_back(it);
    
   
   sort(A.begin(),A.end(),cmp);
   
   
   cout<<"sorting based on the values: "<<endl;
   for(auto it:A)
        cout<<it.first<<" "<<it.second<<endl;
    
   
}

int main()
{
    
   vector<int> v={1,1,2,2,2,3};
   sort_by_frequency(v);
   
    return 0;
}
