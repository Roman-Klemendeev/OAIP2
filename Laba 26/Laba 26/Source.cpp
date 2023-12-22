#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
struct Node* first = NULL;

void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}


void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->next = first;
	newNode->data = value;
	first = newNode;
}

int deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);
	return value;
}

int contains(int value) {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data == value) {
		}
		ptr = ptr->next;
	}
	return 0;
}

void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}

int sum() {
	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		s += ptr->data;
		ptr = ptr->next;
	}
	return s;
}

int eversum() {
	struct Node* ptr = first;
	int s = 0;
	int s1 = 0;
	while (ptr != NULL) {
		s1 = ptr->data;
		if (s1 % 2 == 0)	s += ptr->data;
		ptr = ptr->next;
	}
	return s;
}

int oddsX10() {
	struct Node* ptr = first;
	int s = 0;
	int s1 = 0;
	while (ptr != NULL) {
		s1 = ptr->data;
		if (s1 % 2 != 0) ptr->data = ptr->data * 10;
		ptr = ptr->next;
	}
	return s;
}

void elementIX100(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index == i) {
			ptr->data = ptr->data * 100;
			return;
		}
		ptr = ptr->next;
		index++;
	}
}

void elementleftIX10(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index < i) {
			ptr->data = ptr->data * 10;
		}
		ptr = ptr->next;
		index++;
	}
}

void main() {
	first = NULL;
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);
	printList();

	printf("sum = %d\n", sum());
	printf("ever sum = %d\n", eversum());
	oddsX10();
	printList();
	elementIX100(1);
	printList();
	elementleftIX10(4);

	printList();
	clearList();
	printList();

	printf("sum = %d\n", sum());
	printf("ever sum = %d\n", eversum());
	{
		int x;
		scanf("%d", &x);
	}

}