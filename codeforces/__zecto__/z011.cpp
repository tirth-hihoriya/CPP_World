//  URL : https://codeforces.com/contest/1281/problem/B
//  Problem tags :   greedy  *1500  
//  Date : 18/12/2019

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
#define TESTCASES 1

using namespace std;

signed main()
{
    IO_PREPROCESSOR
    FOR_EACH_TESTCASE{
            string l,r;
            sn(l)sn(r)
            int len = l.length();
            int i=0,x=0;
            if(l<r){
                 cout << l << endl;
                 continue;
                }
            else{
                for (int i = 0; i < len && x==0; i++) {
                    for (int j = i+1; j < len && x==0; j++) {
                        if(l[j] < l[i]){
                            char temp = l[j];
                            l[j] = l[i];
                            l[i] = temp;
                            if (l<r) {
                                cout << l << endl;
                                x=1;
                            }
                        else{
                            char temp = l[j];
                            l[j] = l[i];
                            l[i] = temp;
                        }
                        }
                    }
                }
                if(x==0)
                cout << "---" << endl;
            }
            

    }
 

    



}

