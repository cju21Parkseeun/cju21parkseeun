#include<stdio.h>
#include<string.h>

int main()
{{
	char str[80] = {};
	char res_str[80] = {};
	char*star = (char*)"********";
	int len;

	printf("Enter the words: ");
	scanf("%s", str);

	len = strlen(str);

	if (len <= 5)
	{
		strcpy(res_str, str);
	}
	else
	{
		strncpy(res_str, str, 5);
		res_str[5] = '\0';
		strncat(res_str, star, len - 5);
	}

	printf("Word(you entered): %s\nWord(changed): %s\n", str, res_str);
	return 0;
}}