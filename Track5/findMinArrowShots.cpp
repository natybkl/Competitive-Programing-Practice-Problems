class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int res=1;
        sort(points.begin(),points.end());
 
        vector<int> pt=points[0];
        for(int i=1; i<points.size(); i++){
             if(pt[0]<points[i][0] && pt[1] < points[i][0]) {
                pt=points[i];
                res++;
             }
   
            pt[0]=min(pt[0],points[i][0]);
            pt[1]=min(pt[1],points[i][1]);
        }

        return res;
    }
};
