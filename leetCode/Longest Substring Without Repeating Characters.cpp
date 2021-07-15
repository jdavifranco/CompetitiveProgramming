class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
        	return 0;
		}
		else if(s.length()==1){
			return 1;
		}
		
		map<int, char> chars;
		int n = s.length();
		int i=0, j=0;
		int max=-1, maxtemp=0;
		int key;
		while(i<=j && j<n){
			key = s[j];
			if(chars.find(key)==chars.end()){
				chars.insert(pair<int,char>(key, s[j]));
				maxtemp=chars.size();
				j++;
			}
			else{
				key=s[i];
				chars.erase(key);
				i++;
			}
			if(maxtemp>max){
				max=maxtemp;
			}
			
		}
	return max;   
}        
       
};