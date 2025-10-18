#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int N,K;
        cin >> N >> K;
        int total_person = (K+1);
        int per_amount = N/total_person;
        int net_payment = N - (K * per_amount);
        cout << net_payment << endl;
    }
}
