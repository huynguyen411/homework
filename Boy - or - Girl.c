#include <stdio.h>
#include <string.h>
int main()
{
	char s[100], t[100];
	scanf("%s", s);
	int count = 0;
	int i, j;
	int l = strlen(s);
	for ( i = 0; i < l - 1; i++){
		for (j = i + 1; j < l; j++){
			if (s[i] == s[j]) s[j] = ' ';
		}
	}
	for (i = 0; i < l; i++){
		if (s[i] != ' ') count++;
	}
	if (count % 2 != 0) printf("IGNORE HIM!");
	else printf("CHAT WITH HER!");
}
