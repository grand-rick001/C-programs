/*Program for outputting prime numbers between 1 and 10*/
#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    int i, j, mod;

    for (i=2;i<=50;i++) {
        for(j=2;j<=i;j++) {
            mod = i %j;
            if(mod==0) {
                break;
            }
        }
        if(j==i) {
            printf("%d\t", i);
        }
    }

    return 0;
}
*/
/*
int main() {
    int a, mod;
    for(a=1;a<10;a++) {
        mod = a%2;
        if(mod==0) {
            printf("%d \t", a);
        }
    }


    return 0;
}
*/


int main () {
    //char gender;
    int a, b, x, y;
    float avg;

    /*printf("Enter gender (b or g): ");
    scanf("%c", &gender);
    gender=='b'?printf("I am a boy"):printf("I am a girl\n");

    printf("\nEnter negative number: ");
    scanf("%d", &num);

    num<0?printf("%d", abs(num)):printf("%d", num);
    */
    //num = 10;
    //printf("%d\n", ++num);
    //printf("%d",  num);
    /*a = 10;
    b = 20;

    x = ++a;
    y = b++;

    printf("%d %d\n", x, a);
    printf("%d %d\n", y, b);
    printf("%d", y);*/
    //a = 5;
        //6   6     8     8
    //b = ++a + a++ + ++a + a++;
    //printf("%d", b);

    /*Max of two numbers*/
    /*printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num = a>b?printf("Max of two numbers is %d", a):printf("Max of two numbers is %d", b);*/

    /*x = 10;
    y = ~ x;

    printf("%d", y);
    */

    a = 10, b = 10, x = 10, y = 10;

    avg = (float) (a+b+x+y)/4;

    printf("%f", avg);


    return 0;
}


