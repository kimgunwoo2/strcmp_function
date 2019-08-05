#include <stdio.h>
#define N 100 //최대로 받을수 있는 문자열의 길이
int my_strcmp (char [],char []);  
int main (void)
{
		 char str1[N], str2[N]; //두 개의 문자열을 저장할 변수 선언   
		 int res;     //두 문자를 비교한 결과값을 저장할 변수 선언
		 
		 printf("첫번째 문자열: ");  //첫번째 문자열 입력메시지 출력
		 gets(str1);     //첫번째 문자열 입력
 
		 printf("두번째 문자열: ");  //두번째 문자열 입력메시지 출력
		 gets(str2);     //두번째 문자열 입력
		 res = my_strcmp(str1, str2);//결과값에 문자열을 비교한 결과 저장
		 printf("0(첫번째=두번째) 1(첫번째>두번째) -1(첫번째<두번째)\n");  
		 printf("%d\n",res); //0이 나오면 두문자열이 같고 1이 나오면 첫번째 문자열이 크고 -1이 나오면 두번째 문자열이 크다
 
		 return 0;
}
int my_strcmp(char s1[], char s2[])  //두 문자열을 비교할 함수 
{
			 int i;
				for(i=0;s1[i] !='\0' || s2[i] !='\0';i++) { //두 문자열이 둘다 널문자가 나올때까지 반복
					 if(s1[i]  > s2[i])     //s1이 크면 1리턴
						return 1;
						 else if(s1[i]  < s2[i])   //s2가크면 -1리턴
					         return -1;
    }
    return 0;         //두 문자열이같을경우 0리턴
}
 
