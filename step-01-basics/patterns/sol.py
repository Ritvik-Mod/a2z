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

def pattern2(n):
    for i in range(1,n+1):
        for j in range(0,i):
            print("*", end="")
        print("")

def pattern3(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j, end= "")
        print("")

def pattern4(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(i,end="")
        print("")

def pattern5(n):
    for i in range(0,n):
        for j in range(0,n-i):
            print("*",end="")
        print("")

def pattern6(n):
    for i in range(0,n):
        for j in range(0,n-i):
            print(j+1,end="")
        print("")

def pattern7(n):
    for i in range(n):
        for k in range(0,n-i-1):
            print(" ",end="")
        for k in range(0,i):
            print("*",end="")
        print("*",end="")
        for k in range(0,i):
            print("*",end="")
        for k in range(0,n-i-1):
            print(" ",end="")
        print("")

def pattern8(n):
    for i in range(n):
        for k in range(0,i):
            print(" ",end="")
        for k in range(0,n-i-1):
            print("*",end="")
        print("*",end="")
        for k in range(0,n-i-1):
            print("*",end="")
        for k in range(0,i):
            print(" ",end="")
        print("")

def pattern9(n):
    pattern7(n)
    pattern8(n)

def pattern10(n):
    pattern2(n)
    pattern5(n-1)

def pattern11(n):
    for i in range(n):
        for j in range(0,i+1):
            if((i+j)%2==0):
                print("1",end="")
            else:
                print("0",end="")
        print("")

def pattern12(n):
    for i in range(n):
        for j in range(0,i+1):
            print(j+1,end="")
        for k in range((2*n - 2*(i+1))):
            print(" ",end="")
        for j in range(i+1,0,-1):
            print(j,end="")
        print("")

def pattern13(n):
    for i in range(1,n+1):
        x = int((i*(i-1))/2)
        for j in range(x+1,x+i+1):
            print(j,end="")
        print("")

def pattern14(n):
    for i in range(n):
        for j in range(0,i+1):
            print(chr(ord('A')+j),end="")
        print("")

def pattern15(n):
    for i in range(n):
        for j in range(0,n-i):
            print(chr(ord('A')+j),end="")
        print("")

if __name__ == "__main__":
    pattern1(4)
    print("")
    pattern2(4)
    print("")
    pattern3(4)
    print("")
    pattern4(4)
    print("")
    pattern5(4)
    print("")
    pattern6(4)
    print("")
    pattern7(4)
    print("")
    pattern8(4)
    print("")
    pattern9(4)
    print("")
    pattern10(4)
    print("")
    pattern11(4)
    print("")
    pattern12(4)
    print("")
    pattern13(4)
    print("")
    pattern14(4)
    print("")
    pattern15(4)