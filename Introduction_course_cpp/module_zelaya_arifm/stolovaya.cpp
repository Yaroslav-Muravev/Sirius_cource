#include <iostream>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    int res_kop = (a*100 + b)*n;
    cout << res_kop / 100 << " " << res_kop % 100;
    return 0;
}
