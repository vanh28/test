#include <bits/stdc++.h>
using namespace std;
int reverse(int n) {
    int res = 0;
    while(n > 0) {
        int temp = n % 10;
        res = res*10 + temp;
        n/=10;
    }
    return res;
}
bool check(int n, int k) {
    if (abs(n-reverse(n)) % k == 0 || abs(n-reverse(n)) / k == 0 ) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}