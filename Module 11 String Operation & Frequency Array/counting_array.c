//Counting array
#include <stdio.h>
int main(){
//     char str[100];
//     int count[26] = {0}; // Assuming only lowercase letters
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin); 
//     // Count the frequency of each character
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] >= 'a' && str[i] <= 'z') {   
//             count[str[i] - 'a']++;
//         }
//     }
//     // Print the frequency of each character
//     printf("Character Frequency:\n");
//     for (int i = 0; i < 26; i++) {
//         if (count[i] > 0) {
//             printf("%c: %d\n", 'a' + i, count[i]);
//         }
//     }

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)    {
        scanf("%d", &a[i]);
    }
    // int count[100] = {0}; // Assuming the input numbers are between 0 and 99
    // for(int i=0; i<n; i++)    {
    //     count[a[i]]++;
    // }
    // printf("Number Frequency:\n");
    // for(int i=0; i<100; i++)    {
    //     if(count[i] > 0) {
    //         printf("%d: %d\n", i, count[i]);
    //     }
    // }   
    // int zero = 0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;
    int cnt[7]={0};
    for(int i=0; i<n; i++)    {
        int value = a[i];
        cnt[a[i]]++;
    }
    printf("0 - %d\n", cnt[0]);
    printf("1 - %d\n", cnt[1]);
    printf("2 - %d\n", cnt[2]);
    printf("3 - %d\n", cnt[3]);
    printf("4 - %d\n", cnt[4]);
    printf("5 - %d\n", cnt[5]);
    printf("6 - %d\n", cnt[6]); 
    
    //     if(a[i] == 0) {
    //         zero++;
    //     }
    //     if(a[i] == 1) {
    //         one++;
    //     }
    //     if(a[i] == 2) {
    //         two++;
    //     }
    //     if(a[i] == 3) {
    //         three++;
    //     }
    //     if(a[i] == 4) {
    //         four++;
    //     }
    //     if(a[i] == 5) {
    //         five++;
    //     }
    //     if(a[i] == 6) {
    //         six++;
    //     }
    //     if(a[i] == 7) {
    //         seven++;
    //     }
    //     if(a[i] == 8) {
    //         eight++;
    //     }
    //     if(a[i] == 9) {
    //         nine++;
    //     }
    // }
    // printf("Number of zeros: %d\n", zero);
    // printf("Number of ones: %d\n", one);
    // printf("Number of twos: %d\n", two);
    // printf("Number of threes: %d\n", three);
    // printf("Number of fours: %d\n", four);
    // printf("Number of fives: %d\n", five);
    // printf("Number of sixes: %d\n", six);
    // printf("Number of sevens: %d\n", seven);
    // printf("Number of eights: %d\n", eight);
    // printf("Number of nines: %d\n", nine);

    return 0;
}