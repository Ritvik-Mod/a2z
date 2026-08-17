// problem :
// link    :
// pattern :
// brute   : O( ) time, O( ) space
// better  : O( ) time, O( ) space
// optimal : O( ) time, O( ) space

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <climits>
#include <cmath>
using namespace std;

int countDigit(int n)
{
    int cnt = 1;
    while (n / 10 != 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int reverse(int x)
{
    if (x <= -pow(2, 31) || x >= pow(2, 31) - 1)
    {
        return 0;
    }
    int sign = 1;
    if (x < 0)
    {
        sign = -1;
        x = sign * x;
    }
    long long res = 0;
    while (x != 0)
    {
        long long temp = res * 10;
        if ((temp) >= INT_MAX)
            return 0;
        res = res * 10 + x % 10;
        x /= 10;
    }
    if (res * sign < INT_MIN || res * sign > INT_MAX)
        return 0;
    return int(res * sign);
}

int rev(int x)
{
    if (x <= -pow(2, 31) || x >= pow(2, 31) - 1)
    {
        return 0;
    }
    int sign = 1;
    if (x < 0)
    {
        sign = -1;
        x = sign * x;
    }
    long long res = 0;
    while (x != 0)
    {
        long long temp = res * 10;
        if ((temp) >= INT_MAX)
            return 0;
        res = res * 10 + x % 10;
        x /= 10;
    }
    if (res * sign < INT_MIN || res * sign > INT_MAX)
        return 0;
    return int(res * sign);
}

bool isPalindrome(int x)
{
    if (x == 0)
    {
        return true;
    }
    if (x < 0)
    {
        return false;
    }
    int revs = rev(x);
    if (revs == x)
    {
        return true;
    }
    return false;
}

int GCD(int n1, int n2)
{
    int i = 1;
    while (i <= min(n1, n2) && n1 % i == 0 && n2 % i == 0)
    {
        i++;
    }
    return i - 1;
}

bool isArmstrong(int n)
{
    string x = to_string(n);
    int len = x.size();
    int dummy = n;
    int sum = 0;
    while (dummy != 0)
    {
        sum = sum + pow((dummy % 10), len);
        dummy = dummy / 10;
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}

vector<int> divisors(int n)
{
    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (res.size() > 0)
            {
                if (res.back() != i)
                {
                    res.push_back(i);
                }
            }
            else
            {
                res.push_back(i);
            }
        }
    }
    return res;
}

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    int lim = int(sqrt(n));
    if (lim * lim == n)
    {
        return false;
    }
    int cnt = 0;
    for (int i = 1; i <= lim; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "countDigit(12345): " << countDigit(12345) << "\n";

    cout << "reverse(123): " << reverse(123) << "\n";
    cout << "reverse(-456): " << reverse(-456) << "\n";

    cout << "rev(789): " << rev(789) << "\n";

    cout << "isPalindrome(121): " << isPalindrome(121) << "\n";
    cout << "isPalindrome(123): " << isPalindrome(123) << "\n";

    cout << "GCD(24, 36): " << GCD(24, 36) << "\n";

    cout << "isArmstrong(153): " << isArmstrong(153) << "\n";
    cout << "isArmstrong(123): " << isArmstrong(123) << "\n";

    vector<int> divs = divisors(12);
    cout << "divisors(12): ";
    for (int x : divs)
        cout << x << " ";
    cout << "\n";

    cout << "isPrime(13): " << isPrime(13) << "\n";
    cout << "isPrime(12): " << isPrime(12) << "\n";

    return 0;
}