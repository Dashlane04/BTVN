#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << s1.size() << " " << s2.size() << endl;

    string concatenated = s1 + s2;
    cout << concatenated << endl;

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    cout << s1 << " " << s2 << endl;

    return 0;
}
