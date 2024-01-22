#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test != 0)
    {
        string ticket;
        cin >> ticket;
        int sumFirstHalf = 0;
        int sumSecondHalf = 0;

        for (int i = 0; i < ticket.length(); i++)
        {
            if (i < 3)
            {
                sumFirstHalf += (ticket[i] - '0'); 
            }
            else if (i < 6)
            {
                sumSecondHalf += (ticket[i] - '0'); 
            }
        }

        if (sumFirstHalf == sumSecondHalf)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        test--;
    }

    return 0;
}
