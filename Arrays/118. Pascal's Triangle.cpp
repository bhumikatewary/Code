class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        
        for(int i=0; i<numRows; i++){
            r[i].resize(i+1); //resizing the inner vector present in res, it also 
            // inserts/deletes elements automatically
            r[i][0] = r[i][i] = 1; //setting the first and last values to 1
            
            for(int j=1; j<i; j++){
                r[i][j]= r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
    }
};
