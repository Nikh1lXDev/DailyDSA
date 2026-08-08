class Solution {
    public int majorityElement(int[] nums) {
        int count=0,cand=0;
        for(int x: nums){
            if(count==0){
                cand=x;
                count++;
            }else if(cand==x){
                count++;
            }else{
                count--;
            }
        }
        return cand;
    }
}