#include <iostream>
using namespace std;

int dectobin(int n)
{
    int rem;
    int ans = 0;
    int place = 1;

    while (n > 0)
    {
        rem = n % 2;
        ans = ans + rem * place;
        place *= 10;
        n /= 2;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    cout << "Binary number = " << dectobin(n);
}