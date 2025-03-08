#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> names;
    string name;
    cout << "Enter names (type 'done' to end): ";
    while (cin >> name) {
        if (name == "done") {
            break;
        }
        names.push_back(name);
    }
    for (auto it = names.begin(); it != names.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
