
#include<iostream>
#include<stdio.h>

using namespace std;

void swap_sort(int *a,int *b,int *c,bool order) {

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

			int *ptra=a,*ptrb=b
			
			printf("Result: %i%i%i", a, b, c);
		}
	} while (a != 0);
}