//Problem 1
// 01 Matrix.cpp 
//leetcode problem solution 

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) { // mat used as matrix name define
          queue<pair<int, int>> queue;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (matrix[i][j] == 0) {
                    queue.emplace(i, j);
                }
                else {
                    matrix[i][j] = numeric_limits<int>::max();
                }
            }
        }

        const vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!queue.empty()) {
            auto cell = queue.front();
            queue.pop();
            for (const auto& dir : dirs) {
                auto i = cell.first + dir.first;
                auto j = cell.second + dir.second;
                if (!(0 <= i && i < matrix.size() && 0 <= j && j < matrix[0].size() && 
                      matrix[i][j] > matrix[cell.first][cell.second] + 1)) {
                        continue;
                }
                queue.emplace(i, j);
                matrix[i][j] = matrix[cell.first][cell.second] + 1;
            }
        }
        
        return matrix;
  
    }
};


// Rotting Oranges.cpp  # leetCodesolution #cpp 


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n =grid.size();
        int m= grid[0].size();
        //4- directionally
        int dx[4]={0,1,0,-1};
        int dy[4]={-1,0,1,0};
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                // Push Rottan oranges into queue to do BFS(Layer by Layer)
                if(grid[i][j]==2)     q.push({i,j});
                //Counting number of fresh oranges.
                if(grid[i][j]==1) fresh++;      
            }
        }
        int days=0;
        while(!q.empty() and fresh){
            days++;
            int levelNodes=q.size();
            while(levelNodes--){
                pair<int,int> f=q.front();
                q.pop();
                int x=f.first,y=f.second;
                for(int i=0;i<4;i++){
               int     X=x+dx[i],Y=y+dy[i];
                    if((X>=0 and X<n) and (Y>=0 and Y<m) and grid[X][Y]==1){
                        fresh--;
                        grid[X][Y]=2;
                        q.push({X,Y});
                    }
              }
            }
        }
        //If you made all fresh oranges to rotten, return days or -1
        return (fresh==0)?days:-1;
    }
};
