//gen4.cpp
#include <iostream>
#include <string>
int main() {
	std::string s;
	std::cin >> s;
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < s.length(); k++) {
				for (int l = 0; l < s.length(); l++) {
					if (i != j && i != k && i != l && j != l && j != k && k != l) {
						std::cout << s[i] << s[j] << s[k] << s[l] << std::endl;
					}
				}
			}
		}
	}
	return 0;
}
