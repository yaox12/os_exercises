#include <cstdio>
#define NUM 1024
#define COUNT 10

int A[NUM][NUM];

int main () {
	int i, j, k;
  	for (k = 0; k < COUNT; k++)
		for (i = 0; i < NUM; i++)
  			for (j = 0; j < NUM; j++)
      			A[i][j] = i + j;
  	printf("%d count computing over!\n", i*j*k);
}
