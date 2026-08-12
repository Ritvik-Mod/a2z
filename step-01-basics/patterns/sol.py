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


def pattern1(n):
    for i in range(n):
        for j in range(n):
            print("*", end = "")
        print("") 


if __name__ == "__main__":
    pattern1(4)
