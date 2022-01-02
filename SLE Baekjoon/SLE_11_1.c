#include <stdio.h>
#include <string.h>

/*
백준 1157
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
*/

int main(void) { 
  int i, j, max, result=0, len; 
  char arr[1000000]; 
  int cnt[26] = {0, }; 
  int select = 0;
  int number;

  scanf("%s", arr);
  len = strlen(arr);

  for(i=0; i < len; i++){
    if(arr[i] >= 'A' && arr[i] <= 'Z'){
      number = arr[i] - 'A';
    } 
    //입력값이 대문자 A~Z일 경우 A를 빼면 숫자 0~26 사이 값이 나오고, 그 값을 number 라는 변수에 넣어줌
    else if (arr[i] >= 'a' && arr[i] <= 'z'){
      number = arr[i] - 'a';
    }
    //입력값이 소문자 a~z일 경우 a를 빼면 숫자 0~26 사이의 값이 나오고, 그 값을 number 라는 변수에 담아준다 .
    cnt[number]++;
  }
  max = cnt[0]; 
  
  for(i = 1; i < 26; i++) { 
    if(max < cnt[i]) { 
      max = cnt[i]; 
      select = i; 
    } 
  }
   
  for(i = 0; i < 26; i++) { 
    if(max == cnt[i]) 
      result++; 
  } 
    
if(result > 1) 
  printf("?\n"); 
else 
  printf("%c", select+'A');

return 0;
}
