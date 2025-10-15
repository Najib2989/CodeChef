#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++) {
        long long N,final_pos;;
        cin >> N;
        if (N % 2 == 0){
            final_pos = N / 2;
        }else{
            final_pos = (N / 2) + 1;
        }
        cout << final_pos << endl;

    }
    return 0;
}
