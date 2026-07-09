class Solution {
public:
    int st=0,maxLen=1;
    void expand(int left,int right,string s){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        int len=right-left-1;
        if(maxLen<len){
            maxLen=len;
            st=left+1;
        }
    }
    string longestPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            expand(i,i,s); //odd len palin (this function checks if centre exists at i)
            expand(i,i+1,s);  //even length palin
        }return s.substr(st,maxLen);
    }
};