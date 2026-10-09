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
#include <stdio.h>

int main(){
    int i,a,b;
    
    for (i=10;i<=99;i++){
        a = i%10;
        b = i/10;
        if (a%2==0 && b%2 != 0 || a%2!=0 && b%2 == 0){
            // printf("%d",a);
            // printf("%d\n",b);
            printf("%d\n",i);

        }
        
    }
    
}