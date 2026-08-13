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

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char s = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << s;
        }
        cout << "\n";
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            char c = 'A' + j;
            cout << c;
        }
        char s = 'A' + i;
        cout << s;
        for (int j = 1; j < i + 1; j++)
        {
            char c = s - j;
            cout << c;
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char start = 'A' + (n - i - 1);
        for (int j = 0; j < i + 1; j++)
        {
            char c = start + j;
            cout << c;
        }
        cout << "\n";
    }
}

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2 * n) - (2 * i)) / 2; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (2 * i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ((2 * n) - (2 * i)) / 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 + (2 * i)) / 2; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (2 * n - (2 + (2 * i))); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 + (2 * i)) / 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern20(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int blanks = 2 * n - 2 * (i + 1);
        int stars = 2 * (i + 1);
        for (int j = 0; j < stars / 2; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < blanks; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars / 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << "*";
    }
    cout << "\n";
    for (int i = 0; i < n - 1; i++)
    {
        int stars = 2 * n - 2 * (i + 1);
        int blanks = 2 * (i + 1);
        for (int j = 0; j < stars / 2; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < blanks; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars / 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int j = 0; j < n - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern22(int n)
{
    for (int i = 0; i < (n - 1) * 2 + 1; i++)
    {
        for (int j = 0; j < (n - 1) * 2 + 1; j++)
        {
            int row_dist = min(i, (n - 1) * 2 - i);
            int col_dist = min(j, (n - 1) * 2 - j);
            int use = min(row_dist, col_dist);
            cout << n - use;
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
    cout << "\n"
         << "Pattern 16" << "\n\n";
    pattern16(4);
    cout << "\n"
         << "Pattern 17" << "\n\n";
    pattern17(4);
    cout << "\n"
         << "Pattern 18" << "\n\n";
    pattern18(4);
    cout << "\n"
         << "Pattern 19" << "\n\n";
    pattern19(4);
    cout << "\n"
         << "Pattern 20" << "\n\n";
    pattern20(4);
    cout << "\n"
         << "Pattern 21" << "\n\n";
    pattern21(4);
    cout << "\n"
         << "Pattern 22" << "\n\n";
    pattern22(4);
    return 0;
}
