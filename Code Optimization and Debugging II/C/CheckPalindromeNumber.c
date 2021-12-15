#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int rev = 0, orig = num;

    while (num != 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }

    return orig == rev;
}

int main() {
    int num;
    scanf("%d", &num);
    
    isPalindrome(num) ? printf("%d is a Palindrome", num) : printf("%d is Not Palindrome", num); 
}

/*

Output:

1001
1001 is a Palindrome

*/