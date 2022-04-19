#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void printNGE(int arr[], int n)
{

    stack<int> s;

    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
        }

        while (!s.empty() && s.top() < arr[i])
        {
            cout << s.top()
                 << " --> " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }

    while (s.empty() == false)
    {
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}
int main()
{
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}

/*
Time Complexity

he worst case occurs when all elements are sorted in decreasing order.
If elements are sorted in decreasing order, then every element is processed at most 4 times.

//! to get the elements in same order iterate from the end of the array.
*/