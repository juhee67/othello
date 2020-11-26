#include <stdio.h>
#include <stdlib.h>

#define N 6

int gameboard[N][N];
void init_othello(char gmaeboard[][N]);
void print_othello(char gmaeboard[][N]);
int valid_index(char gmaeboard[][N], int deployment[][N]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main (){
	
	char gameboard[N][N];	// gameboard
	int row;				// row of gameboard
	int col;				// col of gameboard
	int number;				// number of flipped index
	int turn;
	char color;
	int invalid;			// invalid deployment 
	int a;					// for row index
	int b;					// for col index
	int deployment[N][N];	// deployment
	
	// gameboard reset
	init_othello();			
	for (row=0;row<N;row++)
		for(col=0;col<N;col++)
			gameboard[row][col] = '';
	
	
	
	// initial value in gameboard 
	gameboard[N/2-1][N/2-1] = 'O';	
	gameboard[N/2-1][N/2] = 'X';
	gameboard[N/2][N/2-1] = 'X';
	gameboard[N/2][N/2] = 'O';
	
	
	while(isGameEnd()==0)
	{
		print_othello();				// print deployment
		
	    for(turn=0;turn<32;turn++){
			
			if(valid_index(gameboard, deployment))
				continue;
				if((turn % 2 == 0)){
					color = white;
				}
				else{
					color = Black;
				}
					printf("put a new %s othello : \n", color);
					scanf("%d %d", &a, &b);		
					gameboard[a][b] = (turn % 2 == 0) ? 'O' : 'X';
		 
			if(a>=0 && b>=0 && a<N && b<N && deployment[a][b])		// check input coordinates
				if()												// reverse
				{
					printf("::flip result::\n");
					printf("W:%d E:%d N:%d S:%d NW:%d NE:%d SW:%d SE:%d\n", );
					printf("flipped %d othellos!\n", number);	// number of flipped index
															// change turn
				}
			else
				printf("invalid input!");	
							// invalid input coordinates
		}
	}
	check_result();										// print result
	
}

void init_othello(char gmaeboard[][N])
{
	int i;

	printf("  0 1 2 3 4 5\n");
		for(i=0;i<N;i++)
		{
			printf(" -------------\n");
			printf("%d|%c|%c|%c|%c|%c|%c|\n", i, gameboard[i][0], gameboard[i][1]), gameboard[i][2], gameboard[i][3], gameboard[i][4], gameboard[i][5]);
		}
		printf(" -------------\n"); 
}


