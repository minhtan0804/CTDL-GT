#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int *A = new int[n];
        for (int i = 0; i < n; i++) cin >> A[i];
        sort(A, A+n);
        for (int i = 0; i < n; i++) cout << A[i] << " ";
        cout << endl;
    }
}
