class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx=s.length()-1;
        int cnt=0;
        for(int i=idx;i>=0;i--){
            if(s[i]==' '){
                idx--;
            }
            else{
                break;
            }
        }
        for(int i=idx;i>=0;i--){
            if(s[i]!=' '){
                cnt++;
            }
            else break;
        }
        

        return cnt;
    }
};