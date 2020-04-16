#include <bits/stdc++.h>

using namespace std;

int main() {

    int width, splits;
    std::cin >> width >> splits;
    
    std::vector<bool> arr(width+1);
    arr[0] = 1;
    arr[width] = 1;

    for (int i = 0; i < splits; i++) {
        int x;
        std::cin >> x;
        arr[x] = true; 
    }

    set<int> lens;

    int lo, hi;
    lo = hi = 0;

    while (lo < arr.size()) {
        if (arr[lo] == true) {
            hi = lo+1;
            while (hi < arr.size()) {
                if (arr[hi] == true) {
                    int l = hi - lo;
                    lens.insert(l);
                }
                hi++;
            }
        }
        lo++;
    }   

    for (auto elem : lens) {
        std::cout << elem << " ";
    }
    
  return 0;
}

