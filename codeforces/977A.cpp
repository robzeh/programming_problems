    #include <iostream>
     
    using namespace std;
     
    int main() {
     
    	int n, k;
     
    	std::cin >> n;
    	std::cin >> k;
     
    	while (k > 0) {
    		if (n % 10 == 0) {
    			n = n / 10;
    		} else {
    			n--;
    		}
     
    		k--;
    	}
     
    	std::cout << n << "\n";
     
      return 0;
    }
