#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int MAX_TEXT_LEN = 50;

int main()
{
  char text[MAX_TEXT_LEN+1];
  int includeornot[MAX_TEXT_LEN+1] ;
  int num,
      len;

  //user input the text
  scanf("%s", text);


  len = strlen(text);

  //initialize elements to be 0
  for(int i = 0; i < len;i++){
	  includeornot[i] = 0;
}
  
  for(int i = 0; i < len;i++){
	if(includeornot[i]!=1){
		 num = 0;
       		 printf("%c ",tolower(text[i]));
		 for(int j = 0; j < len;j++){
                        //If the character has occurred before, then it will not be counted again
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
