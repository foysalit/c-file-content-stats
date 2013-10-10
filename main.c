#include <stdio.h>
#include <string.h>

#define MAX 140

void main(){
	FILE *f;
	char *mode = "r";
	char line[MAX];
	int lines = 0, total_chars = 0, chars_on_line = 0;

	f = fopen("file.txt", mode);

	if(f != NULL){
		while(fscanf(f, "%s", line) != EOF){
			chars_on_line = strlen(line);
			printf("content: \"%s\", chars: \"%d\"\n", line, chars_on_line);

			total_chars += chars_on_line;
			lines++;
		};

		printf("Number of rows : %d\n", lines);
		printf("Number of characters : %d\n", total_chars);

		fclose(f);
	}else{
		printf("can't open file!\n");
	}
}