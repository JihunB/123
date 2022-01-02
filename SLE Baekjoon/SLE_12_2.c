/*
1316번: 단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h> 
#include <string.h> 

int select(char a[], int len); 
int main(void) { 
  int N, sum = 0; 
  char arr[100]; 
  scanf("%d", &N); 
  for(int i = 0; i < N; i++) { 
    scanf("%s", arr); 
    sum += select(arr, strlen(arr)); 
  } 
  printf("%d", sum); 
  return 0; 
} 
int select(char a[], int len) { 
  int duple = 0; 
  for(int i = 0; i < len; i++) { 
    for(int j = 0; j < len; j++) { 
      //a[i]값과 a[j]의 값이 서로 같을 경우 duple에 값을 넣음
      if(a[i] == a[j]) { 
        duple = j - i; 
        //만약 2 이상인데 a[j]와 a[j-1]이 같이 않다면 0을 리
        if(duple > 1) 
          if(a[j-1] != a[j]) return 0; //그룹 단어가 아닐때
      } 
    } 
  } 
  //그룹 단어일 때 1을 리턴해서 sum에 값을 추가
  return 1; 
}
