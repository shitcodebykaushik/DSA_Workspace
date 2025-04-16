class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int current =0,  m=0;
            for (int&x :nums){
                if (current ==0){
                    m=x;
                    current=1;
                }else if (m==x){   // here was the one bug as initially i wrote if onlu but it need to be else if .
                     current+=1;
                }else {
                    current-=1;
                }
            }
            return m;
        }
    };