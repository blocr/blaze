#include <stdio.h>
#include "definitions.h"
#include "functions.h"

void main() {
	int i;
	char *fen = "r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w KQkq - 0 1";
	Board board[1];
	MoveList list[1];
	parseFEN(fen, board);
	printBoardSAN(board);
	generateMoves(board, list);
	printMoveList(list);
}
