#include <iostream>
#include <string>

using namespace std;


int matchsticksRequired(char digit) {
    switch (digit) {
        case '0': return 6;
        case '1': return 2;
        case '2': return 5;
        case '3': return 5;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 3;
        case '8': return 7;
        case '9': return 6;
        default: return 0;
    }
}

void printLargestNumber(const string& N) {
    int totalMatchsticks = 0;


    for (char digit : N) {
        totalMatchsticks += matchsticksRequired(digit);
    }

   
    if (totalMatchsticks % 2 == 1) {
        cout << '7';
        totalMatchsticks -= 3;
    }

   
    while (totalMatchsticks > 0) {
        cout << '1';
        totalMatchsticks -= 2;
    }

    cout << endl;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string N;
        cin >> N;
        printLargestNumber(N);
    }

    return 0;
}
