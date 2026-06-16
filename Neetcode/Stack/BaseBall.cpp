#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {

        int n = operations.size();
        int record[10000];
        int top = -1;

        for (int i = 0; i < n; i++) {

            string op = operations[i];

            if (op == "C") {
                top--;
            }
            else if (op == "D") {
                int val = 2 * record[top];
                record[++top] = val;
            }
            else if (op == "+") {
                int val = record[top] + record[top - 1];
                record[++top] = val;
            }
            else {
                record[++top] = stoi(op);
            }
        }

        int sum = 0;

        for (int i = 0; i <= top; i++) {
            sum += record[i];
        }

        return sum;
    }
};
int main () {

}