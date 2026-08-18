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

def nameNtimes(name, n):
    if(n==0):
        return
    print(name)
    nameNtimes(name,n-1)

def oneToN(n):
    if(n==0):
        return
    oneToN(n-1)
    print(n)

def nToOne(n):
    if(n==0):
        return
    print(n)
    nToOne(n-1)

def nNaturalSum(n):
    if(n==1):
        return n
    return n + nNaturalSum(n-1)

def factorial(n):
    if(n==1 or n==0):
        return 1
    return n*factorial(n-1)

def solve():
    nameNtimes("Ritvik",3)
    oneToN(5)
    nToOne(5)
    print(nNaturalSum(100))
    print(factorial(5))

if __name__ == "__main__":
    solve()
