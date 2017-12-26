#include <iostream>

using namespace std;

int main()
{
    int starno, lines, turns1, turns2;
    
    cout << "How many stars do you want:";
    cin >> lines;
    
    for (starno = 1; starno <= lines; starno++) {
		for (turns2 = lines; turns2 > starno && turns2 <= lines; turns2--) {
        	cout << " ";	
		}
		
		for (turns1 = 1; turns1 <= starno; turns1++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}