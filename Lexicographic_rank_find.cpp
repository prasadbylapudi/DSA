#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

void lexRank(string str)
{
    int res = 1;
    int n = str.length();
    int mul = fact(n);
    int rank = 0;
    int count[256] = {0};

    for (int i = 0; i < n; i++)
    {
        count[str[i]]++;
    }

    for (int i = 1; i < 256; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        mul = mul / (n - i);
        rank = rank + count[str[i] - 1] * mul;

        for (int j = str[i]; j < 256; i++)
        {
            --count[j];
        }
    }
    cout << "rank is:" << rank;
}

int main()
{

    string str = "string";

    lexRank(str);

    return 0;
}