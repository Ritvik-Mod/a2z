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

void nameNtimes(int n, string name)
{
    if (n == 0)
    {
        return;
    }
    cout << name << endl;
    nameNtimes(n - 1, name);
}

void print1ToN(int n)
{
    if (n == 0)
    {
        return;
    }
    print1ToN(n - 1);
    cout << n << endl;
}

void printNto1(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printNto1(n - 1);
}

int nNumberNaturalSum(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n + nNumberNaturalSum(n - 1);
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    nameNtimes(3, "Ritvik");
    print1ToN(5);
    printNto1(5);
    cout << nNumberNaturalSum(100) << endl;
    cout << factorial(5) << endl;

    return 0;
}
