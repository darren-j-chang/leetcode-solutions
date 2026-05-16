//
// Created by Darren Chang on 5/16/26.
//
#include <string>

class Solution {
	public:
		std::string categorizeBox(int length, int width, int height, int mass) {
			bool bulky = false;
			bool heavy = false;
			long long int vol = (long long)length * width * height;
			if(length >= 10000 || width >= 10000 || height >= 10000 || vol >= 1000000000){
				bulky = true;
			}
			if(mass >= 100){
				heavy = true;
			}
			if(bulky && heavy) return "Both";
			if(bulky) return "Bulky";
			if(heavy) return "Heavy";
			return "Neither";
		}
};