#include <stdio.h>

int main(void) {
    char str[200];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(i == 0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if(str[i-1] == '.' && str[i] == ' ')
            continue;
        else if(str[i-1] == '.' && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z' && i != 0 && str[i-1] != '.')
            str[i] = str[i] + 32;
    }

    printf("%s\n", str);
    return 0;
}

