/*
2941번:입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다. 
*/

#include <stdio.h> 
#include <string.h> 
 
int main(void) { 
  char cr[100]; 
  gets(cr); 
  int count = strlen(cr); 
  //문자열 길이를 두개의 변수에 저장, 하나는 줄여서 출력할 때 사용, 하나는 몇 번 반복할것인지 정할 때 사용
  int len = strlen(cr);
  //크로아티아 단어 말고는 다 한 글자로 치니까 애초에 모든 글자를 한 글자로 세고 크로아티아 단어에 해당하는 글자가 있다면 하나씩 줄이는 방법으로 작성
  //끝이 '=' '-'
  for(int i=0; i<len; i++) { 
    if(cr[i] == '=') { 
      if(cr[i-1] == 'c') count--; 
      if(cr[i-1] == 's') count--; 
      if(cr[i-1] == 'z'){ 
        count--; 
        if(cr[i-2] == 'd') count--; 
      } 
    } 
    if(cr[i] == '-') { 
      if(cr[i-1] == 'c') count--; 
      if(cr[i-1] == 'd') count--; 
    } 
    if(cr[i] == 'j') { 
      if(cr[i-1] == 'l') count--; 
      if(cr[i-1] == 'n') count--; 
    } 
  } 
  printf("%d\n", count); 
} 
