
#include<stdio.h>
int main() {
    double c=234.345,d=45.698;
    printf("%lf - %lf\n", c, d);
    printf("%.0lf - %.0lf\n", c, d);
    printf("%.1lf - %.1lf\n", c, d);
    printf("%.2f - %.2lf\n", c, d);
    printf("%.3lf - %.3lf\n", c, d);
    printf("%.6e - %.6e\n", c, d);
    printf("%.6E - %.6E\n", c, d);
    printf("%.3lf - %.3lf\n", c, d);
    printf("%.3lf - %.3lf\n", c, d);


    return 0;
}
