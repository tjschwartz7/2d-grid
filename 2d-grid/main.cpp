

#include <stdio.h>
#include <iostream>
using namespace std;


int const ySize = 21;
int const xSize = 21;
char background[3] = ". ";
char line[3] = "# ";
char origin[3] = "+ ";
char hrz_line[3] = "- ";
char vrt_line[3] = "| ";


void graph()
{
	int opt = 0;
	int x, y, A, B, C, D = 0;
	printf("(0)y=A\n");
	printf("(1)y=Ax+B\n");
	printf("(2)y=Ax^2+Bx+C\n");
	printf("(3)y=Ax^3+Bx^2+Cx+D\n");
	scanf_s("%d", &opt);
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
					printf(line);
				else if (y == 0 && x == 0)  printf(origin);
				else if (y == 0) printf(hrz_line);
				else if (x == 0) printf(vrt_line);
				else printf(background);
				break;
			case 1:
				if (y == A * x + B)
					printf(line);
				else if (y == 0 && x == 0)  printf(origin);
				else if (y == 0) printf(hrz_line);
				else if (x == 0) printf(vrt_line);
				else printf(background);
				break;
			case 2:
				if (y == A * x * x + B * x) printf(line);
				else if (y == 0 && x == 0)  printf(origin);
				else if (y == 0) printf(hrz_line);
				else if (x == 0) printf(vrt_line);
				else printf(background);
				break;
			case 3:
				if (y == A * x * x * x + B * x * x + C * x + D)
					printf(line);
				else if (y == 0 && x == 0)  printf(origin);
				else if (y == 0) printf(hrz_line);
				else if (x == 0) printf(vrt_line);
				else printf(background);
				break;

			}

		}
		printf("\n");
	}
}


int main()
{

	int input = 0;
	while (input != -999)
	{
		printf("Exit(-999): ");
		printf("Graph(0): ");
		printf("Calculate(1):");
		cin >> input;





		switch (input)
		{
		case 0:
			graph();
			break;
		case 1:
			break;
		case -999:
			printf("Ciao");
			break;

		}
	}
}
