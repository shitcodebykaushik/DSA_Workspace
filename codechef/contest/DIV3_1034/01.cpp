#include <iostream>
#include <string>
#include <array>

const std::array<std::string, 4> champ = {"Bob", "Alice", "Alice", "Alice"};

std::string getWinner(int n) {
    return champ[n % 4];
}

void solution() {
    int n;
    std::cin >> n;
    std::cout << getWinner(n) << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}