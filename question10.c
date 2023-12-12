#include<stdio.h>
#include<string.h>

int main() {
    char str1[] = "call me daddy.";
    char str3[] = " i am fine thank you";
    char str2[100];

   

    // Corrected: Concatenate str3 to the end of str2
    strcat(str1, str3);
    printf("%s\n", str1);

    return 0;
}
