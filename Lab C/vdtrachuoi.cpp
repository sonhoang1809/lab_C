#include <stdio.h>
#include <string.h>

char * findLongestWord(char *);

int main()
{
    char str[] = "Lorem ipsum dolor sit amet.";
    printf("The longest word: %s\n", findLongestWord(str));
    return 0;
}

char * findLongestWord(char *str)
{
    char *s = strdup(str);
    //const size_t size = strlen(s);
    //char result[size];
    char *result = NULL;
    int length;
    char *arr = strtok(s, " ,./?:;!");
    //strcpy(result, arr);
    result = strdup(arr);
    length = strlen(arr);
    while ((arr = strtok(NULL, " ,./?:;!")) != NULL) {
        int _size = strlen(arr);
        if (_size >= length) {
            length = _size;
            //strcpy(result, arr);
            result = strdup(arr);
        }
    }
    return result;
}
