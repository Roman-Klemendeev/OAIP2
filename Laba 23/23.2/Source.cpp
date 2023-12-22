#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define MAX_LEN 80
char s[MAX_LEN];



void main() {

	FILE* fin = fopen("C:\\Users\\User\\Desktop\\text1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}


	FILE* fout;
	fout = fopen("C:\\Users\\User\\Desktop\\out1.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toupper(s[i]);
			}
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}


}
