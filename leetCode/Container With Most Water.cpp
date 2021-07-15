class Solution {
public:
    int min(int in, int fim){
	    if(in<=fim){
            return in;
        }
        return fim;
    }
    
    int maxArea(vector<int>& vet) {
       int areaMax=-1;
        int area;
        int in=0, fim=vet.size()-1;
        while(in<fim){
            area=(fim-in)*min(vet[in], vet[fim]);
            if(area>=areaMax){
                areaMax=area;
            }
            if(vet[in]<=vet[fim]){
                in++;
            }
            else{
                fim--;
            }
        }
        return areaMax;
    }
};