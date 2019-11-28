#include <iostream>
#include<vector>
#include<stdio.h>
#include<string>
#include <fstream>

using namespace std;

void initialice(vector<string> *v) {
	(*v).clear();
}

void insert(vector<string> *v) {
	string c;
	int x = 0;
	do
	{
		printf_s("enter a Name(q/Q to quite): ");
		cin >> c;
		if (c == "q" || c == "Q")
		{
			x = 1;
			break;
		}
		(*v).insert((*v).begin(), c);
	} while (x == 0);


}

void search(vector<string> *v) {
	string c;
	printf_s("Enter search term: ");
	cin >> c;
	int q = -1;
	for (auto e : (*v))
	{
		q = e.find(c);
		if (q >= 0)
		{
			cout << e << endl;
			q = -1;
		}
	}
}

void delet(vector<string> *v) {
	string c;
	printf_s("Enter the term to delete: ");
	cin >> c;
	for (int i = 0; i < (*v).size(); i++)
	{
		if (c == (*v)[i])
		{
			(*v).erase((*v).begin() + i);
		}
	}
}

void print(vector<string> *v) {
	for (auto e : (*v))
	{
		cout << e << endl;
	}
}

void save(vector<string> *v) {
	string filename;
	ofstream file;

	printf_s("filename: ");
	cin >> filename;
	filename += ".txt";

	file.open(filename);

	if (file.is_open())
	{
		for (auto e : (*v))
		{
			cout << e << endl;
			file << e << "\n";
		}	
	}
	else
	{
		cout << "Ther is no file whit that name." << endl;
	}
	file.close();
}

void load(vector<string> *v) {
	(*v).clear();
	
	string filename;
	ifstream file;
	string data;

	printf_s("filename: ");
	cin >> filename;
	filename += ".txt";

	file.open(filename);
	if (file.is_open()) {
		while (getline(file, data)
			)
		{
			(*v).insert((*v).begin(), data);
		}
	}
	else
	{
		cout << "Ther is no file whit that name." << endl;
	}
	file.close();
}

int main() {
	vector<string> v;

	vector<string>*ptr = &v;
	int c;

	int x = 0;
	while (x == 0)
	{
		printf("MENU:\n\n1: initialise database  \n2. insert\n3. search\n4. delete\n5. print\n6. save\n7. load\n8. quit\n\nMake your choice:");
		cin >> c;
		switch (c)
		{
		case 1:
			initialice(ptr);
			break;
		case 2:
			insert(ptr);
			break;
		case 3:
			search(ptr);
			break;
		case 4:
			delet(ptr);
			break;
		case 5:
			print(ptr);
			break;
		case 6:
			save(ptr);
			break;
		case 7:
			load(ptr);
			break;
		case 8:
			x = 1;
			break;
		}
	}
}