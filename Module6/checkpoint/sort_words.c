#include <stdio.h>
#include <string.h>

int main()
{
	// Declare a 2D char array to stores inputs words
	// Maximum 100 input words and each word maximum 10 chars
	char words[100][10];
	char temp[10];
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", words[i]);
	}

	// Add codes here to sort words
	int index;
	for(int i = 0; i < n; i++){
		strcpy(temp,words[i]);
		index = i;
		for(int j = i; j < n; j++){
			if(strcmp(temp,words[j])>0){
				strcpy(temp,words[j]);
				index = j;
			}
		}
		strcpy(words[index],words[i]);
		strcpy(words[i],temp);
	}


	for (int i = 0; i < n; i++) {
		printf("%s\n", words[i]);
	}

  return 0;
}
