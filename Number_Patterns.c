//                                                          1
// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;

// for(i=1;i<=7;i++)                          //      1
// {                                          //      12
//     for(j=1;j<=i;j++)                      //      123
//     {
//         printf("%d",j);
//     }
//     printf("\n");
// }
// }

//                                                         2


// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;
// for(i=1;i<=5;i++)
// {
//     for(sp=4;sp>=i;sp--)                      //          1
//      {                                        //         21
//         printf(" ");                          //        321
//      }    
//      for(j=i;j>=1;j--) 
//       {
//         printf("%d",j);
//       }
//     printf("\n");
// }
// }

//                                                                 3  

// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;
// for(i=1;i<=5;i++)
// {
//     for(sp=4;sp>=i;sp--)                                
//      {                                                 
//         printf(" ");                                  
//      }                            //        1
//      for(j=1;j<=i;j++)            //       12
//       {                           //      123
//         printf("%d",j);
//       }
//     printf("\n");
// }
// }

//                                                                  4

// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;
// for(i=1;i<=5;i++)
// {
//     for(sp=1;sp<=5-i;sp++)      // or (sp=5-i;sp>=1;sp--)                          
//      {                                                 
//         printf(" ");                                  
//      }                                    
//      for(j=1;j<=i;j++)            //       11
//       {                           //      1221
//         printf("%d",j);           //     123321 
//       }                           //    12344321
//       for(k=i;k>=1;k--)
//       {
//         printf("%d",k);    
//       }
//     printf("\n");
// }
// }

//                                                                  5

// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;
// scanf("%d",&n);
// for(k=1;k<=n;k++)
// {                                       //      1  
//      printf("\n");                    //      1 2 1 
//     for(j=1;j<=n-k;j++)                 //  1 2 3 2 1 
//     printf(" ");                            
//     for(i=1;i<=k;i++)
//     printf("%d",i);
//     for(i=k-1;i>=1;i--)
//     printf("%d",i);
//     printf("\n");   
// }
// }

//                                                                  6

// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;
// for(k=1;k<=n;k++)                 //     1
// {                                 //     1 2 
//     printf("\n");                 //     1 2 3
//     for(i=1;i<=k;i++)             //     1 2 3 4 
//     printf("%6d",i);              //     1 2 3 4 5 
// }
// }

//                                                                       7

// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;
// scanf("%d",&n);                       //   1    
// j=1;                                  //   2 3
// for(k=1;k<=n;k++)                     //   4 5 6 
// {                                     //   7 8 9 10 
//     printf("\n");
//     for(i=1;i<=k;i++)
//     printf("%6d",j++);
// }
// }

// 8

// #include<stdio.h>
// #include<math.h>
// void main(){
// int n,i,j,sp,k;
// printf("enter the number oo rows to be generated");
// scanf("%d",&n);                                           //                         1
// j=1;                                                      //                       2   3
// for(i=1;i<=n;i++)                                         //                     4   5   6
// {                                                         //                   7   8   9   10 
//  printf("\n");                                            //
//     for(sp=1;sp<=80-i*7;sp++)                             // 
//     printf(" ");
//     for(k=1;k<=i;k++)
//     printf("%14d",j++);
    
// }
// }