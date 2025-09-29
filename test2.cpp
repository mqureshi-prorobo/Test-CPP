#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> vec = {"apple", "banana", "cherry"};
    for (const auto& fruit : vec) {
        cout << fruit << endl;
    }
    return 0;
}