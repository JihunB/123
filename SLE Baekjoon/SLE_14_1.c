#include <stdio.h>

/*
백준 9020번:각 테스트 케이스에 대해서 주어진 n의 골드바흐 파티션을 출력한다. 출력하는 소수는 작은 것부터 먼저 출력하며, 공백으로 구분한다.
*/

int main()
{
  int T;
  int N;
  //소수 판별을 위한 선언
  int arr[20000] = {0,1};
  
  //테스트 케이스 갯수
  scanf("%d", &T);
  
  for(int l=0; l<T; l++){
    scanf("%d", &N);

    //N내의 소수들 에라토스테네스의 체 사용해서 구하기
    for(int i=2; i<=N; i++){
      for(int j=2; i*j<=N; j++){
        arr[i*j]=1;
      }
    }
    //index를 절반에서부터 시작해서 차이가 적은 소수 2개를 찾는다
    for(int m=N/2; m>0; m--){
      if(arr[m]!=1 && arr[N-m]!=1){
        printf("%d %d\n",m,N-m);
        break; 
      }
    }
  }
  return 0;
}
