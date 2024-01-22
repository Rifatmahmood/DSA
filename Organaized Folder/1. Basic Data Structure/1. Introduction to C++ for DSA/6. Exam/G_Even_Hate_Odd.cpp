#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;

  while (test > 0)
  {
    int n;
    cin >> n;
    int arr[n];
    int even = 0;
    int odd = 0;
    int half_of_n = n / 2;
    int result;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    if (n % 2 != 0)
    {
      result = -1;
      cout << result << endl;
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (arr[i] % 2 == 0)
        {
          even++;
        }
        else
        {
          odd++;
        }
      }
    }

    if (even == odd)
    {
      result = 0;
      cout << result << endl;
    }
    else if (even > odd)
    {
      result = even - half_of_n;
      cout << result << endl;
    }
    else
    {
      result = odd - half_of_n;
      cout << result << endl;
    }
    test--;
  }

  return 0;
}
