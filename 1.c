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
    int n, rem,sum=0;
scanf("%d",&n);

while(n!=0){

    rem = n%10;
    sum = sum + rem;
    n = n/10;

}

printf("Sum of digits is %d",sum);







    
    
    return 0;
}

