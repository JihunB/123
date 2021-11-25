#include <stdio.h>
/*
백준 1929번 : M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
*/
int main(void){
  //일단 모든 수를 소수라고 판단
  int m,n,arr[1000001] = {0,};
    
  scanf("%d %d", &m, &n);
  //0과 1은 소수가 아니기때문에 1이란 값을 주었음
  arr[0]=1; arr[1]=1; 
  //2부터 최댓값 n까지 소수가 아닌 값을 모두 1로 바꾸는 반복문
  for(int i=2; i<=n; i++){
    //1이란 값이 있으면 소수가 아니기에 스킵
    if(arr[i]==1) continue;
    else 
      //자기 자신 말고 다른 배수는 소수가 아니기에 1넣음
      for(int j=2; i*j<=n; j++){
        arr[i*j]=1;
      }
  }
  //소수 모두 출력
  for(int i=m; i<= n; i++){
    if(arr[i] == 0)
      printf("%d\n",i);
    }
   return 0;
}
