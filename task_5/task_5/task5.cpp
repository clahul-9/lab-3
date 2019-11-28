#include <iostream>
#include<array>

void replace_chars(char *str,char search,char replacement) {
	int i = 0;
	while (*(str+i)!='\0')
	{
		if (*(str+i)==search)
		{
			*(str + i) = replacement;
		}
		i++;
	}
}

int main() {
	char str[] = "hello";
	char s = 'h';
	char r = 'g';

	char *ptr = str;

	replace_chars(ptr, s, r);
}