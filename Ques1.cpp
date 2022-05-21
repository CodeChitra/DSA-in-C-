// Find sum and product of digits of given number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1234;
    int rem, sum = 0, prod = 1;

    while (n != 0)
    {

        rem = n % 10;
        sum = rem + sum;
        prod = prod * rem;
        n = n / 10;
    }

    cout << "Sum is " << sum << " "
         << "Product is " << prod;
    return 0;
}