// URL : https://codeforces.com/problemset/problem/1225/B2
// Date : 15/12/2019

#include <iostream>
#include <list>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
// #include <climits>
#include <map>
#include <stack>
#include <queue>
// #include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
#define inf LLONG_MAX
#define ninf LLONG_MIN
#define INT_SIZE sizeof(long long) * 8
#define yo(i, a, b) for(int i=a;i<b;i++)
using namespace std;

// template<typename T>
// void swap(T* a, T* b) {
//     T temp = *a;
//     *a = *b;
//     *b = temp;
// }

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        // Scan n, k, d
        int n, k, d;
        cin >> n >> k >> d;

        // vector
        vector<int> v(n); // n = size of the vector...
        // vector = dynamic arrays
        // int arr[n] = {0,0,...,0};
        // vector is the first type of STL container
        // vector.push_back(i) -> O(1)
        // vector.push_front(i) -> O(1)
        // vector.emplace(i, pointer) -> esoteric and slow O(n)
        // vector.erase(i) -> O(n)
        // container -> container.begin() = pointer to the first element
        // container.begin() points at the first element.
        // container.end() points at the position one after the last element.
        // v = {1, 2, 3, 4, }
        //      |          |
        //   begin()     end()
        // memory.h
        // allocator<int> alloc;
        // alloc.allocate(8);
        // v = {0,0,0,...,0}
        // vector<int>::iterator
        // int* p = container.begin() x
        // containter<dtype>::iterator p = container.begin()
        // vector allows [] operator. -> not for all containers. there are ways to 
        // access elements differently in each container
        yo(i,0,n) cin >> v[i]; // [] is O(1) time
        // sorted, one elemtent can occur only once and if
        // we insert the same element twice, it doesn't do anything.
        // {1,2,3,4} -> s.insert(4) -> {1,2,3,4}
        // doesn't support [] operator.
        // set internally is implemented as Red Black Trees.
        // Read Black Trees are really close to AVl trees.
        // set.insert(i) -> O(log n)
        // set.erase(i)  -> O(log n)
        // set.find(i)   -> O(log n)
        // for each loop on set traveres the set 
        // according to inorder traversal.
        // We have n days.
        // We ahve k shows.
        // 1 20 18 21 1
        // We want to purchase a pack of minimum shows such that, i can watch the tv for d consicutuive days
        // Create an abstraction
        // n k d
        // map is a data strutures that stores {key, value} pairs.
        // container<dtype> name
        // map<key_dtype, val_dtype> name;
        // internal implemenetation is done using -> B and B+ trees.
        // map supports index [] operators.
        // map_name[key] gives value.
        // map.insert({key, value}) -> O(log n)
        // map.erase(key) -> O(log n)
        // map.find(key) is eqvivalent to map[key] whose time complexity is O(log n)
        // map<int, int> m; int maps to its occurance (for this case)
        // m = {}
        // m[1] = 1;
        // m = {1: 1}
        // m[1]++;
        // m = {1: 2}
        // m[2] = 2;
        // m = {1: 2,
        //      2: 2};
        // m[i];
        // m = {1: 2, 2: 2, i: 0}
        map<int, int> s;//O(1)
        int min_shows = inf; // O(1)
        yo(j,0,d) {  //O(d)
            // O(log d)
            if(!s[v[j]]) s[v[j]] = 1; // introduce the element and set the occurance to 1
            else s[v[j]]++; // increment the occurance
        }
        min_shows = min(min_shows, (int)s.size());  //O(1)
        yo(i,d,n) {   //O(n)
            // Take one step
            //O(log d)
            if(!s[v[i]]) s[v[i]] = 1; // if i'th element is bot present, introduce it
            else s[v[i]]++; // if present, increse its occurance
            if(s[v[i-d]]==1) s.erase(v[i-d]); // exclude it
            else s[v[i-d]]--; // i will pretend as if i have excluded it.
            // in this step, insert d elements in the set.
            min_shows = min(min_shows, (int)s.size());
        }
        // reslut : O(d*log d + n*log d)
        // result : O(n*log d)
        cout << min_shows << "\n";
    }
}
