#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;

		if (a % b == 0) {
			std::cout << 0 << "\n";
		} else if (a < b) {
			std::cout << b - a << "\n";
		} else {
			int r = a % b;
			int cnt = b - r;
			std::cout << cnt << "\n";
		}
	}
 
  return 0;
}
