#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cout << "Enter number: ";
    cin >> a;
    string ch = to_string(a);
    bool ok;
    for (int i = 0; i < ch.length(); i++) {
        if (ch[i] == ch[ch.length() - i - 1])
            ok = true;
        else
            ok = false;
    }
    if (ok == 1)
        cout << ch << " est palindrome";
    else
        cout << ch << " n'est pas palindrome";
}