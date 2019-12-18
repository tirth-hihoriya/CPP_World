//  URL : https://codeforces.com/problemset/problem/1272/A
//  Problem tags : brute force    greedy    math    sortings    *900
//  Date : 16/12/2019



// Importing Streams
#include <iostream>
#include <fstream>

// Importing all algorithms
#include <algorithm>

// Importing Data Structures
#include <list>
#include <set>
#include <unordered_set>       //creating error if not commented..!!
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>

// Exception Handling
#include <stdexcept>

// Importing Utilities from C Modules
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <cmath>

// Dangerous Import!
// #include <bits/stdc++.h>

#define IO_PREPROCESSOR ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define int long long
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define INT_SIZE sizeof(long long) * 8
#define yo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define sn(n) cin >> n;
#define pn(n, sep) cout << n << sep;
#define vi vector<int>
#define vpii vector<pair<long long, long long> >
#define mii map<long long, long long>
#define pii pair<long long, long long>
#define si set<long long, long long>
#define qi queue<long long>
#define pb push_back
#define pf push_front
#define FOR_EACH_TESTCASE int t;sn(t);while(t--)

using namespace std;

signed main()
{
    IO_PREPROCESSOR
    FOR_EACH_TESTCASE
    {
        int a,b,c;
        cin >> a >> b >> c;
        int  x = max(max(a,b),c);
        int z = min(min(a,b),c);
        int y = (a+b+c)-(x+z);

        if(a==b && a==c) { cout << 0 << endl; continue;}
        if(z!=y) z++;
        else {z++; y++;}
        if(x==y && x==z) { cout << 0 << endl; continue;}
        if(x!=y) x--; 
        else {x--; y--;}

        cout << (x-y)+(x-z)+(y-z) << endl;
        
    }

}
