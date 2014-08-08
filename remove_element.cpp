class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(A[j]>A[j+1]){
                    int tem=A[j];
                    A[j]=A[j+1];
                    A[j+1]=tem;
                }
            }
        }
        int count=0;
        int j;
        for(int i=0;i<n;i++){
            if(A[i]==elem){
                j=i;
                count++;
            }
            if(A[i]>elem){
                break;
            }
        }
        j=j+1-count;
        if(count==0){
            return n;
        }
        else{
            for(int i=j;j<n-count;j++){
                A[j]=A[j+count];
            }
            return (n-count);
        }
    }
};