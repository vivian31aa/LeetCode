class Solution {
public:
    int bitwiseComplement(int n) {
          int k=0,sum=0;
          if(n==0)    sum=1;
            while(n>0){
                if(n%2==0){
                    sum+=pow(2,k);    
                }
                k++;
                n/=2;
            }
            return sum;
    }
};
