//64010846
#include <stdio.h>
#include <string.h>

int main()
{
	char text[100];
	//scanf_s("%[^n]s", text);
	gets_s(text);
	int n = strlen(text);
	for (int i = 0; i < strlen(text); i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", text[j]);
		}
		n--;
		printf("\n");
	}
	return 0;
}