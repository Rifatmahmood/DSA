#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test; 
  while (test != 0) {
    int length;
    cin >> length;
    string s;
    cin >> s;
    int totalBallons = 0; 
    int arr[26] = {0};
    for (int i = 0; i < length; i++)
    {
      int indexFoundAlphabet = s[i] - 'A';
      arr[indexFoundAlphabet] += 1; 

      if(arr[indexFoundAlphabet] == 1) {
        totalBallons += 2; 
      } else if ( arr[indexFoundAlphabet] > 1) {
        totalBallons += 1; 
      }
    }
    cout << totalBallons << endl; 
    test--;
  }
  return 0;
}