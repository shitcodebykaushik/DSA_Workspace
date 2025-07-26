#include <iostream>
#include <vector>
#include <queue>
#include <limits>

const int MAXN = 205;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        long long x, y;
        std::cin >> a >> b >> x >> y;

        std::vector<long long> dist(MAXN, std::numeric_limits<long long>::max());
        std::priority_queue<std::pair<long long, int>, 
                            std::vector<std::pair<long long, int>>, 
                            std::greater<std::pair<long long, int>>> pq;

        dist[a] = 0;
        pq.push({0, a});

        while (!pq.empty()) {
            auto [ryt_niw_value, u] = pq.top(); // Changed here
            pq.pop();

            if (u == b) {
                std::cout << ryt_niw_value << '\n'; // Changed here
                goto next_case;
            }

            if (ryt_niw_value > dist[u]) { // Changed here
                continue;
            }

            if (u + 1 < MAXN) {
                if (dist[u + 1] > ryt_niw_value + x) { // Changed here
                    dist[u + 1] = ryt_niw_value + x;
                    pq.push({dist[u + 1], u + 1});
                }
            }

            int v_xor = u ^ 1;
            if (v_xor < MAXN) {
                if (dist[v_xor] > ryt_niw_value + y) { // Changed here
                    dist[v_xor] = ryt_niw_value + y;
                    pq.push({dist[v_xor], v_xor});
                }
            }
        }

        std::cout << -1 << '\n';

        next_case:;
    }
    return 0;
}