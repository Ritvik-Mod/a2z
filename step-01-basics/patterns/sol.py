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

def pattern16(n):
    for i in range(n):
        c = chr(ord('A')+i)
        for j in range(i+1):
            print(c,end="")
        print("")

def pattern17(n):
    for i in range(n):
        s = chr(ord('A')+i)
        for j in range(n-i-1):
            print(" ",end="")
        for j in range(i):
            c = chr(ord('A')+j)
            print(c,end="")
        print(s,end="")
        for j in range(1,i+1):
            c = chr(ord(s)-j)
            print(c,end="")
        for j in range(n-i-1):
            print(" ",end="")
        print("")

def pattern18(n):
    for i in range(n):
        start = chr(ord('A')+(n-i-1))
        for j in range(i+1):
            print(chr(ord(start)+j),end="")
        print("")

def pattern19(n):
    for i in range(n):
        for j in range(int(((2 * n) - (2 * i)) / 2)):
            print("*",end="")
        for j in range(2*i):
            print(" ",end="")
        for j in range(int(((2 * n) - (2 * i)) / 2)):
            print("*",end="")
        print("")
    for i in range(n):
        for j in range(int((2 + (2 * i)) / 2)):
            print("*",end="")
        for j in range(int((2 * n - (2 + (2 * i))))):
            print(" ",end="")
        for j in range(int((2 + (2 * i)) / 2)):
            print("*",end="")
        print("")

def pattern20(n):
    for i in range(n-1):
        stars = 2*(i+1)
        blanks = 2*n - 2*(i+1)
        for j in range(int(stars/2)):
            print("*",end="")
        for j in range(blanks):
            print(" ",end="")
        for j in range(int(stars/2)):
            print("*",end="")
        print("")

    for i in range(2*n):
        print("*",end="")
    print("")
    for i in range(n-1):
        blanks = 2*(i+1)
        stars = 2*n - 2*(i+1)
        for j in range(int(stars/2)):
            print("*",end="")
        for j in range(blanks):
            print(" ",end="")
        for j in range(int(stars/2)):
            print("*",end="")
        print("")

def pattern21(n):
    for i in range(1,n+1):
        if(i==1 or i==n):
            for j in range(n):
                print("*",end="")
        else:
            print("*",end="")
            for j in range(n-2):
                print(" ",end="")
            print("*",end="")
        print("")

def pattern22(n):
    for i in range((n-1)*2 + 1):
        for j in range((n-1)*2 + 1):
            row_dist = min(i, (n-1)*2 - i)
            col_dist = min(j, (n-1)*2 - j)
            use = min(row_dist, col_dist)
            print(n-use, end="")
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
    print("")
    pattern16(4)
    print("")
    pattern17(4)
    print("")
    pattern18(4)
    print("")
    pattern19(4)
    print("")
    pattern20(4)
    print("")
    pattern21(4)
    print("")
    pattern22(4)