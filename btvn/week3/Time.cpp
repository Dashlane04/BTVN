#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    stringstream ss(s);
    int hour, minute, second;
    char colon;
    ss >> hour >> colon >> minute >> colon >> second;
    if (s.substr(s.size() - 2) == "PM" && hour != 12)
    {
        hour += 12;
    }
    if (s.substr(s.size() - 2) == "AM" && hour == 12)
    {
        hour = 0;
    }
    stringstream result;
    result << (hour < 10 ? "0" : "") << hour << colon
        << (minute < 10 ? "0" : "") << minute << colon
        << (second < 10 ? "0" : "") << second;
    return result.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
