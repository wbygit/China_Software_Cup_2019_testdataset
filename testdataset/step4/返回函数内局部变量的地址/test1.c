#include <stdio.h>

char *Fun()
{
	char buffer[20];
	int i;
	for(i = 0; i < sizeof(buffer)-1; i++)
		buffer[i] = 'a';
	buffer[i] = '\0';
	return buffer;
}
int main()
{
	char *str;
	str = Fun();
	printf("%s\n", str);
	return 0;
}
