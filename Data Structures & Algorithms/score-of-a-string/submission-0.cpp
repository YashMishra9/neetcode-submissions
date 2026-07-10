class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.length()-1;i++){
            // int ans=abs((s[i+1]-'a')+(s[i]-'a'));
            int ans=abs(int(s[i+1])-int(s[i]));
            score+=ans;
        }
        return score;
    }
};