// //                                                GENERAL FORM OF HOLLOW BUTTERFLY
// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     int sp, i, j, k, n;
//     printf("enter number of rows\n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("*");
//         if (i == 2)
//             printf("*");
//         else if (i >= 3)
//         {
//             for (sp = 1; sp <= i - 2; sp++)
//                 printf(" ");
//             printf("*");
//         }
//         for (sp = 1; sp <= 2 * (n - i); sp++)
//             printf(" ");
//         printf("*");
//         if (i == 2)
//             printf("*");
//         else if (i >= 3)
//         {
//             for (sp = 1; sp <= (i - 2); sp++)
//                 printf(" ");
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (i = 1; i <= n; i++)
//     {
//         printf("*");
//         if (i <= n - 2)
//         {
//             for (sp = n - 2; sp >= i; sp--)
//                 printf(" ");
//             printf("*");
//         }
//         else if (i == n - 1)
//             printf("*");
//         for (sp = 1; sp <= (2 * i - 2); sp++)
//             printf(" ");
//         printf("*");
//         if (i <= n - 2)
//         {
//             for (sp = n - 2; sp >= i; sp--)
//                 printf(" ");
//             printf("*");
//         }
//         else if (i == n - 1)
//             printf("*");
//         printf("\n");
//     }
// }



// //                                                              BUTTERFLY


// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     int sp,i,j,k,n;

//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=i;j++)
//             printf("*");
//         for(sp=1;sp<=8-2*i;sp++)
//         printf(" ");
//         for(j=1;j<=i;j++)
//         printf("*");
//         printf("\n");
//     }
//     for(i=1;i<=4;i++)
//     {
//         for(j=4;j>=i;j--)
//         printf("*");
//         for(sp=1;sp<=(2*i-2);sp++)
//         printf(" ");
//         for(k=4;k>=i;k--)
//         printf("*");
//         printf("\n");
//     }
// }

// //                                                            HOLLOW BUTTERFLY


// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     int sp,i,j,k,n;
//     for(i=1;i<=4;i++)
//     {
//         printf("*");
//         if(i==2)
//         printf("*");
//         else if(i>=3)
//         {
//         for(sp=1;sp<=i-2;sp++)
//         printf(" ");
//         printf("*");
//         }
//         for(sp=1;sp<=(8-2*i);sp++)
//         printf(" ");
//         printf("*");
//         if(i==2)
//         printf("*");
//         else if(i>=3)
//         {
//             for(sp=1;sp<=(i-2);sp++)
//             printf(" ");
//             printf("*");
//         }
//         printf("\n");
//     }

//     for(i=1;i<=4;i++)
//     {
//         printf("*");
//         if(i<=2)
//         {
//             for(sp=2;sp>=i;sp--)
//             printf(" ");
//             printf("*");
//         }
//         else if(i==3)
//         printf("*");
//             for(sp=1;sp<=(2*i-2);sp++)
//             printf(" ");
//             printf("*");
//             if(i<=2)
//             {
//             for(sp=2;sp>=i;sp--)
//             printf(" ");
//             printf("*");
//             }
//             else if(i==3)
//             printf("*");
//             printf("\n");
//     }
// }
