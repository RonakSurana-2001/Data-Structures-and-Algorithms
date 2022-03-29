class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>f(32,0);
        for(e:nums)
        {
            for(int i=0;i<32;i++)
            {
                if(e&(1<<i))
                {
                    f[i]++;
                }
            }
        }
        int res=0;
        for(int i=0;i<32;i++)
        {
            if(f[i]%3==1)
            {
                res+=(1<<i);
            }
        }
        return res;
    }
};