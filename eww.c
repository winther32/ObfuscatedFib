#include <stdio.h> 

#define a =
#define aa int
#define aaa scanf
#define aaAa printf
#define aAa main

void prints(int x, int y, int z){
    aaAa("1 ");
    for (aa i = 1; i < z; i++){
        aa current = x + y;
        aaAa("%d ", current);
        y = x;
        x = current;
    }
    aaAa("\nDone\n");
}

aa aAa(){
    aaAa("How many fibonacci numbers do you want to see?\n" );
    aa x;
    aa last = 1;
    aa lastlast = 0;
    aaa("%d", &x);
    (x < 1) ? 
        ( aaAa("Enter a positive integer!\n"), 
        main() )
        : 
        prints(last, lastlast, x)
        ;     
}