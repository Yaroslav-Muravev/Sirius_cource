#include <iostream>

using namespace std;

int main(){
    int l, v, t, s;
    cin >> v >> t;
    l = 109;
    s = v*t;
    cout << ((l+s % l)%l);
    return 0;
}
