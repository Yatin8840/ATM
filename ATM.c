#include<stdio.h>

int main()
{
     char card;
     int n;
     int p;
     int a;
     int b;
     int diff;
     int i;
     char cad;
     
     printf("Welcome To the ATM\npowered by hasir Yatin\n\n");
     
     printf("Please Insert your card\n\n");
     scanf("%c", &card);
     
     if(card=='k')
     {
          printf("Hello Yatin\n\n");
          
          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");
          
          b = 50000;
          
          scanf("%d", &n);
          
          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p==1234)
               {
                    printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);
                    
                    if(a>b)
                    {
                         printf("Abe sale apni aukaat ke hisab se to amount daal ");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");
                    
                         diff = b - a;
                    
                         printf("Now, Your Bank Balance is %d", diff);
                    }
                    
               }
               else
               {
                    printf("Incorect Pin\n\n");
                    
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p==1234)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);
                    
                    if(a>b)
                    {
                         printf("Abe sale apni aukaat ke hisab se to amount daal ");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");
                    
                         diff = b - a;
                    
                         printf("Now, Your Bank Balance is %d", diff);
                    }
                    }
                    else
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }
               }
          }
          else if(n==2)
          {
               printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p!=1234)
               {
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p!=1234)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }
               
          }
     }
     else if(card=='s')
     {
          printf("Hello Sakshi singh\n\n");
          
          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");
          
          b = 100000;
          
          scanf("%d", &n);
          
          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p==5678)
               {
                    printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);
                    
                    if(a>b)
                    {
                         printf("Are didi konsa maal fuuk k ayi ho. itna to tumhara last 3 saal ka bhi balance nhi gya ");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");
                    
                         diff = b - a;
                    
                         printf("Now, Your Bank Balance is %d", diff);
                    }
               }
               else
               {
                    printf("Incorect Pin\n\n");
                    
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p==5678)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);
                         
                         if(a>b)
                         {
                              printf("Are didi konsa maal fuuk k ayi ho. itna to tumhara last 3 saal ka bhi balance nhi gya");
                         }
                         else
                         {
                              printf("Collect The Money\n\n");
                              
                              diff = b - a;
                              
                              printf("Now, Your Bank Balance is %d", diff);
                         }
                    }
                    else 
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }
               }
          }
          else if(n==2)
          {
               printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p!=5678)
               {
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p!=5678)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }
          }
          
     }
     else if(card=='i')
     {
          printf("Hello vanshika\n\n");
          
          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");
          
          b = 60000;
          
          scanf("%d", &n);
          
          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p==9123)
               {
                    printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);
                    
                    if(a>b)
                    {
                         printf("hahahahah good accha majak tha kal hasunga..pta n khn khn se ajate hn apne balance k hisab se nihi niklte");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");
                    
                         diff = b - a;
                    
                         printf("Now, Your Bank Balance is %d", diff);
                    }
               }
               else
               {
                    printf("Incorect Pin\n\n");
                    
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p==9123)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);
                         
                         if(a>b)
                         {
                              printf("hahahahah good accha majak tha kal hasunga..pta n khn khn se ajate hn apne balance k hisab se nihi niklte");
                         }
                         else
                         {
                              printf("Collect The Money\n\n");
                              
                              diff = b - a;
                              
                              printf("Now, Your Bank Balance is %d", diff);
                         }
                    }
                    else 
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }
                    
               }
          }
          else if(n==2)
          {
               printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p!=9123)
               {
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p!=9123)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }
          }
          
     }
     else if(card=='l')
     {
          printf("Hello Rohan\n\n");
          
          printf("> Press 1 To Withdrawal The Money From Your Account\n\n");
          printf("> Press 2 To Check The Balance\n\n");
          
          b = 40000;
          
          scanf("%d", &n);
          
          if(n==1)
          {
               printf("Please Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p==8123)
               {
                   printf("Enter The Amount To Be Withdrawal : \n");
                    scanf("%d", &a);
                    
                    if(a>b)
                    {
                         printf("tera baap yahan chhod ke gaya tha ya teri maaaa");
                    }
                    else
                    {
                         printf("Collect The Money\n\n");
                    
                         diff = b - a;
                    
                         printf("Now, Your Bank Balance is %d", diff);
                    }
               }
               else
               {
                    printf("Incorect Pin\n\n");
                    
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p==8123)
                    {
                         printf("Enter The Amount To Be Withdrawal : \n");
                         scanf("%d", &a);
                         
                         if(a>b)
                         {
                              printf("tera baap yahan chhod ke gaya tha ya teri maaaa");
                         }
                         else
                         {
                              printf("Collect The Money\n\n");
                              
                              diff = b - a;
                              
                              printf("Now, Your Bank Balance is %d", diff);
                         }
                    }
                    else 
                    {
                         printf("Your Request has been Blocked,\n");
                         printf("So Please Try Again");
                    }
               }
          }
          else if(n==2)
          {
              printf("Pleases Enter your 4-Digit Pin : \n");
               scanf("%d", &p);
               
               if(p!=8123)
               {
                    printf("Please Try Again\n\n");
                    
                    scanf("%d", &p);
                    
                    if(p!=8123)
                    {
                         printf("Your Request has been Blocked\n");
                         printf("So, Please Try Again");
                    }
                    else
                    {
                         printf("Your Bank Balance is %d", b);
                    }
               }
               else
               {
                    printf("Your Bank Balance is %d", b);
               }
          }
     }
     else
     {
          printf("Please insert the card properly\n\n");
     }
     
     return 0;

}


