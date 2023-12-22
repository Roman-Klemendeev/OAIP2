#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define MAX_LEN 80
char s[MAX_LEN];



void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE* fin = fopen("C:\\Users\\User\\Desktop\\text1.txt", "rt");
	if (fin == NULL) {
		printf("not open");
		return;
	}


	FILE* fout;
	fout = fopen("C:\\Users\\User\\Desktop\\out1.txt", "wt");
	if (fout == NULL) {
		printf("not open");
		return;
	}
	int cnt = 0;
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			int c = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i] = ';')c = c + 1;
			}
			int in = strlen(s) - 1;
			s[in] = ' ';
			s[in + 1] = '\0';

			fprintf(fout, "%s%d", s, c);
			printf("%s%d\n", s, c);
		}
	}
	fclose(fin);
	fclose(fout);
}