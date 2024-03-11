#include <iostream>
#include <cstring>
#include <cctype> 
using namespace std;


bool isPalindrome(const char* str) {
  
    const char* start = str;
    const char* end = str + strlen(str) - 1;

 
    while (start < end) {
       
        while (!isalnum(*start) && start < end) {
            start++;
        }
       
        while (!isalnum(*end) && start < end) {
            end--;
        }
        
        if (tolower(*start) != tolower(*end)) {
            return false; 
        }
       
        start++;
        end--;
    }
    return true; 
}

int main() {
    char str[200];

    cin.getline(str, 200);

    if (isPalindrome(str)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
