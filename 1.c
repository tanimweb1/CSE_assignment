#include<stdio.h>
int main(){


int n;
printf("enter the number : ");
scanf("%d",&n);

for(int i = 0; i<=n;i++){
    printf("%d\n",i);
}






//prime or not 
        int n, count = 0;
        printf("Enter any positive number : ");
        scanf("%d", &n);

        if(n<=1){
            count++;
        }

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            printf("%d is a prime\n",n);
        }
        else
        {
            printf("%d is not a prime\n",n);
        }








// sum of digits 
    int n, rem,sum=0,temp;
scanf("%d",&n);

temp = n;

while(temp!=0){

    rem = temp%10;
    sum = sum + rem;
    temp = temp/10;

}

printf("Sum of digits is %d",sum);








//plaindrome number
    int n,rem,sum=0,temp;
scanf("%d",&n);

temp = n;

while(temp!=0){

rem = temp%10;
sum = sum*10+ rem;
temp = temp/10;

}

if(n==sum){
    printf("%d is a Palindrome number\n",sum);
}
else{
    printf("%d is Not a palindrome number\n",sum);
}


    




//reverse a number
    int n,rem,sum=0,temp;
scanf("%d",&n);

temp = n;

while(temp!=0){

rem = temp%10;
sum = sum*10+ rem;
temp = temp/10;

}

    printf("reverse is %d",sum);

    



//even number    
int n;
printf("enter the number : ");
scanf("%d",&n);

for(int i = 2; i<=n;i=i+2){
    printf("%d\n",i);
}





//odd number
int n;
printf("enter the number : ");
scanf("%d",&n);

for(int i = 1; i<=n;i=i+2){
    printf("%d\n",i);
}
    




//multiplication table
int n,multi;
printf("enter the number : ");
scanf("%d",&n);

for(int i = 1; i<=10;i++){
   // multi = n*i;
printf("%d * %d = %d\n", n, i,n*i);
}



    

//factorial
int n,fact=1;
printf("enter any positive number : ");
scanf("%d",&n);

for(int i = 1; i<=n;i++){
  
    fact = fact * i ;

}

printf("%d",fact);





//product of digits of a number
    int n,rem,sum=1,temp;
scanf("%d",&n);

temp = n;

while(temp!=0){

rem = temp%10;
sum = sum*rem;
temp = temp/10;

}

    printf("product is %d",sum);

    



//armstrong number
    int n,rem,sum=0,temp;
scanf("%d",&n);

temp = n;

while(temp!=0){

rem = temp%10;
sum = sum+rem*rem*rem;
temp = temp/10;

}

  if(n==sum){
    printf("armstrong number\n");
  }
  else{
    printf("Not a armstrong number\n");
  }


    
    
    
    
    return 0;
}

