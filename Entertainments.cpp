#include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    int N;
    cin >> N;
    int toy_for_child = N * 200;
    int tv_for_child = 1000;

    if(toy_for_child < tv_for_child){
        cout << toy_for_child << endl;
    }else {
        cout << tv_for_child << endl;
    }
  return 0;
}
