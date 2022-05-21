#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void bintodec(int n)
{
    // 1010
    int digit, ans = 0, i = 0;
    while (n != 0)
    {

        digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << ans;
}
int main()
{
    int n;
    cin >> n;
    bintodec(n);
    return 0;
}