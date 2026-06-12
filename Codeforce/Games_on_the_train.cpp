#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x < mn) mn = x;
            if (x > mx) mx = x;
        }

        printf("%d\n", mx - mn + 1);
    }

    return 0;
}