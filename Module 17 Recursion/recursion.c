// recursion
#include <stdio.h>
void count_down(int n){
    if(n < 0){
        return; // base case: stop recursion when n is negative
    }
    printf("%d ", n);
    count_down(n - 1); // recursive call with n decremented by 1
}
int main(){
    int number = 5;
    printf("Counting down from %d:\n", number);
    count_down(number);
    printf("\nDone!\n");
    return 0;
}