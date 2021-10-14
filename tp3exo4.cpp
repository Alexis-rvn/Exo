#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <iostream>


int main()  {

char str[100];
int i;
printf("\n chaine a convertir en minuscule: ");
gets_s(str);
for (i = 0; str[i] != '\0'; i++) {
	if (str[i] >= 'A' && str[i] <= 'z') {
		str[i] = str[i] + 32;

	}
}
printf("\n la chaine en minuscule = %s", str);
return 0;
}
