//  URL : https://codeforces.com/problemset/problem/1328/C
//  Problem tags : greedy    implementation    *1200
//  Date : 27/03/2020

//******************************  JUST SEE THE APROACH & IF U HAVE BETTER SOLUTION THEN SEND MESSAGE  ********************************

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
#include <windows.h>  // Sleep()

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
#define pwel(n) cout << n << endl;
#define vi vector<int>
#define vi2d vector<vector<int>>
#define v2d(n,m) (n,vector<int>(m));       // vi2d v v2d(n,m)
#define vpii vector<pair<long long, long long> >
#define mii map<long long, long long>
#define pii pair<long long, long long>
#define si set<long long>
#define qi queue<long long>
#define pb push_back
#define pf push_front
#define FOR_EACH_TESTCASE int t;sn(t);while(t--)
#define TESTCASES 1

using namespace std;

signed main()
{
    XLR8
    FOR_EACH_TESTCASE
    {
        int n,flag=0;sn(n)
        string s,a="",b="";sn(s)
        fo(i,0,n)
        {
            if(flag==0)
            {
                if(s[i]=='2')
                {
                    a+="1";
                    b+="1";
                }
                else if(s[i]=='0')
                {
                    a+="0";
                    b+="0";
                }
                if(i!=n && s[i+1]=='1') 
                {
                    flag=1;
                    a+="1";
                    b+="0";
                    i++;
                }

            }
            else
            {
                if(s[i]=='2')
                {
                    a+="0";
                    b+="2";
                }
                else if(s[i]=='0')
                {
                    a+="0";
                    b+="0";
                }
                else
                {
                    a+="0";
                    b+="1";
                }
            }
            
        
        }
        pwel(a)
        pwel(b)
        
    }

}

