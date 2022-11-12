class Solution{
    public:
        int nearestValidPoint(int x, int y, vector<vector < int>> &points)
        {
            int index = -1;
            int min = INT_MAX;
            for (int i = 0; i < points.size(); i++)
            {
                    if( x==points[i][0] || y == points[i][1]){
                    int curr = abs(x - points[i][0]) + abs(y - points[i][1]);
                    if (curr < min)
                    { 
                        min = curr;
                        index = i;
                    } 
                 }
            }
            
            return index;
        } 
}; 