#include <iostream>

using namespace std;

int main(){
    int str_on_page, num_str;
    cin >> str_on_page >> num_str;
    cout << (num_str - 1) / str_on_page + 1 << " " << (num_str - 1) % str_on_page + 1 << endl;
    return 0;
}
