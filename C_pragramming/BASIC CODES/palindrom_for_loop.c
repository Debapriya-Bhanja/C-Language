 
 #include <stdio.h>

int main() {
    int num, temp, rev=0 ;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    for (temp = num; temp > 0; temp = temp / 10) {
        rev = rev * 10 + (temp % 10);
    }

    if (num == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}