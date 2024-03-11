#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int oddCount = 0;
        for (auto it : freq) {
            if (it.second % 2 != 0) {
                oddCount++;
            }
        }

        std::cout << std::max(0, oddCount - 1) << std::endl;
    }

    return 0;
}
