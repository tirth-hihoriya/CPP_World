//  URL : https://codeforces.com/group/t5l3p8XLes/contest/260411/problem/C
//  Problem tags : NONE
//  Date : 19/12/2019


#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>

#include <stdexcept>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <cmath>

// #include <bits/stdc++.h>

#define XLR8 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define int long long
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define INT_SIZE sizeof(long long) * 8
#define ifo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define sn(n) cin >> n;
#define pwel(n) cout << n << endl;
#define vi vector<int>
#define vi2d vector<vector<int>>
#define v2d(n,m) (n,vector<int>(m));       // vi2d v v2d(n,m)
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
    XLR8
    int n,m;
    sn(n)sn(m)
    vi2d v v2d(n,m)

    ifo(i,0,n)
    {
        ifo(j,0,m)
        {
            char x;
            sn(x)
            v[i][j] = x;
            if(i%2==0 && j%2==0 && x=='.') v[i][j] = 'B';
            if(i%2==1 && j%2==1 && x=='.') v[i][j] = 'B';
            if(i%2==0 && j%2==1 && x=='.') v[i][j] = 'W';
            if(i%2==1 && j%2==0 && x=='.') v[i][j] = 'W';
            cout << (char)v[i][j];
            
        
        }
        cout << endl;
    }

}

