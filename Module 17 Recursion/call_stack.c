// call stack example
#include <stdio.h>
void world(){
    printf("World!\n");
    printf("This is the call stack example.\n");
}
void hello(){
    printf("Hello, ");
    world();
    printf("Welcome to C programming.\n");
}
int main(){
    printf("Starting the program...\n");
    hello();
    printf("Goodbye!\n");
    return 0;
}