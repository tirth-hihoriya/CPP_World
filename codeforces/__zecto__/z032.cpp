//  URL : https://codeforces.com/contest/1/problem/B
//  Problem tags :   implementation    math    *1700
//  Date : 22/12/2019

//***********************************  JUST SEE THE APROACH & IF U HAVE BETTER SOLUTION THEN SEND MESSAGE  ***********************************

#include <iostream>
#include <string> 
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
        string s;
        sn(s)

       
        int a;
        bool flag = false;
        fo(i,0,s.length())
        {
            if(s[i]<'A') { a=i;break;}
        }
        fo(i,a+1,s.length())
        {
            if(s[i]=='C') flag = true;
        }

        if(flag)
        {
            int pos = s.find("C"); 
            
            int r = stoi(s.substr(1,pos-1));
            int c = stoi(s.substr(pos + 1));
            
            string s1;
            int i=0;

            while(c>0)
            {
                int x = c%26;

                if(x==0)
                {
                    s1.push_back('Z');
                    c = (c/26)-1;
                }
                else
                {
                    s1.push_back('A' + (x-1)) ;
                    c = c/26;
                }
                
            }
            reverse(s1.begin(), s1.end()); 
            pwel(s1 << r)
        }
        else
        {
            string c = s.substr(0,a);
            
            int c1 = 0;
            fo(i,0,c.length())
            {
                c1 *= 26;
                c1 += c[i] - 'A' + 1;
            }

            pwel("R" << s.substr(a,s.length()-a) << "C" << c1)
        }
        
        
        
    }

}

