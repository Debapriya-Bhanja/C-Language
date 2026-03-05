//swaping two number  using 3rd variable,input given by user//

#include <stdio.h>

int main() {
    int a, b,temp;
    printf("Enter two different integer: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping : a=%d,b=%d\n",a,b);
    temp = a;
    a=b;
    b=temp;
    printf("After swapping : a=%d,b=%d\n",a,b);
    return 0;
}
