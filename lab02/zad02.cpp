#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

std::string revert_string(const std::string &str) {

    std::string reverted_s;

    for (auto it = str.end() - 1; it >= str.begin(); it--) {
        reverted_s += *it;
    }

    return reverted_s;
}

int main() {

    std::string s;

    std::cout << "Enter a string" << std::endl;
    std::cin >> s;

    std::cout << "Reverted manually: " << revert_string(s) << std::endl;

    std::reverse(s.begin(), s.end());
    std::cout << "Reverted using build-in function: " << s << std::endl;

    return 0;
}