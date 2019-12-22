//  URL : 
//  Problem tags : 
//  Date : 

//***********************************  JUST SEE THE APROACH & IF U HAVE BETTER SOLUTION THEN SEND MESSAGE  ***********************************

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
#include "windows.h"
// #include <bits/stdc++.h>

#define XLR8 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define int long long
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define INT_SIZE sizeof(long long) * 8
#define fo(i, a, b) for(int i=a;i<b;i++)
#define rfo(i, a, b) for(int i=a;i>=b;i--)
#define GCD(a, b) __gcd(a,b)
#define sn(n) cin >> n;
#define endl '\n'
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
    vi v1(n),v2(n);
    fo(i,0,n)
    {
        sn(v1[i])
    }
    fo(i,0,n)
    {
        sn(v2[i])
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    int x=INF;
    fo(j,0,n)
    {
        int a = (v2[j] - v1[0] + m)%m;
        vi v3(n);
        fo(i,0,n)
        {   
            v3[i] = (v1[i]+a)%m;
        }
        sort(v3.begin(), v3.end());
        if(v3==v2) x = min(x,a);
        
        
    }
    pwel(x)
    return 0;

}
