#include<iostream>
#include<array>

int str_length(char *word) {
	int l = 0;
	for (int i = 0;i<=100; i++)
	{
		if (*(word+i)=='\0')
		{
			break;
		}
		l++;
	}
	return l;
}

int main() {
	char w[] = "computers";
	char *ptr = w;
	std::cout << str_length(ptr) << std::endl;

	system("pause");
}