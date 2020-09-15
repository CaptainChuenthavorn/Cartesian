#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n[2];
	for (int i = 0;i < 2;i++) {
		scanf("%d", &n[i]);
	}
	int** p; // == int a[จองไว้ว่าเก็บ2เซต][ในเซตที่จองไว้ มีกี่ตัว]
	p = (int**)malloc(2 * sizeof(p));//ขั้นตอน จองพื้นที่ว่าจะเก็บกี่ตัว[]แรก
					//ถ้าเปลี่ยนเปน5 ก้เปน[5][]		//ใช้sizeof p เพราะ int**p ||int a[]เราต้องการให้ช่องแรกเป็น2 มันโล่ง
	for (int i = 0;i < 2;i++) {
		//จองพท.ให้n
//int a[0][n1] 
//int a[0][n2]
		p[i] = (int*)malloc(n[i] * sizeof(int));//จอง[][]อันที่สอง
	}									//อิงมาจากอันข้างบน
	for (int i = 0; i < 2;i++) {
		for (int j = 0;j < n[i];j++) {
			scanf("%d", &p[i][j]);
		}
	}
	printf("AxB = ");
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < n[i];j++) {
			if (i != 1) {
				printf("( %d, %d ) , ", p[i][j], p[i + 1][j]);
			}
		}
	}

	return 0;
}
