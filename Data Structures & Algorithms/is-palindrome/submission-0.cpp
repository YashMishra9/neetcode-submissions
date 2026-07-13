class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        // for(char &c:s){
        //     c=tolower(c);
        // }
        while(start<=end){

            while(start<end && !isalnum(s[start])){
                start++;
            }
            while(start<end && !isalnum(s[end])){
                end--;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};
