class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flips=0;
        while(start!=0 || goal!=0){
            if((goal&1)==0){
                if((start&1)==1){
                    flips++;
                }
            }else{
                if((start&1)==0){
                    flips++;
                }
            }
            start>>=1;
            goal>>=1;
        }
        return flips;
    }
};
