/******************************
* Keaton Whitaker
* 4883 Programming Techniques
* 8/29/2022
******************************/
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
	
    long long int A = 0, B = 0, C = 0;
    
    while (cin >> A >> B) {
			C = A - B;
			if (C < 0)
					cout << -1 * C << endl;
			else
					cout << C << endl;
    }
    return 0;
}
