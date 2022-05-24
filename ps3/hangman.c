#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "hangman.h"
#include <time.h>
#include <ctype.h>
#include <string.h>
#define WORDLIST_FILENAME "words.txt"

int get_word(char secret[]){
    
    FILE *fp = fopen(WORDLIST_FILENAME, "rb");
    if( fp == NULL ){
        fprintf(stderr, "No such file or directory: %s\n", WORDLIST_FILENAME);
        return 1;
    }

    
    struct stat st;
    stat(WORDLIST_FILENAME, &st);
    long int size = st.st_size;

    do{
        
        long int random = (rand() % size) + 1;
        
        fseek(fp, random, SEEK_SET);
        
        int result = fscanf(fp, "%*s %20s", secret);
        if( result != EOF )
            break;
    }while(1);

    fclose(fp);

    return 0;
}
//1
int is_word_guessed(const char secret[], const char letters_guessed[])
{
    char vyvod[15];
    int i = 0;
    for (i = 0; i < strlen(secret); i++) {
        for (int j = 0; j < strlen(letters_guessed); j++) {
            if (secret[i] == letters_guessed[j]) {
                vyvod[i] = secret[i];
            }
        }
    }
    vyvod[i] = '\0';
    if (strcmp(vyvod, secret) == 0) {
        return 1;
    }
    return 0;
}


//2
void get_guessed_word(const char secret[],
    const char letters_guessed[], char guessed_word[])
{
    int g, length = strlen(secret);
    g = 0;
    while (g < length) {
        if (strchr(letters_guessed, secret[g]) != NULL)
        {
            guessed_word[g] = secret[g];
        }
        else {
            guessed_word[g] = '_';
        }
        g++;
    }

    guessed_word[length] = '\0';
}
//3
void get_available_letters(const char letters_guessed[], char available_letters[]) {
    int i = 'a';
    int cifra = 0;
    for (; i <= 'z';i++) {
        if (strchr(letters_guessed, i) == NULL) {
            available_letters[cifra] = i;
            cifra++;
        }
       
    }
    available_letters[cifra] = '\0';
}
//4
void hangman(const char secret[]) {

    int fts = 0;

    char dimans[26] = "";
    char world[26];
    char ugadajka[15];
    char ahoj[15];
    int popytka;
    printf("Welcome to the game, Hangman!\n");
    printf("I am thinking of a word that is %ld letters long.\n", strlen(secret));
    printf("-------------\n");
    for (popytka = 8; popytka > 0 && is_word_guessed(secret, dimans) == 0;)
    {
        get_available_letters(dimans, world);

        printf("You have %d guesses left.\n", popytka);
        printf("Available letters: %s\n", world);
        printf("Please guess a letter: ");
        scanf("%s", ahoj);

        for (int i = 0; i < strlen(ahoj); i++)
        {
            ahoj[i] = tolower(ahoj[i]);
        }
        if (strlen(ahoj) > 0)
        {

            if (ahoj[0] < 'a' || ahoj[0] > 'z')
            {
                printf("Oops! '%c' is not a valid letter:", ahoj[0]);
            }
            else
            {
                 if (strchr(dimans, ahoj[0]) != NULL && strlen(ahoj) != strlen(secret))
                {
                    printf("Oops! You've already guessed that letter:");
                }
                else
                {

                    dimans[strlen(dimans)] = ahoj[0];

                    dimans[strlen(dimans) + 1] = 0;
                    for (fts = 0; fts < strlen(secret); fts++) {
                        if (secret[fts] == ahoj[0]) {
                            break;
                        }
                    }
                    if (secret[fts] == ahoj[0] && strlen(ahoj) != strlen(secret))
                    {
                        printf("Good guess:");
                    }
                    else if (strlen(ahoj) != strlen(secret) && secret[fts] != ahoj[0] ){
                        printf("Oops! That letter is not in my word:");
                        popytka--;
                    }
                }
            }

            
            get_guessed_word(secret, dimans, ugadajka);
            
            if (strlen(secret) == strlen(ahoj)) {
                if (strcmp(secret, ahoj) == 0) {
                    printf("Congratulations, you won!\n");
                    break;
                }
else {
                    printf("Sorry, bad guess. The word was %s.\n", secret);
                    break;
                }
            }
            else {
                int i = 0;
                while (i < strlen(secret)) {
                    
                    printf(" %c", ugadajka[i]);
                    i++;
                }
            }
        }
        printf("\n-------------\n");
        
            if (strcmp(ugadajka, secret) == 0) {
                printf("Congratulations, you won!\n");
                break;
            }
            else if (popytka == 0 && is_word_guessed(secret, ugadajka) == 0) {
                printf("Sorry, you ran out of guesses. The word was %s.\n", secret);
                break;
            }
    }
}


    

