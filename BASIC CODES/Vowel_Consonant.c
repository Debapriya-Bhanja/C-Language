#include<stdio.h>
int main(){
    char alpha;
    printf("Write a Alphabate: ");
    scanf("%c",&alpha);
    switch(alpha){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Vowel");
        break;
        default:
        printf("Consonant");
    }
    return 0;
}