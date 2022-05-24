#include "stdio.h"

void every_word(const char input[], const char output[]){
    
    int START = 0;
    int word = 1;
    int space = 0; 
    int attention = 0;
    char rokki;
    char string[30];
    FILE *file1, *file2;
    if ((file1 = fopen(input, "r")) != NULL && (file2 = fopen(output, "w")) != NULL){
        for(; rokki != EOF;){
            rokki = fgetc(file1);
            if(rokki != ' '){
                string[attention] = rokki;
                attention = attention + 1;
            }
            else if (string[0] == 'S' && string[1] == 'T' && string[2] == 'O' && string[3] == 'P') {
                
                break;
            } 
            else if (string[0] == 'S' && string[1] == 'T' && string[2] == 'A' && string[3] == 'R' && string[4] == 'T'){
                START = 1;

                attention = 0;
            }
            
            else if (START == 1){
                string[attention] = '\0';
                attention = 0;
                word *= -1;
                if(word == 1){
                    if(space == 1){
                        fputc(' ',file2);
                        
                    }

                    int g = 0;
                    while(string[g] != '\0') {
                        fputc(string[g], file2);
                        g++;
                    }
                    space = 1;
                }
            }
            else if (rokki == ' '){
                attention = 0;
            }
        }
        fclose(file1);
        fclose(file2);
    }
}

int main (int argc, char* argv[]){
    every_word(argv[1], argv[2]);
    return 0;
}