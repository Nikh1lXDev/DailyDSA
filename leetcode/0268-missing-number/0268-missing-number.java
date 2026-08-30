class Solution {
    public int missingNumber(int[] nums) {
        long n=nums.length;
        long expe=n*(n+1)/2;
        long ac=0;
        for(int num:nums){
            ac +=num;
        }
        return (int)(expe - ac);
    }
}