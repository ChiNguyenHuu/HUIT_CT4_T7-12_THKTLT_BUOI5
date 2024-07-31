#include <stdio.h>

// Hàm đệ quy tính tổng S(n)
double tong_de_quy(int n) {
    if (n == 1) {
        return 1.0; // Trường hợp cơ sở
    }
    else {
        return 1.0 / (2 * (n - 1) + 1) + tong_de_quy(n - 1); // Trường hợp đệ quy
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
        printf("Tong S(%d) theo de quy la: %.6f\n", n, tong_de_quy(n));
    }

    return 0;
}
