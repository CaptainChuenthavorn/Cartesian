#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n[2];
	printf("How many number in set A and set B : ");
	for (int i = 0;i < 2;i++) {
		scanf("%d", &n[i]);
	}
	int** p; 
	p = (int**)malloc(2 * sizeof(p));
	for (int i = 0;i < 2;i++) {
		p[i] = (int*)malloc(n[i] * sizeof(int));
	}
	for (int i = 0; i < 2;i++) {
		for (int j = 0;j < n[i];j++) {
			scanf("%d", &p[i][j]);
		}
	}
	printf("AxB = { ");
	for (int i = 0;i < n[0];i++) {
		for (int j = 0;j < n[1];j++) {
				printf("(%d,%d) , ", p[0][i], p[1][j]);
			
		}
		printf("\n");
	}
	printf("}");
	return 0;
}
