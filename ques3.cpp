// Reverse Integer

#include <bits/stdc++.h>
using namespace std;

int reverse(int);
int reverse(int n)
{
    int rem, ans = 0;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans * 10 + rem;
    }
    return ans;
}
int main()
{
    int ans;
    ans = reverse(3643);
    cout << ans;
    return 0;
}