#include <bits/stdc++.h>
using namespace std;

// Approach 1 using arrays
// int compliment(int n)
// {
//     int bits[10], ans = 0, i = 0, j;
//     while (n != 0)
//     {
//         bits[i] = (n % 2) ^ 1;
//         i++;
//         n = n >> 1;
//     }
//     for (j = 0; j <= i - 1; j++)
//     {
//         if (bits[j] == 1)
//         {
//             ans = ans + pow(2, j);
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n, ans;
//     cin >> n;
//     ans = compliment(n);
//     cout << ans;
//     return 0;
// }

// Approach 2---> slightly better than array approach

int compliment(int n)
{
    int m, mask = 0;
    m = n;

    if (n == 0)
    {
        return 1;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    return ans;
}
int main()
{

    int n;
    cin >> n;
    cout << compliment(n);
    return 0;
}
