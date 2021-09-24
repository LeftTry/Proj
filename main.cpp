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
    int q = 0;
    ifstream qt("q.txt");
    while (std::getline(qt, line)) q++;
    vector<str> v;
    while (std::getline(file, line))
        v.push_back(line);
    for(au j : v) cout << j << endl;
    cout << "Statistic:" << endl;
    cout << "Quantity of ppl made test: " << v.size() / q << endl;
    set<str> ss;
    for(int j = 0;j < v.size();j++)
        if(j % q == q - 1)
            ss.insert(v[j]);
    cout << "Quantity of diff fav books: " << ss.size() << endl;
}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    cout << "Questions(1) or Results(2) or Redact questions(3)" << endl;
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
        //cout << "Choose how to sort: Name(0), Surname(1), Favorite subject(2)" << endl;
        //cin >> a;
        res(file, 0);
    }
    else if(r == 3) {
        ifstream fino("q.txt");

        string question;

        cout << "Old question list: " << endl;

        while(getline(fino, question))
            cout << question << endl;

        fino.close();

        ofstream fout("q.txt");

        int amQuestions;

        cout << "Enter new questions amount: " << endl;

        cin >> amQuestions;

        cout << "Enter new question list: " << endl;

        getline(cin, question);

        for(int i = 0; i < amQuestions; i ++)
        {
            getline(cin, question);
            fout << question << endl;
        }

        fout.close();

        ofstream fouto("output.txt");

        fouto << "";

        fouto.close();

    }
    return 0;
}

