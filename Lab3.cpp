#include <iostream>
#include <string>

using namespace std;
int main()
{
    system("chcp 1251");
    string S;
    string S0;
    cout << "Add S: ";
    getline(cin, S);
    cout << "Add S0: ";
    getline(cin, S0);
    int k = S.find(S0);
    if (k >= 0)
        cout << "TRUE";
    else
        cout << "ELSE";
}
