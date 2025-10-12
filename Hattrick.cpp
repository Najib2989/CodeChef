#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        string A,B,C,D,E,F;
        cin >> A >> B >> C >> D >> E >> F;
        if(A=="W" && B=="W" && C=="W"){
            cout << "YES" << endl;
        }else if(B=="W" && C=="W" && D=="W"){
            cout << "YES" << endl;
        }else if(C=="W" && D=="W" && E=="W"){
           cout << "YES" << endl;
        }else if(D=="W" && E=="W" && F=="W"){
           cout << "YES" << endl;
        }else{
           cout << "NO" << endl;
        }
    }

 return 0;
}
