//  URL : https://codeforces.com/contest/1282/problem/B2
//  Problem tags : 
//  Date : 24/12/2019

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
    FOR_EACH_TESTCASE
    {
       int n,p,k,a=0;
        sn(n)sn(p)sn(k)
        vi v(n);
        fo(i,0,n) sn(v[i])
        sort(v.begin(),v.end());
        
        // for(int i=0;i<n;i+=2)
        // {
        //     p1-=v[i];
        //     if(p1<0) break;
        //     a++;

        // }
        // for(int i=1;i<n;i+=2)
        // {
        //     p-=v[i];
        //     if(p<0) break;
        //     b++;

        // }
        int mex=NINF,r,p2;
        for(int x=0;x<k;x++)
        {
            int p1=p;a=0;
            for(int i=x;i<n;i+=k)
                {
                    p1-=v[i];
                    if(p1<0) break;
                    a++;
                    r=i;
                    p2=p1;

                }
                
                if(x!=k-1)
                {
                    p2+=v[x];
                    a=k*(a-1);
                    fo(y,0,x+1)
                    {p2-=v[y];
                    if(p2<0) break;
                    a++;}
                }
                else
                {
                    a=k*a-(k-x-1);
                }
                

                if(a>mex) mex=a;
        }
        // a=2*a-1;
        // b=2*b;
        pwel(mex)

           
    }

}
