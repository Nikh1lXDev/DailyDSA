class Solution {
public:
    int jump(vector<int>& nums) {
        int near=0;
        int far=0;
        int jumps=0;
        while(far<nums.size()- 1){
            int farthest=0;
            for(int i=near;i<=far;i++){
                farthest=max(farthest,i + nums[i]);
            }
            jumps++;
            near=far + 1;
            far=farthest;
        } 
        return jumps;      
    }
};