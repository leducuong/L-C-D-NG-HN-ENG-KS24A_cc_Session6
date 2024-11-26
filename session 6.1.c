#include <stdio.h>

int main() {
    int num;
    int sc = 0, sl = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            sc++;
        } else {
            sl++;
        }
    }
 
    printf("So chan: %d\n", sc);
    printf("So le: %d\n", sl);

    return 0;
}
