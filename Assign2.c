//1. Write a program to print unit digit of a given number
// #include <stdio.h>
// int main()
// {
//     int num = 123;
//     int unitdigit = 123%10;
//     printf("%d",unitdigit);
//     return 0;
// }

//2. Write a program to print a given number without its last digit.
// #include <stdio.h>
// int main()
// {
//     int num = 123;
//     int withoutlastdigit = 123/10;
//     printf("%d",withoutlastdigit);
//     return 0;
// }

//3. Write a program to swap values of two int variables
// #include <stdio.h>
// int main()
// {
//     int a = 10,b =20;
//     printf("\nBefore Swapping....\n");
//     printf("A = %d B = %d\n",a,b);
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("\nAfter Swapping....\n");
//     printf("A = %d B = %d",a,b);
//     return 0;
// }

//4. Write a program to swap values of two int variables without using a third variable.
// #include <stdio.h>
// int main()
// {
//     int a = 40 , b = 50;
//     printf("\nBefore Swapping...\n");
//     printf("A = %d B = %d",a,b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("\n\nAfter Swapping...\n");
//     printf("A = %d B = %d",a,b);
//     return 0;
// }

//5. Write a program to input a three digit number and display the sum of the digits.
// #include <stdio.h>
// int main()
// {
//     int num,sum = 0;
//     int a,b,c;
//     printf("Enter three digit number:: ");
//     scanf("%d",&num);
//     a = num%10;
//     num = num/10;
//     b = num%10;
//     num = num/10;
//     c = num%10;
//     sum = a + b + c;
//     printf("Sum of the digits = %d",sum);
//     return 0;
// }

//6. Write a program which takes a character as an input and displays its ASCII code.
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character:: ");
//     scanf("%c",&ch);
//     printf("ASCII Code of '%c' is %d.",ch,ch);
//     return 0;
// }

//7. Write a program to check whether the given number is even or odd using a bitwise operator.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     Approach-1 using Bitwise AND opretor
//     (num&1) ? printf("%d is an Odd number.",num) : printf("%d is a Even number.",num);
//     Approach-2 using Modulo(%) opretor
//     (num%2==0) ? printf("%d is a Even number.",num) : printf("%d is an Odd number.",num);
//     return 0;
// }

//8. Write a program to print size of an int, a float, a char and a double type variable
// #include <stdio.h>
// int main()
// {
//    printf("\nSize of Int is %d.",sizeof(int));
//    printf("\nSize of float is %d.",sizeof(float));
//    printf("\nSize of char is %d.",sizeof(char));
//    printf("\nSize of double is %d.",sizeof(double));
//     return 0;
// }

//9. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
// #include <stdio.h>
// int main()
// {
//     int x = 2345;
//     printf("Value of x = %d",x);
//     x = x/10;
//     x = x*10;
//     printf("\nNow Value of x = %d",x);
//     return 0;
// }

//10. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
// #include <stdio.h>
// int main()
// {
//     int num , dig;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     printf("Enter a digit:: ");
//     scanf("%d",&dig);
//     num = num * 10;
//     num = num + dig;
//     printf("Number = %d",num);
//     return 0;
// }

//11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
// #include <stdio.h>
// int main()
// {
//     float INR,USD;
//     printf("Enter amount in INR:: ");
//     scanf("%f",&INR);
//     USD = INR * 76.23;
//     printf("Your amount in USD:: %.2f",USD);
//     return 0;
// }

//12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a three digit number:: ");
//     scanf("%d",&num);
//     num = num >> 1;
//     printf("After one rotation towards right:: %d",num);
//     return 0;
// }
