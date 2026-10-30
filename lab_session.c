// 09/10/2026
// 1. write a C program to find whether a given integer is a palindome
// i/p: 25452, o/p: Yes ;; i/p: 25872, o/p: No

// 2. write a C program to print the 3rd multiplication table
// #include <stdio.h>
// int main(){
//     int i;
//     for (i=0;i<=10;i++){
//         printf("3x%d=%d\n",i, 3*i);
//     }
// }

// 3. print the numbers 10 to 1 in reverse
// #include <stdio.h>
// int main(){
//     int i;
//     for (i=10;i>=0;i--){
//         printf("%d\n",i);
//     }
// }

// 4. print the 2 digit numbers, where one digit is even and one digit is odd or vice versa, but not both digits even or odd
// #include <stdio.h>

// int main(){
//     int i,a,b;
//     for (i=10;i<=99;i++){
//         a = i%10;
//         b = i/10;
//         if (a%2==0 && b%2 != 0 || a%2!=0 && b%2 == 0){
//             // printf("%d",a);
//             // printf("%d\n",b);
//             printf("%d\n",i);
//         }      
//     } 
// }

// 23/10/2026

// Declare an array called marks to store the marks of five subjects of Arun, the marks are
//  98,93,99,95,94.
// get these marks as user input and populate the array, print the marks fromthe array.
// #include <stdio.h>
// int main(){
//     // int marks[5]={98,93,99,95,94};
//     // int i;
//     // // printf("%d\n", i[0]); /* if we just give marks, it wont print coz int variable will throw error */
//     // for (i=0;i<5;i++){
//     //     // printf("%d\n",i);
//     //     printf("%d\n", marks[i]);
//     // }

//     int mark[5];
//     int j, sum=0;
//     double avg=0;
//     printf("Enter the marks:");
//     for (j=0;j<5;j++){
//         scanf("%d\n", &mark[j]);
//         sum+=mark[j];
//         // scanf("%d",&mark);
//         // printf("%d", mark[j]);
//     }
//     for (j=0;j<5;j++){
//         printf("\nThe marks are: %d",mark[j]);       
//     }
//     // for (j=0;j<5;j++){
//     //     sum+=mark[j];
//     // }
//     avg=sum/5;
//     // int s = sizeof(mark);
//     printf("\nThe sum is: %d",sum);
//     printf("\nThe average is: %.2lf", avg);
//     // printf("\n%p",&mark);
//     printf("\nThe size entire array: %ld",sizeof(mark));    
// }

//30/10/2026

// 1. Create a program to print the odd numbers in an array
// #include <stdio.h>
// int main(){
//     int number[5]={1,2,3,4,5};
    
//     int i;
//     for (i=0;i<5;i++){
//         if (number[i]%2!=0){
//             printf("%d\n",number[i]);
//         }
//     }
// }

// 2. create a character array to hold the word "hello", print the array elements with the tab space between them,print the vowels
// print the duplicates if; put them into functions 
// #include <stdio.h>
// int main(){
//     char word[]="lhelo";
//     int i,j;
//     for (i=0;i<5;i++){
//         printf("%c     ",word[i]);
//         }
//     for (i=0;i<5;i++){
//     if (word[i] == 'a'||word[i] == 'e'||word[i] == 'i'||word[i] == 'o'||word[i] == 'u'){
//             printf("\n%c",word[i]);
//         }}
//     // printf("%s\n",word);
//     for (i=0;i<5;i++){
//         for (j=i+1;j<6;j++){
//             if (word[i]==word[j]){
//                 printf("\n%c",word[i]);
//         }
        
//         }
//     }
// }

// 3. functions
#include <stdio.h>
#include <math.h>
int add(int x, int y){
    int sum = x+y;
    return sum;
}
int subtr(int a,int b){
    return a-b;
}
int prod(int x, int y){
    return x*y;
}
double division(int x, int y){
    return (double)x/y;
}
int squar(int x){
    return x*x;
}
double power(int x, int y){
    return pow(x,y);
}
char adch(char c, char d){
    return c+d;
}

int main(){
    int a,b;
    char m,n;
    scanf("%d", &a);
    scanf("%d",&b);
    // scanf("%c",&m);
    // scanf("%c",&n);
    int sum = add(a,b);
    int sub = subtr(a,b);
    int mult = prod(a,b);
    int sq = squar(a);
    double divi = division(a,b);
    double po = power(a,b);
    // char ch=adch(m,n);
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("sum: %d\n", sum);
    printf("subtr: %d\n", sub);
    printf("product: %d\n", mult);
    printf("division: %.2lf\n", divi);
    printf("square: %d\n", sq);
    printf("Power: %.2lf\n",po);
    // printf("chara: %c\n", ch);

}