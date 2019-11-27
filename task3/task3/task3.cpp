
#include<iostream>
#include<stdio.h>

using namespace std;

void swap_sort(int *a, int *b, int *c, bool order) {
	//makes the inputs in to an array
	int a1 = *a, b1 = *b, c1 = *c;
	int n[] = { a1,b1,c1 };
	//sorts the array
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++) {
			if (order == 0 && n[i] >= n[i + 1] && n[i + 1] > 0)
			{
				int d = n[i];
				n[i] = n[i + 1];
				n[i + 1] = d;

				if (n[i + 1] < 0)
				{
					break;
				}
			}
			else if (order == 1 && n[i] <= n[i + 1] && n[i + 1] > 0)
			{
				int d = n[i];
				n[i] = n[i + 1];
				n[i + 1] = d;
				if (n[i + 1] < 0)
				{
					break;
				}
			}
		}
	}
	//makes the array back into varibals 
	*a = n[0];
	*b = n[1];
	*c = n[2];
}

int main() {
	int a = 1,b,c;
	bool o = 0;

	do
	{
		//a
		printf("\nGive a (0 to quit): ");
		cin >> a;
		//looks if the program should continue
		if (a != 0)
		{
			//b
			printf("Give b: ");
			cin >> b;
			//c
			printf("Give c: ");
			cin >> c;
			//order
			printf("Sort ascending/descending (1/0): ");
			cin >> o;

			int *ptra = &a, *ptrb = &b, *ptrc = &c;

			swap_sort(ptra, ptrb, ptrc, o);
			
			printf("Result: %i%i%i", a, b, c);
		}
	} while (a != 0);
}