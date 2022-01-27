
#include <stdio.h>
#include <string.h>

char num_to_word(int);
int main()
{
    int num = 0, temp, digit;
    char digit_in_word[100];
    char num_in_words[500];
    num_in_words[0] = '\0';
    printf("Input number: ");
    scanf("%d", &num);
    temp = num;
    do
    {
        digit = temp % 10;
        switch (digit)
        {
        case 0:
            strcpy(digit_in_word, "Zero ");
            break;
        case 1:
            strcpy(digit_in_word, "One ");
            break;
        case 2:
            strcpy(digit_in_word, "Two ");
            break;
        case 3:
            strcpy(digit_in_word, "Three ");
            break;
        case 4:
            strcpy(digit_in_word, "Four ");
            break;
        case 5:
            strcpy(digit_in_word, "Five ");
            break;
        case 6:
            strcpy(digit_in_word, "Six ");
            break;
        case 7:
            strcpy(digit_in_word, "Seven ");
            break;
        case 8:
            strcpy(digit_in_word, "Eight ");
            break;
        case 9:
            strcpy(digit_in_word, "Nine ");
            break;
        }
        strcat(digit_in_word, num_in_words);
        strcpy(num_in_words, digit_in_word);
        temp = temp / 10;
    } while (temp != 0);
    printf("In words: %s", num_in_words);

    return 0;
};