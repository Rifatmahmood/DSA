#include <bits/stdc++.h>

using namespace std;

int main()
{
 char s[10005];
 int len; 
 // char result[10001] = {};
 while (cin.getline(s, 10001))
 {

  len = strlen(s);
  char result[len];
  int count = 0;
  for (int i = 0; i < len; i++)
  {
   if (int(s[i]) != ' ')
   {
    result[count++] = s[i];
   }
  }

  // converting arr into charecter;
  result[count] = '\0'; 
  sort(result, result + count); 

   for (int i = 0; i < count ; i++)
   {
    
    cout << result[i]; 
     
   }

   cout << endl; 

}

   return 0;
}
