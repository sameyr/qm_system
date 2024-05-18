/*
You are given a map of a server center, represented as a m * n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.

Return the number of servers that communicate with any other server.

Example 1:
Input: grid = [[1,0],[0,1]]
Output: 0
Explanation: No servers can communicate with others.

Example 2:
Input: grid = [[1,0],[1,1]]
Output: 3
Explanation: All three servers can communicate with at least one other server.

Example 3:
Input: grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]]
Output: 4
Explanation: The two servers in the first row can communicate with each other. The two servers in the third column can communicate with each other. The server at right bottom corner can't communicate with any other server.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int row = grid.size();
        int serverCount = 0;
        int column = grid[0].size();
        
        vector<int> rowServer(row,0);   // makes no. of 'row' indexes with value'0' 
        vector<int> columnServer(column,0);  //makes no. of 'column' indexes with value '0'

        /*iterating through each index of the whole grid to see how many '1'/"server" is there in each row and column */ 

        for (int i =0 ; i < row; i++){
            for (int j =0 ; j<column ; j++){
                if (grid[i][j] == 1){
                    rowServer[i]++;     // increasing that specefic row if there is '1'
                    columnServer[j]++;  //increasing that specefic column if there is '1'
                } 
            }
        }

        /* iterating through each index of grid again (both column and rows) 
        and checking if there is more than one server in that specefic column or row.
        if yes, server count increases else nothing happens. */

        for (int i =0 ; i < row; i++){
            for (int j =0 ; j<column ; j++){
                if(grid[i][j] == 1 && ((rowServer[i] > 1) || (columnServer[j] > 1))){
                    serverCount++;
                }
            }
        }

        return serverCount;
    }
};

int main(){
    vector<vector<int>> grid = {{1,0,1,0,1,0},
                                {1,1,1,0,0,0},
                                {0,1,0,1,0,1}};

    Solution s1;
    int totalServer = s1.countServers(grid);

    cout << "The total number of server that can communicate in this topology are:" << totalServer;

    return 0;
}