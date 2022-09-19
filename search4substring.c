/* search4substring.c
 * sourcefile for search4substring, a program to determine if a substring, s2
 * exists inside a string, s1.
 *
 * An exercise from Kochan, Stephen G., "Programmming in C 3rd ed.," Sams
 * Publishing, page 231, ex. 5.
 *
 * Programmer: Mark Crapser.
 *
 * Tues Aug 30 2022
 * Get outline of program added, commited, and pushed.
 *
 * Sun Sept 4 2022
 * Program getting more complicated. I feel that I am losing focus. I am
 * programming from the console.
 *
*/


#include <stdio.h>

#define MAX_LENGTH 81

int string_len(char s[]);

void get_string(char s[], int max);

int find_string(char s1[], char s2[]);

int main(int argc, char *argv[]) {

    char s1[81] = {'\0'};
    char s2[81] = {'\0'};

    int i;          /* index for s1[] */
    int j;          /* index for s2[] */

    /* get s1 */

    get_string(s1, MAX_LENGTH);


    /* get s2 */

    get_string(s2, MAX_LENGTH);















    return(0);
}

int find_string(char s1[], char s2[]) {

    int index;
    index = -1;







    return(index);
}

int string_len(char s[]) {

    int length;
    int index;

    length = 0;
    index = 0;

    while(s[index] != '\0')
        ++index;

    length = index;

    return(length);
}


void get_string(char s[], int max) {

    char c;
    int i;

    c = getchar();
    while(c != EOF) {
        s[i] = c;
        c = getchar();
    }









}
