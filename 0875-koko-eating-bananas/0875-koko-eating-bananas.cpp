class Solution {
public:

    bool possible(vector<int>& piles, int h, int speed)
    {
        long long hour = 0;

        for(int pile : piles)
        {
            hour += (pile + speed - 1) / speed;

            if(hour > h)
                return false;
        }

        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h)
    {
        long long l = 1;
        long long r = *max_element(piles.begin(), piles.end());

        long long ans = r;

        while(l <= r)
        {
            long long mid = l + (r - l) / 2;

            if(possible(piles, h, mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return ans;
    }
};