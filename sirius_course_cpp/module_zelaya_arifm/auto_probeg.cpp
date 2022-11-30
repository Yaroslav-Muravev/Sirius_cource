#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int c, d;
    m = -m;
    d = (m%n+n)%n;
    c = (m-d)/n;
    cout << -c;
    return 0;
}
