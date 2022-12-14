#include <iostream>

using namespace std;

int main(){
    int k, l, m, n;
    cin >> k >> l >> m >> n;
    if ((k % 2 == l % 2) == (m % 2 == n % 2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
