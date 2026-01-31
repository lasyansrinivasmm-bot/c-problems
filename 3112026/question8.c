#include <stdio.h>

float attendancePercentage(int attended, int total) {
    return ((float)attended / total) * 100;
}

int main() {
    printf("80/100 = %.0f%%\n", attendancePercentage(80, 100));
    printf("45/50  = %.0f%%\n", attendancePercentage(45, 50));
    printf("60/75  = %.0f%%\n", attendancePercentage(60, 75));
    printf("30/60  = %.0f%%\n", attendancePercentage(30, 60));
    printf("90/100 = %.0f%%\n", attendancePercentage(90, 100));
    return 0;
}
