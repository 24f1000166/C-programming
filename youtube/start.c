// #include <stdio.h>

// int main(){
//     printf("Hello world");
//     return 0;
// }

/* 2. variables */
// int age; /* int-> datatype; age->variable name */
// age = 25;  /* storing data into the variable */
// int agee = 25; /* single line instaed of the above two lines */

// #include <stdio.h>
// int main(){
//     // int age=25;
//     // printf("Age: %d", age); /* here %d is the format specifier */

//     // age=30;
//     // printf("\nNew age: %d", age); /* here  we are channging value of the variabe
//     // , the o/p will be Age:25 and in the next line New age: 30 */
    
//     // int firstNumber = 33;
//     // printf("Firstnumber: %d", firstNumber);
//     // int secondNumber = firstNumber;
//     // printf("\nSecondnumber: %d", secondNumber); /* assigning a variable to another variabel */
    
//     // int var1, var2=10; /* here two variable are declared in the same line, but only one had value
//     // so it we print the variables, var2 have 10 and var1 will have some randomnly assigned value */
//     // printf("V1: %d", var1);
//     // printf("\nV2: %d", var2);

//     // int number=33;
//     // printf("%d ", number);
//     // printf("%d", number);

//     return 0;
// }


/* 3. Datatypes */

// #include <stdio.h>

// int main() {

    // int age=10;
    // printf("Age: %d", age);
    // return 0;

    // double number = 12.45;
    // float num = 10.1f; /* herem the f is the syntax, which tell that this is a float number */
    // printf("%lf", number); /* output: 12.450000, co double variable takes 6 digitsafter decimal point */
    // printf("%.2lf", number);/* this will give only 2 digits after decimal point */
    // printf("%.1lf", number);
    // printf("%f", num);
    // printf("\n%.1f", num);

    // char character='k'; /* the character should be in single quotes */
    // printf("%c", character);
    // printf(" %d", character); /* to print the integer value of the character */

    // int age;
    // double number;
    // printf("int size = %zu", sizeof(age));
    // printf("\ndouble size = %zu", sizeof(number)    );

// }

/* 4. User Input */

// #include <stdio.h>

// int main(){
//     // int age;
//     // printf("Enter your age: ");
//     // scanf("%d",&age);
//     // printf("Age=%d\n", age);

//     /* double input */
//     // double number;
//     // char alphabet;

//     // printf("Enter double input: ");
//     // scanf("%lf",&number);

//     // printf("Enter character input: ");
//     // scanf(" %c",&alphabet);/* space before %c makes the input entering possible */

//     // printf("Number: %lf", number);
//     // printf("\nCharacter: %c", alphabet);

//     /* multiple input */
//     double number;
//     char alphaber;
//     int num;
//     float deci;

//     printf("Enter the input values: ");
//     scanf("%lf %c %d %f", &number, &alphaber, &num, &deci);
    
//     printf("Number: %lf", number);
//     printf("\nCharater: %c", alphaber);
//     printf("\nInterger: %d", num);
//     printf("\nFloat: %f", deci);
//     return 0;
// }

/* 6. Operators */
#include <stdio.h>
int main(){
    // Addition,subtraction,multiplication
    // int x=12;
    // double y=3.566;
    // // int result=x+3;
    // // int result=x-13;
    // int result=x*10;
    // // double ans=y+2.56;
    // // double ans=y-5.87;
    // double ans=y*4;
    // // double anss=y+x;
    // // double anss=y-x;
    // double anss=y*x;
    // printf("%d\n", result);
    // printf("%d\n", x+5);
    // printf("%.2lf\n",ans);
    // printf("%.2lf\n",anss);
    // return 0;

    /* division */
    // int x=12;
    // double y=12;
    // int result = x/8; /* this gives output: 1 */
    // double res=y/8; /* this gives output: 1.50 */
    // printf("%.2lf\n",res);
    // printf("%d\n",result);
    // return 0;

     /* remainder */
    // int x=12;
    // double y=12;
    // int result = x%8; /* this gives output: 4 */
    // // double res=y%8; /* this gives output: error */
    // // printf("%.2lf\n",res);
    // printf("%d\n",result);
    // // return 0;

    /* incremetn and decrement */
    int x=12;
    //  printf("%d\n", ++x);
    printf("%d\n", x++);
    // printf("%d\n", --x);
    // printf("%d\n", x--);
}