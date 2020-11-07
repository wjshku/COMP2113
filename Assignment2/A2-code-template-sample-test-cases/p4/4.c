#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int MAX_TEXT_LEN = 50;

int main()
{
  char text[MAX_TEXT_LEN+1];
  int includeornot[MAX_TEXT_LEN+1];
  int num,
      len;

  scanf("%s", text);
  // printf("%s\n", text);

  len = strlen(text);
  
  for(int i = 0; i < len;i++){
	 // printf("include?%d\n",includeornot[i]);
	 while(includeornot[i]!=1){
		 num = 0;
       		 printf("%c ",tolower(text[i]));
		 for(int j = 0; j < len;j++){
		 	if(text[i]==text[j]){
				includeornot[j] = 1;
				num++;
			}
		 }
		 printf("%d\n",num);
	 }

  }

  return 0;
}
