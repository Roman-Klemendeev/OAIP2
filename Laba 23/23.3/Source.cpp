#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define MAX_LEN 80
char s[MAX_LEN];



void main() {

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
			for (int i = 0; s[i] != '\0'; i++) {
				if (strchr(s, ' ') or strchr(s, '\t'))cnt++;
			}
			if (cnt > 0) {
				for (int i = 0; i < 80 && cnt>0; i++) {
					if (s[i] == '\0') {
						s[i - 1] = '#';
						cnt = 0;
					}

				}
			}
			fprintf(fout, "%s", s);
			printf("%s\n", s);
		}
	}


}