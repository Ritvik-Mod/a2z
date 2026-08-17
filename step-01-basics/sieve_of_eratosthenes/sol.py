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

def sieve(n):
    isPrime = [True]*(n+1)
    isPrime[0] = isPrime[1] = False
    for i in range(2,n+1):
        if(isPrime[i]):
            for j in range(i*i,n+1,i):
                isPrime[j]=False
    for i in range(n+1):
        if(isPrime[i]):
            print(f"{i} ",end="")

def solve():
    sieve(25)


if __name__ == "__main__":
    solve()
