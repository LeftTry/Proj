# Proj
## Description

This is test project for knowing git. 

Nothing interesting just easy program and arm disfunction.

## Changes
//We changed fav film to fav book.
```cpp
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
        //cout << "Choose how to sort: Name(0), Surname(1), Favorite subject(2)" << endl;
        //cin >> a;
        res(file, 0);
    }
```
//We added statistic.

```cpp
   cout << "Statistic:" << endl;
   cout << "Quantity of ppl made test: " << v.size() / q << endl;
   set<str> ss;
   for(int j = 0;j < v.size();j++)
       if(j % q == q - 1)
           ss.insert(v[j]);
   cout << "Quantity of diff fav books: " << ss.size() << endl;
```

//We added normal output

```cpp
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
```
