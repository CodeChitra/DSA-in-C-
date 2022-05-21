// Approach 1
#include <bits/stdc++.h>
using namespace std;

void dectobin(int n)
{
    int ans[10];
    int i = 0;
    while (n != 0)
    {
        ans[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter a decimal number to convert it into binary number: ";
    cin >> n;
    cout << "Binary form of given number " << n << " is:" << endl;
    dectobin(n);
    return 0;
}