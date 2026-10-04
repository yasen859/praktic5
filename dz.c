#include <stdio.h>
#include <locale.h>
#include <math.h>
double name(double x, double y, double z) {
	double first;
	double abs_xy = fabs(x - y);
	double numerator = cbrt(8.0 + pow(abs_xy, 2)) + 1.0;
	double denominstor = x * x + y * y + 2.0;
	first = numerator / denominstor;
	return first;
}

double name2(double x, double y, double z) {
	double second;
	double tg_z = tan(z);
	second = exp(abs_xy) * pow(tg_z * tg_z + 1.0, x);
	return second;
}
int main() {
	setlocale(LC_ALL, ".UTF8");
	double x, y, z, u;
	puts("Введите x y z\n");
	scanf_s("%lf", &x);
	scanf_s("%lf", &y);
	scanf_s("%lf", &z);
	double first = name;
	double second = name2;
	u = first - second;
	printf("u = %6lf\n", u);
	return 0;
	system("pause");


}
