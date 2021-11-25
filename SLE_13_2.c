#include <stdio.h>
/*
백준 4948번 : 자연수 n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 
*/
int main(void){
//1929번과 같이 모든 수를 소수라고 가정
int n, arr[1000001] = { 0, }, count = 0;
	arr[1] = 1;
  //1929번과 같이 에라토스테네스의 체의 원리 사용해서 소수가 아닌 것은 1을 넣어줌
	for (int i = 2; i <= 246913; i++) {
    if(arr[i]==1) continue;
    else
		  for (int j = 2; i * j <= 246913; j++) { 
      // 안쪽 반복문은 i * j 로 최대 범위를 정해둬서 arr범위 내로 사용하게 함. 
			  arr[i * j] = 1;
		}
	}
	
	while (1) {
		scanf("%d", &n);

		if (n == 0) break;
    //n은 미포함하기에 +1
		for (int i = n+1; i <= 2 * n; i++) {	
			if (arr[i] == 0) {
				count++;
			}
		}

		printf("%d\n", count);
		count = 0;
		n = 0;
	}

	return 0;
}
