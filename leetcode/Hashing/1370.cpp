#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string sortString(string s) {

    }
};
class Solution {
public:
    // Function to reorder the string based on custom sorting pattern
    string sortString(string input) {
        // Step 1: Create a frequency array to store counts of all lowercase letters
        // There are 26 lowercase English letters from 'a' to 'z'
        vector<int> characterFrequency(26, 0);

        // Step 2: Count the frequency of each character in the input string
        for (int i = 0; i < input.length(); i++) {
            char currentCharacter = input[i];
            int index = currentCharacter - 'a';  // Convert character to index (e.g., 'a' = 0)
            characterFrequency[index] = characterFrequency[index] + 1;
        }

        // Step 3: Create an empty string to store the final sorted result
        string sortedResult = "";

        // Step 4: Keep building the sorted result until all characters are used
        while (sortedResult.length() < input.length()) {

            //  Ascending Pass: From 'a' to 'z'
            for (int i = 0; i < 26; i++) {
                if (characterFrequency[i] > 0) {
                    // Convert index back to character
                    char currentCharacter = i + 'a';

                    // Append to result and decrease frequency
                    sortedResult = sortedResult + currentCharacter;
                    characterFrequency[i] = characterFrequency[i] - 1;
                }
            }

            // 🔽 Descending Pass: From 'z' to 'a'
            for (int i = 25; i >= 0; i--) {
                if (characterFrequency[i] > 0) {
                    // Convert index back to character
                    char currentCharacter = i + 'a';

                    // Append to result and decrease frequency
                    sortedResult = sortedResult + currentCharacter;
                    characterFrequency[i] = characterFrequency[i] - 1;
                }
            }
        }

        // Step 5: Return the final reordered string
        return sortedResult;
    }
};

int main () {

}