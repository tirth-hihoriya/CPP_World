//  URL : https://codeforces.com/contest/1281/problem/C
//  Problem tags :   implementation    math    *1700
//  Date : 17/12/2019

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
    #ifdef TESTCASES
        FOR_EACH_TESTCASE
        {
            int x;
            string s;
            int l=0,len,count;
            cin>>x>>s;
            len=s.length();
            string right;
            while(l < x)
            {
                l++;
                int c=s[l-1]-'0';
               
                if(c==1)
                    continue;
                if(s.length() < x)
                    right=s.substr(l,s.length()-l);
                count=(len-l+MOD)%MOD;
                c--;
                while(c--)
                {
                    if(s.length() < x)
                        s+=right;
                    len=(len+count)%MOD;
                }
            }
            cout<<len<<endl;
        }

    #endif
}