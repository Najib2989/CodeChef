#include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i; i<T; i++)
    {
        int X,Y;
        cin >> X >> Y;
        int Alice = (X+Y)/2;
        int Bob = (Y-X)/2;
        cout << Alice << " " << Bob << endl;

    }


 return 0;
}
