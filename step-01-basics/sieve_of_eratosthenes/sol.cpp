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

vector<bool> sieveOfEratosthenes(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 25;
    vector<bool> isPrime = sieveOfEratosthenes(n);
    for (int i = 0; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}
