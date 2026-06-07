#include <stdio.h>

int reverse_helper(int num, int rev)
    {
    if (num == 0) {
        return rev;
    }
    return reverse_helper(num / 10, rev * 10 + num % 10);

}
int reverse_num(int num) {
    return reverse_helper(num, 0);
}

int main() {
    int num ;

    printf("\n ENTER A NUMBER U WANT TO REVERSE : ");
    scanf("%d",&num);

    int result = reverse_num(num);
    
    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", result);
    
    return 0;
}
