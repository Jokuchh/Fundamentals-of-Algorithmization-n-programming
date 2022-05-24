#include <stdlib.h>
#include "hangman.h"
#include <time.h>

int main() {
    srand(time(NULL));
    char slovakret[15];
    int a = get_word(slovakret); 
    hangman(slovakret);
    return a;
}