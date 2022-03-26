class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {
            return false;
        }
        int cnt=0;
        while(n>0)
        {
            cnt++;
            n=n&(n-1);
        }
        if(cnt==1)
        {
            return true;
        }
        return false;
    }
};