#include <iostream>
#include <vector>

void sito(int n) {
    std::vector<bool> liczby(n, true);
    std::vector<int> liczby_pierwsze;
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            liczby[i] = false;
        } else {
            if (liczby[i]) {
                liczby_pierwsze.push_back(i);
                for (int j = i; j < n; j += i) {
                    liczby[j] = false;
                }
            }
        }
    }
    
    for (int prime : liczby_pierwsze) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;
}

int main() {
    sito(100);
    return 0;
}
