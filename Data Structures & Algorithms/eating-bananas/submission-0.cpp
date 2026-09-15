class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=1000000000;
        int ans = 0 ;
        while (l<= r){
            int m= (l+r)/2;
            if (helper(piles,m,h)){
                ans=m ;
                r= m-1;
            }
            else l= m+1;
        }
        return ans;
    }
    bool helper(const vector<int>& piles, int x , int h){
        int h1=0;
        for (int it : piles) {
            h1 += (it + x - 1) / x; 
        }
        return (h>= h1);
    }
};
