class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int n=matrix.size();
        if(n==0)return false;
        int m=matrix[0].size();
        if(m==0)return false;
        if(target<matrix[0][0] || target>matrix[n-1][m-1])return false;
        int down(0),up(n-1),mid(n/2),targetline(mid);
        if(target>=matrix[n-1][0] && target<=matrix[n-1][m-1])
        {
            targetline=n-1;
        }
        else
        {
            while (true)
            {
                mid=(down+up)/2;
                if(target>=matrix[mid][0]&& target<matrix[mid+1][0])
                {
                    targetline=mid;
                    break;
                }
                else
                {
                    if(target<matrix[mid][0])
                    {
                        up=mid;
                    }
                    else
                    {
                        down=mid;
                    }
                }
            }
        }
        if(target>matrix[targetline][m-1]) return false;
        if(m==1){
            if(target==matrix[targetline][0] || target == matrix[targetline][1])return true;
            else return false;
        }
        down=0;up=m-1;mid=(down+up)/2;
        while(true)
        {
            if(matrix[targetline][mid]==target || matrix[targetline][mid+1]==target)return true;
            else
            {
                if(matrix[targetline][mid]<target && matrix[targetline][mid+1]>target)return false;
                else
                {
                    if(matrix[targetline][mid]>target){
                        up=mid;
                        mid=(up+down)/2;
                    }
                    else {
                        down=mid;
                        mid=(up+down)/2;
                    }
                }
            }
        }
    }
};