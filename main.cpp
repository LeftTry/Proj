#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <bits/stdc++.h>
#include <string>
#include <queue>
#include <sstream>
#include <ctime>
#define si set<int>
#define sll set<long long>
#define mi map<int, int>
#define mll map<long long, long long>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define str string
#define au auto
#define ch char
#define fin for(int i = 0;i < n;i++)
#define fjm for(int j = 0;j < m;j++)
#define debug cout << "ok" << endl;
#define wt while(t--)
#define ttt int t; cin >> t; wt

using namespace std;

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ifstream q("q.txt");
    str sur, name, fav;
    vector<string> all;
    str book = "book";
    str line;
    while (std::getline(q, line)) {
        cout << line << endl;
        str alli;
        cin >> alli;
        all.push_back(alli);
    }
    ofstream file("output.txt");
    for(au i : all){
        file << i << endl;
    }
    //file << name << endl << sur << endl << fav;
    return 0;
}
