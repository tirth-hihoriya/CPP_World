
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
#define PI   3.141592653589
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
    int t;sn(t)
    fo(i,0,t)
    {
        int shield,nc=0,ns=0; sn(shield)
        string s; sn(s)
        int len = s.length();
        vi ci(len);
        vi v;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]=='C') {nc++; ci[i]=ns; v.push_back(ns);}
            else ns++;
        }
        // pwel(nc<<" nc")
        // pwel(ns<<" ns")

        //  for(int i=0;i<len;i++)
        // {
        //     cout<<ci[i]<<" ";
        // }

        int damage = ns;
        // pwel(" ")
        for(int i=0;i<nc;i++)
        {
            damage += pow(2,i)*v[nc-1-i];
            // pwel(v[nc-i-1])
            // pwel(i<<")"<<damage)
        }
            int count=0,swap=0;

        
        if(damage<=shield)
            {
                pwel("Case #"<<(i+1)<<": "<<swap)
                continue;
            }



            bool flag=false;
            for(int i=len-1;i>0;i--)
            {
                flag=false;
                damage=ns;
                if(s[i]=='C') count++;
                if(s[i-1]=='C' && s[i]=='S')
                {
                    swap++;
                    flag=true;
                    s[i-1]='S';
                    s[i]='C';
                    ci[i]=ci[i-1]-1;
                    ci[i-1]=0;
                    v[nc-count]=ci[i];
                    for(int i=0;i<nc;i++)
                        {
                            damage += pow(2,i)*v[nc-1-i];
                            // pwel(v[nc-i-1])
                            // pwel(i<<")"<<damage)
                        }
                        if(damage>shield) i=len;
                        else    break;
                }
            }
            
            if(flag==false && damage>shield)
            {
                pwel("Case #"<<(i+1)<<": IMPOSSIBLE")
            }
            else
            {
                pwel("Case #"<<(i+1)<<": "<<swap)
            }
            
        }
        


    
    }

