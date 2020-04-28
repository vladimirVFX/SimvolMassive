// SimvolMassive.cpp

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    char str[100] = "Coding coding test string...";
    cout << str << endl;

    for (int k = 0; str[k]; k++) {
        cout << str[k] << "_";
    }
    cout << endl;

    for (char* p = str; *p; p++) {
        cout << p << endl;
    }



    system("pause > nul");
    return 0;
}

