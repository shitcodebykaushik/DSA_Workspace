#include <bits/stdc++.h>
using namespace std;

struct State {
    int queue_index;
    int people_ahead;
    int time;
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // visited[i][j]: have we visited queue i with j people ahead
        vector<vector<bool>> visited(N, vector<bool>(501, false));

        queue<State> q;
        q.push({0, A[0] - 1, 0});
        visited[0][A[0] - 1] = true;

        int answer = -1;

        while (!q.empty()) {
            State curr = q.front(); q.pop();

            if (curr.people_ahead == 0) {
                answer = curr.time;
                break;
            }

            int new_people_ahead = max(0, curr.people_ahead - 1);
            int next_time = curr.time + 1;

            // Stay
            if (!visited[curr.queue_index][new_people_ahead]) {
                visited[curr.queue_index][new_people_ahead] = true;
                q.push({curr.queue_index, new_people_ahead, next_time});
            }

            // Move left
            if (curr.queue_index > 0) {
                int left_people = A[curr.queue_index - 1];
                int people_when_arrive = max(0, left_people - next_time);
                if (!visited[curr.queue_index - 1][people_when_arrive]) {
                    visited[curr.queue_index - 1][people_when_arrive] = true;
                    q.push({curr.queue_index - 1, people_when_arrive, next_time});
                }
            }

            // Move right
            if (curr.queue_index < N - 1) {
                int right_people = A[curr.queue_index + 1];
                int people_when_arrive = max(0, right_people - next_time);
                if (!visited[curr.queue_index + 1][people_when_arrive]) {
                    visited[curr.queue_index + 1][people_when_arrive] = true;
                    q.push({curr.queue_index + 1, people_when_arrive, next_time});
                }
            }
        }

        cout << answer << endl;
    }

    return 0;
}
