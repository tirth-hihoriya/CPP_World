// not solved
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

bool compare1(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first < j.first;
}

bool compare2(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.second < j.second;
}

signed main()
{
    XLR8
    FOR_EACH_TESTCASE
    {
        
        int np;sn(np)
        vpii v(np);
        fo(i,0,np)
        {
            sn(v[i].first)sn(v[i].second)
        }
        string s="";

        bool flag=true;

        int x=0,y=0;
        sort(v.begin(),v.end(),compare1);
        sort(v.begin(),v.end(),compare2);

        // fo(i,0,np)
        // pwel(v[i].first)
        fo(i,0,np){

        if(v[i].first-x<0 || v[i].second-y<0) { flag=false; break;}
        
        while(v[i].first-x!=0)
        {
            x++;
            s+="R";
        }
        while(v[i].second-y!=0)
        {
            y++;
            s+="U";
        }
        }

        if(flag)
        {
            pwel("YES")
            pwel(s)
        }
        else
        {
            pwel("NO")
        }
        
    }

}
