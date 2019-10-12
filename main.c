#include <unistd.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char wantedText[40] = "I want to learn PE file format!";
	FILE *file = fopen("PE-1.txt", "ab+");
	if(file == NULL){
		fclose(file);
		FILE *file = fopen("PE-1.txt", "ab+");
		fprintf(file,"%s", wantedText); 
		fclose(file);
	}
	else{
		char data[1024];
		int inFile = 0;
		while(fgets(data, sizeof(data), file) != NULL){
			if(strstr(data, "I want to learn PE file format!") != NULL){
				inFile = 1;
			}
		}
		if(inFile == 0){
			fprintf(file,"%s", wantedText); 
			fclose(file);
		}
		else{
			fclose(file);
			FILE *file = fopen("PE-1.txt", "ab+");
			char c = fgetc(file);
			while(c != EOF){
				printf("%c", c);
				c = fgetc(file);
			}
		}
	}
}
