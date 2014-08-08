class Solution {
public:
    int singleNumber(int A[], int n) {
        int shift,sum;
        int res=0;
        for (int i=0;i<32;i++){
            shift=(1<<i);
            sum=0;
            for(int j=0;j<n;j++){
                if(A[j]&shift){sum++;}  
            }
            if(sum%3)
                res|=shift;
        }
    return res;
    }
    
};