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


def solve():
    str = input("Enter a string: ")
    num = int(input("Enter an int: "))
    numlist = list(map(int,input().split()))
    print(f'str: {str}, num: {num}, numlist: {numlist}')

    marks = int(input("Enter marks: "))
    if(marks<40):
        print("Fail")
    else:
        print("OK")

    match marks:
        case 40:
            print("Damn just passed")

    for i in range(0,5):
        print(f'{i} ')

    i = 0
    while(i<5):
        print(f'{i} ')
        i+=1

    def try_swap(a, b):
        a, b = b, a

    def mutate(lst):
        lst.append(99)

    a, b = 10, 20
    try_swap(a,b)
    print(f'a: {a}, b: {b}')
    lst = [1,2,3,4]
    mutate(lst)
    print(f'{lst}')


solve()
