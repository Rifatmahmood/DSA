#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> mp;
  // mp.insert({"sakib al hasan", 75}); 
  // mp.insert({"tamim iqbal", 19}); 
  // mp.insert({"shamim", 87});

  mp["rifat"] = 100; 

  // for (auto it = mp.begin(); it != mp.end(); it++)
  //  {
  //   cout << it->first << " " << it->second << endl;
  // }

  cout << mp["rifat"] << endl; 
  if(mp.count("rifat")) {
    cout << "ache"; 
  } else {
    cout << "nai"; 
  }
  return 0;
}