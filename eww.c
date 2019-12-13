#include <stdio.h> 

#define a =
#define aa int
#define aaa scanf
<<<<<<< HEAD
#define aaAa printf
=======
#define aaaa printf
>>>>>>> eeb2e97a20c131c5deafcf11e8aee5120143d768
#define aAa main
#define AaA '"'


aa aAa(){
<<<<<<< HEAD
    aaAa("How many fibonacci numbers do you want to see?\n" );
    aa x;
    aaa("%d", &x);
    (x < 1) ? 
        ( aaAa("Enter a positive integer!\n"), 
        main() )
        : 
        x;
    
    aa last = 1;
    aa lastlast = 0;

    aaAa("1 ");
    for (aa i = 1; i < x; i++){
        aa current = last + lastlast;
        aaAa("%d ", current);
        lastlast = last;
        last = current;
    }
    aaAa("\nDone\n");
=======
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
>>>>>>> eeb2e97a20c131c5deafcf11e8aee5120143d768
}