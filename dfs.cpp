
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
#define XLR8 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
// #define int long long
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

void addEdge(vector<int> adj,int u,int v)
{
    adj[u].pb(v);
    addj[v].pb(u);
}

void DFSUtil(int u, vector<int> adj[],vector<bool> &visited)
{
    visited[u]=true;
    cout << u << ' ';
    fo(i,0,adj[u].size())
    {
        if(visited[adj[u][i]]== false)
            DFSUtil(adj[u][i],adj,visited);
    }
}


void DFS(vector<int> adj[], int V)
{
    vector<bool> visited(V, false);
    fo(u,0,V)
    {
        if(visited[u] == false)
            DFSUtil(u,adj,visited);
    }
}


signed main()
{
    XLR8
    int V=3;
    vector<int> *adj = new vector<int>[V];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,2,1);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    addEdge(adj,3,1);
    DFS(adj,V);
    return 0;


}