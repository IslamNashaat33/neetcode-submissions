class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans, 0,0,n,"");
        return ans;
    }

    void helper(vector<string> & ans, int open ,int closed, int n, string s){
        if (s.length()== n *2) {
            ans.push_back(s);
            return;}
        if (open > closed) helper(ans, open, closed+1, n, s+ ")");
        if (open < n) helper(ans,open+1, closed,n , s+"(");
    }
};
