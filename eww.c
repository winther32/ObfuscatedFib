#include <stdio.h> 

int main(){
    printf("How many fibonacci numbers do you want to see?\n");
    int x;
    scanf("%d", &x);
    while (x < 1){
        printf("Enter a positive integer: ");
        scanf("%d", &x);
    }
    int last = 1;
    int lastlast = 0;

    printf("1 ");
    for (int i = 1; i < x; i++){
        int current = last + lastlast;
        printf("%d ", current);
        lastlast = last;
        last = current;
    }

    printf("\nDone\n");
}
