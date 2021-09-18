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

void res(vector<str> &v, ofstream& file){
    for(au i : v){
        cout << i << endl;
    }
    for(au i : v){
        file << i << endl;
    }
}

void res(ifstream& file, int a){
    str line;
    int i = 0;
    vector<pair<pair<str, str>, str>> v;
    while (std::getline(file, line)){
        if(i % 3 == a)
            v.push_back({{line, " "}, " "});
        else if(i % 3 == ((a + 1) % 3))
            v.back().first.second = line;
        else
            v.back().second = line;
        i++;
    }
    sort(v.begin(), v.end());
    for(au j : v) cout << j.first.first << endl << j.first.second << endl << j.second << endl;
}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    cout << "Questions(1) or Results(2)" << endl;
    int r;
    cin >> r;
    if(r == 1){
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
        ofstream file("output.txt", std::ios::app);
        res(all, file);
    }
    else if(r == 2){
        ifstream file("output.txt");
        int a;
        cout << "Choose how to sort: Name(0), Surname(1), Favorite subject(2)" << endl;
        cin >> a;
        res(file, a);
    }
    return 0;
}

