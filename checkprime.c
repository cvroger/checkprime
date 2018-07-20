#include <stdio.h>

void checkprime(int);

int main(){
    int src;
    printf("Input a positive integer number (0-2,147,483,647): ");
    scanf("%d", &src);
    checkprime(src);
    return 0;
}

void checkprime(int x){
    int max = (int)sqrt(x)+1;
    int i;
    int factor = 0;
    for (i=2; i<=max; i++){
        if (x % i == 0)
        {
         factor++;
        }
    }
    if (factor > 0){
        printf("%d is not a prime!\n", x );
    }
    else{
        printf("%d is a prime!\n", x );
    }
}
