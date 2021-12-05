#include <stdio.h>

/*
백준 2798번 :N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.
*/
int main(void)
{
  int n, m, sum, max = 0, i, j, k, count;
  int arr[100] = { 0 };
  
  scanf("%d %d", &n, &m);
  sum = m;
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  
  for (i = 0; i < n - 2; i++) {
    for (j = i + 1; j < n - 1; j++) {
      for (k = j + 1; k < n; k++) {
        //카드 3개의 합
        sum = arr[i] + arr[j] + arr[k];
        //이전까지 계산했던 max보다 크고 주어진 m보다 작거나 같을 때 그 값을 출력
        if (sum <= m && max < sum)
          max = sum;
      }
    }
  }
  printf("%d", max);
  return 0;
}
