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
        int total = (X * Y);
        int days = (Z * 24 * 60);
        if(total<=days){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
  return 0;
}
