// Count number of one's in a given unsigned integer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uint32_t n;
    int n = 5;
    int m = n;
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }

        n = n >> 1;
    }

    cout << "Number of one's in " << m << " is " << count;
    return 0;
}