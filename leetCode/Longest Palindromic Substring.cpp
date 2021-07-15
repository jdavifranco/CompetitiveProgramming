

class Solution {
public:
    string longestPalindrome(string s) {
        int i, j, max=0;
        int n = s.length();
        if(n<=1) return s;
        if(n==2){
            if(s[0]==s[1]) return s;
            else return s.substr(0, 1);
        }
        string res=s.substr(0,1);
        for(i=0;i<n-1;i++){
            for(j=n-1;j>i;j--){
                if(s[i]==s[j]){
                    int k=i;
                    int z=j;
                    while(k<=z && s[k]==s[z]){z--;k++;}
                    if(k>z){
                        if(j-i+1 > res.length()){
                            res=s.substr(i, j-i+1);
                        }
                    }
                }
            }
        }
        return res;
    }
};