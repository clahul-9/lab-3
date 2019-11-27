#include<iostream>
#include <array>

using namespace std;

double average_salary(double *s, int l) {
	double sum;
	for (int i = 0; i < l; i++)
	{
		sum += *(s + i);
	}
	return sum / l;
}
int main() {
	int nr;
	cout << "number of people: ";
	cin >> nr;
	double *arr = new double[nr];

	for (int i = 0; i < nr; i++)
	{
		cout << "sallaries: ";
		cin >> arr[i];
		cout << endl;
	}
	cout << endl;

	double *ptr = arr;

	cout<<"The average sallary is "<<average_salary(ptr,nr)<<endl;

	delete arr;
}