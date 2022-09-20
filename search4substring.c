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

void get_string(char s[]);

int find_string(char s1[], char s2[]);

int main(int argc, char *argv[]) {

    char s1[81];
    char s2[81];

    int i;          /* index for s1[] */
    int j;          /* index for s2[] */
    int index;      /* location of s2 in s1 */

    /* get s1 */

    printf("Enter line 1: ");

    get_string(s1);

    /* get s2 */

    printf("Enter string 2: ");

    get_string(s2);

    /* use find_string(s1, s2) */

    index = find_string(s1, s2);

    printf("index is %i\n", index);


    return(0);
}

int find_string(char s1[], char s2[]) {

    int index, i, j;

    index = -1;                 /* addr of start */
    i = 0;                      /* index for s1 */
    j = 0;                      /* index for s2 */

    while(s1[i] != '\0') {
        if(s1[i] == s2[0]) {    /* found first s2 */
            index = i;
            ++i;
            ++j;
            while((s1[i] != '\0') && (s2[j] != '\0')){
                if(s1[i] == s2[j]) {
                    ++i;
                    ++j;
                }
                else {
                    index = -1;
                    break;
                }
            }
        }
        else {
            ++i;
        }
    }



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


void get_string(char s[]) {

    int i;
    char c;

    i = 0;
    do {
        c = getchar();
        s[i] = c;
        ++i;
    } while(c != '\n');
    s[i - 1] = '\0';


}
