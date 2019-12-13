#include <stdio.h> 

#define a =
#define aa int
#define aaa scanf
#define aaAa printf
#define aAa main
#define AaA '"'


aa aAa(){
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
}