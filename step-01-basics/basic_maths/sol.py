"""
problem :
link    :
pattern :
brute   : O( ) time, O( ) space
optimal : O( ) time, O( ) space
"""
from typing import List, Optional
from collections import defaultdict, deque, Counter
from heapq import heappush, heappop, heapify
from bisect import bisect_left, bisect_right

def countDigits(n):
    cnt = 0
    while(n!=0):
        cnt+=1
        n=n//10
    return cnt

def reverse(self, x: int) -> int:
        if(x<=-pow(2,31) or x>=pow(2,31)-1):
            return 0
        sign = 1
        if(x<0):
            sign = -1
            x = x*sign
        res = 0
        while(x!=0):
            if(res*10<=-pow(2,31) or res*10>=pow(2,31)-1):
                return 0
            res = res*10 + x%10
            x = x//10
        if(res*sign < -pow(2,31) or res*sign > pow(2,31)-1):
            return 0
        return res*sign

def reve(self, x: int) -> int:
        if(x<=-pow(2,31) or x>=pow(2,31)-1):
            return 0
        sign = 1
        if(x<0):
            sign = -1
            x = x*sign
        res = 0
        while(x!=0):
            if(res*10<=-pow(2,31) or res*10>=pow(2,31)-1):
                return 0
            res = res*10 + x%10
            x = x//10
        if(res*sign < -pow(2,31) or res*sign > pow(2,31)-1):
            return 0
        return res*sign
def isPalindrome(self, x: int) -> bool:
    if(x<0):
        return False
    if(x==0):
        return True
    revs = self.reve(x)
    if(revs==x):
        return True
    return False
    # text = str(x)
    # if(text == text[::-1]):
    #     return True
    # return False

def gcd(n1,n2):
    i=1
    while(i<=min(n1,n2) and n1%i==0 and n2%i==0):
        i+=1
    return i-1

def isArmstrong(n):
    text = str(n)
    p = len(text)
    sum = 0
    dummy = n
    while(dummy!=0):
        sum += pow(dummy%10,p)
        dummy = dummy//10
    return sum==n

def solve():
    print("countDigits(12345):", countDigits(12345))

    print("reverse(123):", reverse(None, 123))
    print("reverse(-456):", reverse(None, -456))

    print("reve(789):", reve(None, 789))

    class Dummy:
        def reve(self, x):
            return reve(None, x)

    obj = Dummy()

    print("isPalindrome(121):", isPalindrome(obj, 121))
    print("isPalindrome(123):", isPalindrome(obj, 123))

    print("gcd(24, 36):", gcd(24, 36))

    print("isArmstrong(153):", isArmstrong(153))
    print("isArmstrong(123):", isArmstrong(123))


if __name__ == "__main__":
    solve()