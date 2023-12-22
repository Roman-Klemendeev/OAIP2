#include <stdio.h>
#include <Windows.h>


long fuct2(int n) {
	if (n == 0) {
		return 1;
	}
	long res = fuct2(n - 1) * n;
	return res;
}


void rec1(int n) {
	printf(" %d", n);
	if (n > 1) {
		rec1(n - 2);
	}
}


void rec2(int n) {
	if (n > 1) {
		rec2(n - 2);
	}
	printf(" %d", n);
}


void rec3(int n) {
	if (n > 1)	printf(" %d", n);
	if (n > 1) {
		rec3(n - 2);
	}
	printf(" %d", n);
}


void recEGE1(int n) {
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}


void F1(int n) {
	if (n > 2) {
		printf("%d ", n);
		F1(n - 3);
		F1(n - 4);
	}
}
void F2(int n) {
	printf("%d ", n);
	if (n < 5) {
		F2(n + 1);
		F2(n + 3);
	}
}

void G3(int n);

void F3(int n) {
	if (n > 0) {
		G3(n - 1);
	}
}
void G3(int n) {
	printf("*");
	if (n > 1)
		F3(n - 3);
}


void main() {
	int n;
	scanf_s("%d", &n);
	long f = fuct2(n);
	printf("%d! = %ld", n, f);
	printf("\n");
	//2.1
	scanf_s("%d", &n);
	rec1(n);
	printf("\n");
	//2.2
	rec2(n);
	printf("\n");
	//2.3
	rec3(n);
	printf("\n");

	recEGE1(3);
	printf("\n");
	F1(10);
	printf("\n");
	F2(1);
	printf("\n");
	F3(11);
}