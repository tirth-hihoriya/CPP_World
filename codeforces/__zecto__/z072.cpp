 //  URL : https://codeforces.com/problemset/problem/1263/B
//  Problem tags :    greedy    implementation    *1400
//  Date : 29/03/2020

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
        int n,count=0;sn(n)

		map<string,int>m;
		vector<string>v(n);

		fo(i,0,n)
		{
			sn(v[i])
			m[v[i]]++;	
		}

     	fo(i,0,n)
		{
			if(m[v[i]]>=2)
			{	
				count++;
                // pwel("------------------------>"<<m[v[i]]<<"  "<<i)
				m[v[i]]--;
                // pwel("------------------------>"<<m[v[i]]<<"  "<<i)
				while(m[v[i]]!=0)
				{
                    // pwel("------->"<<m[v[i]]<<"  "<<i)
					if(v[i][0]=='9')
						v[i][0]='0';
					else
						v[i][0]++;

                    // pwel("------->"<<m[v[i]]<<"  "<<i)
				}
                // pwel("----xxxxxxx--->"<<m[v[i]]<<"  "<<i)
				m[v[i]]++;
                // pwel("---xxxxxxxx---->"<<m[v[i]]<<"  "<<i)
			}
		}
		cout<<count<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<endl;
		}
        
    }

}

