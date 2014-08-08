class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        if(n==0){
            return 0;
        }
        else{
            if(A[0]>target){
                return 0;
            }
            if(A[n-1]<target){
                return n;
            }
            for(int i=0;i<n;i++){
                if(A[i]==target){
                    return i;
                }
                if(A[i]>target){
                    return i;
                }
            }
            
        }
    }
};