// not completed
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
        int n;sn(n)
        string s;
        sn(s)
        int dx,dy,l=0,r=0,u=0,d=0,cx=0,cy=0,st=0,et=0,x,fs,fe;
        fo(i,0,n)
        {
            if(s[i]=='L') l++;
            else if(s[i]=='U') u++;
            else if(s[i]=='R') r++;
            else d++;
        }
        dx=r-l;
        dy=u-d;
        int minn=INF,count=0;
        bool flag=true,f2=true;
        fo(i,0,n)
        {
            if(s[i]=='L') cx--;
            else if(s[i]=='U') cy++;
            else if(s[i]=='R') cx++;
            else cy--;

            if(dx==cx && dy==cy && flag)
            {
                count++;
                st=i-et;
                x=et;
                if(st<minn)
                    {minn=st;
                    fs=x;fe=i;}
                et=i;
            }
            // if(dx==cx && dy==cy && flag){ flag=false; st=i+1; f2=false;}
            // else if(dx==cx && dy==cy && !flag){ e=i; f2=true;}
            // else if(!f2) { e=i; }

            
            
            
        }
       
        if(dx!=0 && dy!=0 && ++fe==n) pwel(-1)
        else cout << ++fs << " " << ++fe << '\n';
    }

}
