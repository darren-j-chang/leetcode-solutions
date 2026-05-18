//
// Created by Darren Chang on 5/18/26.
//
#include <string>
#include <algorithm>
#include <cctype>

class Solution {
	public:
		bool isPalindrome(std::string s) {
			auto it = std::remove_if(s.begin(), s.end(),
				[](unsigned char c) {
					return !std::isalnum(c);
				});
			s.erase(it, s.end());

			std::transform(s.begin(), s.end(), s.begin(),
				[](unsigned char c) { return std::tolower(c); });

			int left = 0;
			int right = static_cast<int>(s.size()) - 1;

			while (left < right) {
				if (s[left] != s[right]) {
					return false;
				}
				++left;
				--right;
			}
			return true;
		}
};