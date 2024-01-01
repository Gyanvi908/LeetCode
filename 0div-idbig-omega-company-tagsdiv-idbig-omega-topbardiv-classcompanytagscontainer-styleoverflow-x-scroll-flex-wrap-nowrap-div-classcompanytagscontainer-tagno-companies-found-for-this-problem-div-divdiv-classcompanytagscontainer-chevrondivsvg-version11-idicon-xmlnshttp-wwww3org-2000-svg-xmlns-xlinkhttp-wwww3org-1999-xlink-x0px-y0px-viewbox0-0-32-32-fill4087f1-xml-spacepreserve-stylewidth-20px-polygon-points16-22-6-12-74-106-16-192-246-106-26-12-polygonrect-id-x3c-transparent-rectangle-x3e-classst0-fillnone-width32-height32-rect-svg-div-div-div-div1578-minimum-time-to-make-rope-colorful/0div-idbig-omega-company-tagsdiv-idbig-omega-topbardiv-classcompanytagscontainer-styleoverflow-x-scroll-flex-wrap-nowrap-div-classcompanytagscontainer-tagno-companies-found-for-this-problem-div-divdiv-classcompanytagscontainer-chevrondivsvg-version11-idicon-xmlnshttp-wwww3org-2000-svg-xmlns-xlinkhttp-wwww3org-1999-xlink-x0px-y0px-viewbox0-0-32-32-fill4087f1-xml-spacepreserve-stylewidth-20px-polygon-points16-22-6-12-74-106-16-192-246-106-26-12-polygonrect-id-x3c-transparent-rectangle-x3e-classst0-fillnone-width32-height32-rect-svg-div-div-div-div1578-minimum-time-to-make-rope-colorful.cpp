class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
         int l=0, r, n=colors.size();
        int removes=0, locMax=0;
        for (r=0; r<n; ) {
            while (r<n && colors[r]==colors[l]) {
                removes+=neededTime[r];
                locMax=max(locMax, neededTime[r]);
                r++;
            }
            removes-= locMax;
        //  cout <<colors[l]<<": l="<<l<<" r-1="<<r-1<<" locMax="<<locMax<<" removes="<<removes<<endl;
            locMax=0;
            l=r; 
        }
        return  removes;
    }
};