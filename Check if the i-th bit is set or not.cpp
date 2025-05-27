*****************************BRUTE FORCE**************************
class Solution {
  public:
    bool checkKthBit(int n, int k) {
         vector<int>storebits;
         while(n>0){
             int bit=n%2;
             storebits.push_back(bit);
             n=n/2;
         }
         if (k >= storebits.size()) {
             return false;
         }
         return storebits[k] == 1;
         return false;
    }
};

2nd Approach:-

class Solution {
  public:
    bool checkKthBit(int n, int k) {
          // using right shift
        return ((n>>k)&1==1);
    }
};

3rd Approach:-

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        // using left shift
        return (n&(1<<k)) ? true : false;
    }
};
