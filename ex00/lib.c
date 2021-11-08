#include "mylib.h"

int my_strlen (char* str) {
    int counter = 0;
    for (int i = 0; str[i]!='\0'; i++) {
        counter++;
    }
    return counter;
}

int my_strcmp(char* param_1, char* param_2)
{
    for (int i = 0; *(param_1+i)!='\0' || *(param_2+i)!='\0'; i++) {
            if (*(param_1+i)>*(param_2+i)) {
                return 1;
            } else if (*(param_1+i) < *(param_2+i)){
                return -1;
            }
    }
    return 0;
}

char* my_strcpy(char* param_1, char* param_2)
{
    for (int i = 0; *(param_2+i)!='\0'; i++) {
        *(param_1+i) = *(param_2+i);
    }
	param_1[my_strlen(param_2)] = '\0';
    return param_1;
}

_Bool checkFormat(char* arr) {
    _Bool correct = 1;
    for (int i = 0; i < 4; i++) {
        if (arr[i]<'0' || arr[i]>'7') {
            correct = 0;
            break;
        }
        for (int j = i+1; j < 4; j++) {
            if (arr[i] == arr[j]) {
                correct = 0;
                break;
                break;
            }
        }
    }
    return correct;
}

void generateKey (char* key_array) {
    srand(time(0));
    for (int i = 0; i < 4; i++) {
        key_array[i] = rand()%8+'0'; 
    }
}
