//  URL : https://codeforces.com/group/t5l3p8XLes/contest/263221/problem/D
//  Problem tags :   NONE
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
vector<string> v;
vector<string> r;
set<string> s;

signed main()
{
    IO_PREPROCESSOR
    int t;sn(t);
    int x =2*t;
    int count = t;
    while(x--)
    {
        string s;
        cin >> s;
        v.pb(s);
    }

    // t = 5 , x =10
    // v[0] v[1]
    // v[2] v[3]
    // v[4] v[5]
    // v[6] v[7]
    // v[8] v[9]
    
   for(int j=2*t-2;j>0 ;j-=2)
   {
       if(v[j]=="garbage!!") continue;

    for(int i = j-1;i>0 && j>0;i-=2)
    {
        if(v[j]==v[i])
        {
            count--;
            string temp = v[i-1];
            v[i-1] = "garbage!!";
            v[j] = temp;
        }
    }
       
   }
    cout << count << endl;

    int n=2*t;
    for(int i = 0 ; i<count;i++)
    {   if(v[n-2] != "garbage!!")
        { 
            cout << v[n-2] << " " << v[n-1] << endl;
            n-=2;
        }
        else
        {
            i--;
            n-=2;
        }
        
    }
}

