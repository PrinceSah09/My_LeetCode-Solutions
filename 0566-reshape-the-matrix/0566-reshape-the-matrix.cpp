 class Solution
 {
     public:
         vector<vector < int>> matrixReshape(vector<vector < int>> &mat, int r, int c)
         {
            	// r = Row and c = column
            	// Step 1 : calculate number of element so that we can check wether the given r and c is valid or not
             int row = mat.size();
             int col = mat[0].size();

            	// Step 2 : If all the elements of a given matrix is not filled with the given r and c then we simply return the original matrix
             if (row *col != r *c)
                 return mat;

            	// we created a new 2D vector so that we can filled all the elements of a given matrix(mat)
             vector<vector < int>> ans;

            	// We created a new vector, The purpose of creating a new vector is that; we can itereate over the original matrix (mat) and filled the every row's elements of original matrix and push it into our newly created 2D matrix (ans) 
             vector<int> v;

            	// Here we create a new var 'count' for track the number of element that is inside the column part 
             int count = 0;

             for (int i = 0; i < row; i++)
             {
                 for (int j = 0; j < col; j++)
                 {
                    	// Till elements of cloumn exits we simply push row elements to the small vector (v) 
                     v.push_back(mat[i][j]);
                     count++;

                    	//  
                     if (count == c)
                     {
                         count = 0;
                         ans.push_back(v);
                         v.clear();
                     }
                 }
             }

             return ans;
         }
 };