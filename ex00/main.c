#include "mylib.h"

int main(int argc,  char * argv[]) {
    int attempts = 10;
    char guess[5];
    char key[5];

    do {
        generateKey(key);
    } while (!checkFormat(key));
    
    for (int i = 0; i < argc; i++) {
        if (my_strcmp(argv[i], "-c") == 0) {
            my_strcpy(key, argv[i+1]);
        } else if (my_strcmp(argv[i], "-t") == 0) {
            attempts = atoi(argv[i+1]);
        }
    }
    
    int counter = 0;
    int w_p;
    int m_p;
    printf("Will you find the secret code?\n");
    while (counter<attempts) {
        w_p = 0;
        m_p = 0;
        printf("---\n");
        printf("Round %d\n", counter);
        read(0, guess, 5);
        while (!checkFormat(guess)) {
            printf("Wrong input! Enter 4 distinct digits (0-7).\n");
            read(0, guess, 5);
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (guess[i] == key[j] && i==j) {
                    w_p++;
                } else if (guess[i] == key[j] && i!=j) {
                    m_p++;
                }
            }
        }

        if (w_p == 4) {
            printf("Congratz! You did it!\n");
            return 0;
        } else {
            printf("Well placed pieces: %d\nMisplaced pieces: %d\n", w_p, m_p);
        }
            counter++;
        }
    printf("You lost :(\n");
    return 0;
}
