#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyword(char buffer[]) {
    char keywords[32][10] = {
        "auto","break","case","char","const","continue","default",
        "do","double","else","enum","extern","float","for","goto",
        "if","int","long","register","return","short","signed",
        "sizeof","static","struct","switch","typedef","union",
        "unsigned","void","volatile","while"
    };

    for(int i = 0; i < 32; i++) {
        if(strcmp(keywords[i], buffer) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char ch, buffer[50];
    FILE *fp;
    int j = 0;

    fp = fopen("program.txt", "r");
    if(fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        if(isalnum(ch))
            buffer[j++] = ch;
        else if((ch == ' ' || ch == '\n') && j != 0) {
            buffer[j] = '\0';
            j = 0;

            if(isKeyword(buffer))
                printf("%s is Keyword\n", buffer);
            else
                printf("%s is Identifier\n", buffer);
        }
    }

    fclose(fp);
    return 0;
}