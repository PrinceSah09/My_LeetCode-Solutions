class Solution{
    public:
        int nearestValidPoint(int x, int y, vector<vector < int>> &points)
        {
            
            // create a index and assign i
            int index = -1;
            
            // create a index and assign i
            int min = INT_MAX;
            
            // Traverse the 2D array (We dont need to traverse the column as there is only two points {0,1}) 
            for (int i = 0; i < points.size(); i++)
            {
                
                //Find the valid point by checking current distance point with the given point (either x should be present in the point or y should be present)
                    if( x==points[i][0] || y == points[i][1]){
                        
                        // Calculate the manhattan distance and store it in the current distance
                    int curr = abs(x - points[i][0]) + abs(y - points[i][1]);
                        
                        // Check the min distance if it is smaller , then update the min distance with current distance and as we know we have to return the index so update the index also with the current index
                    if (curr < min)
                    { 
                        min = curr; 
                        index = i;
                    } 
                 }
            } 
            
            // Then return the index
            return index;
        } 
}; 