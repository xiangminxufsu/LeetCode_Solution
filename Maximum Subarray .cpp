class Solution {
public:
    int maxSubArray(int A[], int n) {
        if(n==1)
            return A[0];
        int sum=0;
        int res=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(res<sum)
                res=sum;
            if(sum<0)
                sum=0;
        }
        if(res==0){
            res=A[0];
            for(int i=1;i<n;i++){
                if(A[i]>res)
                    res=A[i];
            }
        }
        return res;
    }
};