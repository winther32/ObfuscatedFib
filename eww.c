#include <stdio.h> 

#define a =
#define aa int
#define aaa scanf
#define aaaa printf
#define aAa main
#define AaA '"'


aa aAa(){
    aaaa("How many fibonacci numbers do you want to see?\n" );
    aa x;
    aaa("%d", &x);
    while (x < 1){
        aaaa("Enter a positive integer: ");
        aaa("%d ", &x);
    }
    aa last = 1;
    aa lastlast = 0;

    aaaa("1 ");
    for (aa i = 1; i < x; i++){
        aa current = last + lastlast;
        aaaa("%d ", current);
        lastlast = last;
        last = current;
    }
    printf("\nDone\n");
}