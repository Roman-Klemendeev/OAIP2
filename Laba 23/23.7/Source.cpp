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
		printf("������� ���� �� ������");
		return;
	}
	FILE* fout;
	fout = fopen("C:\\Users\\User\\Desktop\\outtext1.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			for (int i = 0; s[i] > '\0'; i++) {
				if (s[i] >= '0' && s[i] <= '9')
					s[i] = 'X';
			}
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	fclose(fin);
	fclose(fout);
}