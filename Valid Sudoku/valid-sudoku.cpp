class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int crit1 = 0, crit2 = 0, crit3 = 0;
        int num = 1;

        while(num <= 9) { // Changed < to <= to include the number 9
            char target = num + '0'; // Convert int to char (e.g., 1 -> '1')

            for(int i = 0; i < 9; i++) {
                crit1 = 0; 
                crit2 = 0;
                for(int j = 0; j < 9; j++) {
                    if(board[i][j] == target) { crit1 += 1; }
                    if(board[j][i] == target) { crit2 += 1; }
                    
                    if(crit1 > 1 || crit2 > 1) return false;
                }
            }

            for (int x = 0; x < 9; x += 3) {
                for (int y = 0; y < 9; y += 3) {
                    crit3 = 0;
                    for(int b = y; b < y + 3; b++) {
                        for(int c = x; c < x + 3; c++) {
                            if(board[b][c] == target) {
                                crit3 += 1;
                            }
                        }
                    }
                    if(crit3 > 1) return false;      
                }   
            }
            num += 1;
        }
        return true;
    }
};
