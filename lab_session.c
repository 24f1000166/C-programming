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
#include <stdio.h>
int main(){
    // int marks[5]={98,93,99,95,94};
    // int i;
    // // printf("%d\n", i[0]); /* if we just give marks, it wont print coz int variable will throw error */
    // for (i=0;i<5;i++){
    //     // printf("%d\n",i);
    //     printf("%d\n", marks[i]);
    // }

    int mark[5];
    int j, sum=0;
    double avg=0;
    printf("Enter the marks:");
    for (j=0;j<5;j++){
        
        scanf("%d\n", &mark[j]);
        sum+=mark[j];
        // scanf("%d",&mark);
        // printf("%d", mark[j]);
    }
    for (j=0;j<5;j++){
        printf("\nThe marks are: %d",mark[j]);       
    }
    // for (j=0;j<5;j++){
    //     sum+=mark[j];
    // }
    avg=sum/5;
    // int s = sizeof(mark);
    printf("\nThe sum is: %d",sum);
    printf("\nThe average is: %.2lf", avg);
    // printf("\n%p",&mark);
    printf("\nThe size entire array: %ld",sizeof(mark));
    
    
}