#include <stdio.h>

// Hàm đệ quy tính tổng S(n)
int tong_de_quy(int n) {
    if (n == 1) {
        return 1 * 2; // Trường hợp cơ sở
    }
    else {
        return n * (n + 1) + tong_de_quy(n - 1); // Trường hợp đệ quy
    }
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap so nguyen duong.\n");
    }
    else {
        printf("Tong S(%d) theo de quy la: %d\n", n, tong_de_quy(n));
    }

    return 0;
}
