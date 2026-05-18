//
// Created by Darren Chang on 5/18/26.
//
class Solution {
	public:
		bool isPalindrome(std::string s) {
			std::string clean = "";

			for (char c : s) {
				if (isalnum(c)) {
					clean += tolower(c);
				}
			}

			int start = 0;
			int end = clean.length() - 1;

			while (start <= end) {
				if (clean[start] != clean[end]) {
					return false;
				}
				start++;
				end--;
			}
			return true;
		}
};