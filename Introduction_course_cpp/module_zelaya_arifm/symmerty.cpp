#include <iostream>

using namespace std;

int main(){
    int n, n_1, n_2;
    cin >> n;
    n_1 = n % 100;
    n_2 = (n % 1000 - n_1) / 10 + n / 1000;
    cout << 1 + 10*(n_1 - n_2);
    return 0;
}
