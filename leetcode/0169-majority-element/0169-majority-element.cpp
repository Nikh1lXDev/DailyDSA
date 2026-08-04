class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,cand=0;
        for(auto c: nums){
            if(count==0){
                cand=c;
                count++;
            }
            else if(cand==c){
                count++;
            }else{
                count--;
            }
        }
        return cand;
        
    }
};