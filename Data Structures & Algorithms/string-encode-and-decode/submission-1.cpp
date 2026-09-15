class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for (auto& str: strs){
            ans = ans + str+ "#5!";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector <string> ans;
        string str;
        int length= s.length();
        for (int i =0 ; i< length; i++){
            char ch= s[i];
            if(ch == '#'&& s[i+1]=='5' && s[i+2]== '!'){
                ans.push_back(str);
                str = "";
                i+=2;
                continue;

            }
            str = str + ch;
        }
        return ans;
    }
};
