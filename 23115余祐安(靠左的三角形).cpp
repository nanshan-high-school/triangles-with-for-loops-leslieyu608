#include <iostream>

using namespace std;

int main()
{
    int starno, lines, turns;
    
    cout << "How many stars do you want:";
    cin >> lines;
    
    for (starno = 1; starno <= lines; starno++) {
        for (turns = 1; turns <= starno; turns++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}