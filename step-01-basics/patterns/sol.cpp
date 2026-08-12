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

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i - 1; j++)
        {
            cout << "*";
        }
        cout << "*";
        for (int j = 0; j < i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i - 1; j++)
        {
            cout << "*";
        }
        cout << "*";
        for (int j = 0; j < i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << "\n";
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < (2 * n - 2 * i); k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (((i * (i - 1)) / 2)) + j + 1 << " ";
        }
        cout << "\n";
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            char s = 'A' + j;
            cout << s;
        }
        cout << "\n";
    }
}

void pattern15(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            char s = 'A' + j;
            cout << s;
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "Pattern 1" << "\n\n";
    pattern1(4);
    cout << "\n"
         << "Pattern 2" << "\n\n";
    pattern2(4);
    cout << "\n"
         << "Pattern 3" << "\n\n";
    pattern3(4);
    cout << "\n"
         << "Pattern 4" << "\n\n";
    pattern4(4);
    cout << "\n"
         << "Pattern 5" << "\n\n";
    pattern5(4);
    cout << "\n"
         << "Pattern 6" << "\n\n";
    pattern6(4);
    cout << "\n"
         << "Pattern 7" << "\n\n";
    pattern7(4);
    cout << "\n"
         << "Pattern 8" << "\n\n";
    pattern8(4);
    cout << "\n"
         << "Pattern 9" << "\n\n";
    pattern9(4);
    cout << "\n"
         << "Pattern 10" << "\n\n";
    pattern10(4);
    cout << "\n"
         << "Pattern 11" << "\n\n";
    pattern11(4);
    cout << "\n"
         << "Pattern 12" << "\n\n";
    pattern12(4);
    cout << "\n"
         << "Pattern 13" << "\n\n";
    pattern13(4);
    cout << "\n"
         << "Pattern 14" << "\n\n";
    pattern14(4);
    cout << "\n"
         << "Pattern 15" << "\n\n";
    pattern15(4);
    return 0;
}
