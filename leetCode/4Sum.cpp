class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& vet, int target) {
        
        vector<vector<int>> quad;
        int x=0;
        int sum=0;
        if(vet.size()<4){
            return quad;
        }
        sort(vet.begin(), vet.end());
        int n=vet.size();
        int i=0;
        int k=n-i-1;
        int j, z;
        while(i<n-3){
            if(i==0 || vet[i]!=vet[i-1]){
                for(j=i+1;j<=n-3;j++){
                    z=j+1;
                    k=n-1;
                    if(j==i+1 || vet[j]!=vet[j-1]){
                            while(z<k){
                                sum=vet[i]+vet[j]+vet[z]+vet[k];
                                if(sum==target){
                                    quad.push_back({vet[i], vet[j], vet[z], vet[k]});
                                     while(z<k && vet[j]==vet[z+1])z++;
                                    while(z<k && vet[k]==vet[k-1])k--;
                                    z++;k--;
                                }
                                else if(sum<target)z++;
                                else k--;
                            }
                    
                    }
                    
                }        
            }
            i++;
        }
        return quad;
        
    }
};