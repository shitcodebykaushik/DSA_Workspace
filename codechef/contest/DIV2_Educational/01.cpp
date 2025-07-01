#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int battles; 
    cin >> battles;

    while (battles--) {
        int daenerys, winterfell, kingLanding;
        cin >> daenerys >> winterfell >> kingLanding;

        int dragon1 = abs(daenerys - winterfell);
        int dragon2 = abs(daenerys - kingLanding);

        int northStart = max(1, winterfell - dragon1 + 1);
        int northEnd = min(100, winterfell + dragon1 - 1);

        int southStart = max(1, kingLanding - dragon2 + 1);
        int southEnd = min(100, kingLanding + dragon2 - 1);

        
        int startZone = max(northStart, southStart);
        int endZone = min(northEnd, southEnd);

        bool jonWins = false;

        for (int jon = startZone; jon <= endZone; ++jon) {
            if (jon != daenerys) {
                jonWins = true;
                break;
            }
        }

        cout << (jonWins ? "YES\n" : "NO\n");
    }

    return 0;
}
