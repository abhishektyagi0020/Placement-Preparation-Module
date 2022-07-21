//Reshape the Matrix.CPP leetcode problem solution

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int x=mat.size();// mat var initilize above inbulit vector and r ot c variable
        int y=mat[0].size();
        if(x*y != r*c)
        {
        return mat;
        }
 vector<vector<int>> result(r, vector<int>(c));
        int i=0, j=0;
        for(int row= 0; row <x; row++){
            for(int col=0; col<y; col++){
                result[i][j++]=mat[row][col];
        if(j>=c)
        {
        i++;
        j=0;
        }
    }
}
return result;
}
};


//pascale tringle.cpp leetcode
class Solution {// abhishektyagi0020(1923it1200)
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>>r(numRows);// n dynamic vector
        for(int i=0; i<numRows; i++) //genreate n rows
        {
        r[i].resize(i+1); // always equal no of row and columns
        r[i][0]=r[i][i]=1; //every time first and last element is 1 
            for(int j=1; j<i; j++)// first col to second last column
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        return r;
    }
};
