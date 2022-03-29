class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr;
        for(int i=0;i<=n;i++)
        {
            int cnt=0;
            int k=i;
            while(k>0)
            {
                cnt++;
                k=k&(k-1);
            }
            arr.push_back(cnt);
        }
        return arr;
    }
};