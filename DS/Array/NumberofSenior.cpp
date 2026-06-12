class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i=0;i<details.size();i++) {
            int tensDigit = details[i][11]-'0';
            int onesDigit = details[i][12]-'0';

            int age = tensDigit *10+onesDigit;

            if(age>60) {
                count++;
            }
        }

        return count;
    };
};