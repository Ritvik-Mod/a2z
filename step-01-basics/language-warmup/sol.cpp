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

void swapByVal(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
}

void swapByRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Enter an int, double and a string: " << endl;
    int num;
    double dob;
    string str;
    cin >> num >> dob >> str;
    cout << "Int entered is: " << num << ", Double entered is: " << dob << "String entered is: str" << endl;

    cout << sizeof(int) << " | " << sizeof(double) << " | " << sizeof(long long) << " | " << sizeof(char) << endl;
    cout << numeric_limits<int>::max() << "-" << numeric_limits<int>::min() << endl;
    cout << numeric_limits<long long>::max() << "-" << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<double>::max() << "-" << numeric_limits<double>::min() << endl;
    cout << numeric_limits<char>::max() << "-" << numeric_limits<char>::min() << endl;

    int marks;
    cout << "Enter marks: " << endl;
    cin >> marks;
    if (marks < 40)
    {
        cout << "Fail" << endl;
    }
    else if (marks < 70)
    {
        cout << "Pass but do better" << endl;
    }
    else
    {
        cout << "Pass" << endl;
    }

    array<int, 4> arr = {0, 1, 2, 3};
    vector<int> vec = {0, 1, 2, 3, 4, 5};

    char cStr[] = "Hello";
    string text = "Hey There";

    cout << "Array length: " << arr.size() << endl;
    cout << "Vector length: " << vec.size() << endl;
    cout << "C-String length: " << strlen(cStr) << endl;
    cout << "String length: " << text.length() << endl;

    for (int i : vec)
    {
        cout << "Vec " << i << endl;
    }

    for (char c : text)
    {
        cout << "Text " << c << endl;
    }

    for (int i = 0; i < strlen(cStr); i++)
    {
        cout << "cStr " << cStr[i] << endl;
    }

    for (int i : arr)
    {
        cout << "Arr " << i << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << "\n";

    int i = 0;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << "\n";

    int a = 10;
    int b = 20;
    swapByVal(a, b);
    cout << "a: " << a << " b: " << b << endl;
    swapByRef(a, b);
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}
