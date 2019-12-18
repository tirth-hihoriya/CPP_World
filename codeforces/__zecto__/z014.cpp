//  URL : https://codeforces.com/contest/1266/problem/B
//  Problem tags :   NONE 
//  Date : 18/12/2019

// Importing Streams
#include <iostream>
#include <fstream>

// Importing all algorithms
#include <algorithm>

// Importing Data Structures
#include <list>
#include <set>
#include <unordered_set>
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

#define IO_PREPROCESSOR ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define TESTCASES 1

using namespace std;

signed main()
{
    IO_PREPROCESSOR
    
    int n,m;
    sn(n)sn(m)
    vector<vector<int> > v( n , vector<int> (m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c;
            sn(c)
            v[i][j] = c;

        }

    }
    int a1,b1,a2,b2,a3,b3,x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='*' && x==0)
            {
                a1=i;
                b1=j;
                x=1;
            }
            else if(v[i][j]=='*' && x==1)
            {
                a2=i;
                b2=j;
                x=2;
            }
            else if(v[i][j]=='*' && x==2)
            {
                a3=i;
                b3=j;
            }

        }

    }

    // a1 b1        a2 b2 
    //
    // a3 b3      

    if(a1==a2 && b1==b3) cout << ++a3 << " " << ++b2;
    else if(a1==a2 && b2==b3) cout << ++a3 << " " << ++b1;
    else if(a3==a2 && b2==b1) cout << ++a1 << " " << ++b3;
    else if(a3==a2 && b1==b3) cout << ++a1 << " " << ++b2;

}

