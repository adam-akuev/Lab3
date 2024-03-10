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
    int length = size(S0);
    int OneElement = S.find(S0);
    if (S.size() >= S0.size() && OneElement > 0) {
        S.erase(OneElement, length);
        cout << "S: " << S;
    }
    else
        cout << "S: " << S;
}