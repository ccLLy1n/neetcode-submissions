class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_pile = *max_element(piles.begin(), piles.end());
        int min_pile = 1;
        int min = max_pile; 
        while(min_pile <= max_pile) 
        {
            int mid = (min_pile + max_pile)/2; 
            int using_hour = 0;
            for(int i=0;i<piles.size();i++)
            {
                using_hour = using_hour + piles[i] / mid;
                if(piles[i] % mid){
                    using_hour++;
                }
            }
            if(using_hour > h){ // totol h > limited h => mid not big enough
                min_pile = mid + 1;
            }
            else if(using_hour <= h){ // totol h < limited h => okay but may not mininum
                max_pile = mid - 1;
                if(mid < min){ // update min;
                    min = mid;
                }
            }
        }
        return min;
    }
};
