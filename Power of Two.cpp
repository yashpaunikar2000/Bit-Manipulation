********************BRUTE FORCE*******************
class Solution {
public:
    bool isPowerOfTwo(int n) {          
        if(n==0)
        return false;
        while(n!=1)
        {
            if(n%2!=0)
            {
                return false;
            }
            else
            {
               n=n/2; 
            }
        }
        return true;
    }
};

2nd Approach:-
Let's take some good exampes :
number->binary form
3->0000 0011
4->0000 0100
5->0000 0101
6->0000 0110
7->0000 0111
8->0000 1000

The observation we can conclude is that the number 
which is a power of two has always compulsoryily 1 true bit.

Now consider :-
bit representation of 7  -> 0111
bit representation of 8  -> 1000
bitwise AND of 7 and 8 -> 0000
we are gonna use this property for for all numbers which are powers of two

**********CODE**********

class Solution {
public:
    bool isPowerOfTwo(int n) {   
        if(n<=0)return false;       
         if((n & (n-1)) == 0)return true;
        return false;
    }
};


