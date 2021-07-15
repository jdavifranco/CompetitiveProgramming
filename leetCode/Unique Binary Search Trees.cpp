class Solution {
public:
    int numTrees(int n) {
        int trees[20]={0};
        trees[0]=trees[1]=1;
        int i, j;
        for(i=2;i<=n;i++){
            for(j=1;j<=i;j++){
                trees[i]+=trees[j-1]*trees[i-j];
            }
        }
        return trees[n];
    }
};