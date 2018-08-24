# HASH - Hashing 
![PyPI - Status](https://img.shields.io/pypi/status/Django.svg)

Hashing is a HASH challenge from MIT Individual Contest 2008. This repo is an attempt to solve [SPOJ's version](https://www.spoj.com/problems/HASH/) of the problem.

## Context
Consider the hash function h(y) = a*y + b (mod m) which maps each integer to some integer between 0 and m-1. You are given x,n,c,d and are curious how many of the hash values h(x),h(x+1),...,h(x+n) land in the interval [c,d].

### Input
The first line contains a positive integer t, the number of test cases (1 ≤ t ≤ 10^5). t lines then follow, where the ith line gives the values a,b,x,n,c,d,m, space-separated, for the ith test case. All given values are non-negative. Also, 1 ≤ m ≤ 10^15, c ≤ d < m, a,b < m, x+n ≤ 1015, and a*(x+n) + b ≤ 10^15.

### Output
For each test case in order output the number of i, 0 ≤ i ≤ n, such that c ≤ a*(x+i) + b (mod m) ≤ d in that test case, followed by a newline.

### Example
```
Input:
2
2 3 1 3 0 1 7
1 0 0 8 0 8 9

Output:
1
9
```
