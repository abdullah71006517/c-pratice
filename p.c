#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Enter string: ");
    scanf("%s", a);

    int size = strlen(a);
printf("Reversed string:");
     for (int i=size ; i>=0;i-- )
            printf("%c",a[i]);
    return 0;
}
