#include<stdio.h>
int board[ROW][COLUMN];
int player_row, player_column;
for (int i = 0; i < ROW; i++) {
  for (int j = 0; j < COLUMN; j++) {
    board[i][j] = EMPTY;
  }
}
board[0][0] = PLAYER;
player_row = 0;
player_column = 0;
board[2][3] = COIN;
board[4][1] = OBSTACLE;
void movePlayer(int row_offset, int column_offset) {
  int new_row = player_row + row_offset;
  int new_column = player_column + column_offset;
  if (new_row < 0 || new_row >= ROW || new_column < 0 || new_column >= COLUMN) {
    return; // invalid move
  }
  if (board[new_row][new_column] == OBSTACLE) {
    return; // obstacle in the way
  }
  if (board[new_row][new_column] == COIN) {
    score++; // collect the coin
  }
  board[player_row][player_column] = EMPTY;
  player_row = new_row;
  player_column = new_column;
  board[player_row][player_column] = PLAYER;
}
int main() {
  while (true) {
    // read input
    //move player();
    // update game state
    // render game board
  }
  return 0;
}
