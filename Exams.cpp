#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i=0; i<T; i++)
    {
        int X,Y,Z;
        cin >> X >> Y >> Z;
        int total_number_of_students = X * Y;
        double total_percent_students =  ((double)Z/total_number_of_students) * 100;
        if (total_percent_students > 50)
        {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
  return 0;
}
