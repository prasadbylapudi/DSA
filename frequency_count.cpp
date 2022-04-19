
// program to find the frequency of elements in vector using map.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printFrequency(vector<int> vec)
{

    map<int, int> M;

    for (int i = 0; i < vec.size(); i++)
    {
        if (M.find(vec[i]) == M.end())
        {
            M[vec[i]] = 1;
        }

        else
        {
            M[vec[i]]++;
        }
    }

    for (auto it : M)
    {
        cout << it.first << "--" << it.second << endl;
    }
}

int main()
{
    vector<int> vec = {1, 2, 2, 3, 1, 4, 4, 5};

    printFrequency(vec);

    return 0;
}
