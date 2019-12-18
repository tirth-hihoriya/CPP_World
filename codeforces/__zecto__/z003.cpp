//  URL : https://codeforces.com/problemset/problem/1245/B
//  Problem tags : constructive algorithms    dp    greedy    *1200
//  Date : 16/12/2019


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

using namespace std;

signed main()
{
    IO_PREPROCESSOR
    FOR_EACH_TESTCASE
    {
        int n, count=0;
        sn(n);
        int a,b,c;
        sn(a)sn(b)sn(c)
        string s;
        sn(s)
        map<char, char> m;
        vector<char> v;
        m['R'] = 'P';
        m['P'] = 'S';
        m['S'] = 'R';
        yo(i,0,n) {
            if(a>0 && m[s[i]]=='R'){count++;a--;v.pb(m[s[i]]);}
            else if(b>0 && m[s[i]]=='P'){count++;b--;v.pb(m[s[i]]);}
            else if(c>0 && m[s[i]]=='S'){count++;c--;v.pb(m[s[i]]);}
            else {
                v.pb('?');
            }
        }
        if(count<n/2 + n%2) cout << "NO\n";
        else {
            cout << "YES\n";
            for(auto x:v){
                if(x=='?'){
                    if(a>0){cout << 'R';a--;}
                    else if(b>0){cout << 'P';b--;}
                    else{cout << 'S';c--;}
                }
                else cout << x;
            }
            cout << "\n";
        }
    }
}
