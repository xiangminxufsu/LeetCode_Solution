class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int n1=1;
        int n2=2;
        for(int i=2;i<n;i++){
            int tem=n2;
            n2=n2+n1;
            n1=tem;
        }
        return n2;
    }
};