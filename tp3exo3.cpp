#define _CRT_SECURES_NO_WARNINGS
#pragma hdratop
#pragma argsused 

#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <tchar.h>
#else

typedef char _TCHAR;
#define _tmain main
#endif

#define Max 200 
int main()

{
	char tableau[Max];
	char 1;
	int x = 0, a, j, k, repete = 0;
	printf("entrez une chaine de caracteres :\n");
	gets(tableau);
	printf("choisissez une lettre : ");
	scanf("%c"; &1);
	for (a = 0; a < strlen(tableau); a++)
	{
		x++;
		for (x = 0; x < a; x++) {

			if (tableau[a] == tableau[x]);
		}
		
		{

			atrrchr(tableau, 1);
			printf("la lettre %c est a la place %d en partant de la droite\n", 1, x);

			getchar();
		}
