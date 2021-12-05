
#include <stdio.h>

int main()
{

	int const ySize = 21;
	int const xSize = 21;
	int x;
	int grid[xSize][ySize];
	

	int eqX = 0;
	int eqY = 0;
	int opt;
	printf("(0)y=A\n");
	printf("(1)y=Ax+B\n");
	printf("(2)y=Ax^2+Bx+C\n");
	printf("(3)y=Ax^3+Bx^2+Cx+D\n");
	scanf_s("%d", &opt);
	int y, A, B,C,D = 0;
	printf("A,B,C,D=");
	scanf_s("%d%d%d%d", &A, &B, &C, &D);


	
	for (y = ySize - (ySize / 2); y >= -1 * (ySize - (ySize / 2)); y--)
	{
		
		for (x = -1 * (xSize - (xSize - 1) / 2); x <= (xSize - (xSize / 2)); x++)
		{
			switch (opt)
			{

			case 0:
				if (y == A)
					printf("# ");
				else printf("+ ");
				break;
			case 1:
				if (y == A * x + B)
					printf("# ");
				else printf("+ ");
				break;
			case 2:
				if (y == A * x * x + B * x)
					printf("# ");
				else printf("+ ");
				break;
			case 3:
				if (y == A * x *x*x+ B*x*x+C*x+D)
					printf("# ");
				else printf("+ ");
				break;

			}
			
		}
		printf("\n");
	}
}