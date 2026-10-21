#include <iostream>
#include <string>
#include <bits/stdc++.h>

bool is_palindrome_manual(const std::string &str) {

    auto left = str.begin();
    auto right = str.end() - 1;

    while(left < right) {
        if(*left != *right) return false;

        left++;
        right--;
    }

    return true;
}

bool is_palindrome_reverse(const std::string &str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    if(reversed == str) return true;
    return false;
}

int main() {
    
    std::string s;

    std::cout << "Enter a string: ";
    std::cin >> s;

    std::cout << "Is it a palindrome?" << std::endl;
    std::cout << "manual check: " << is_palindrome_manual(s) << std::endl;
    std::cout << "reverse() check: " << is_palindrome_reverse(s) << std::endl;

    return 0;
}