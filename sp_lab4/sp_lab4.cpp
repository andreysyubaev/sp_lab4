#include <iostream>
#include <cmath>
using namespace std;
/*
//1
#define A(x) (1 / (sqrt(x) + sqrt(2)))
#define Z(a) ((sqrt(a) + sqrt(2)) / ((a) + 2))
int main()
{
	double a = A(5);
	double z = Z(a);
	cout << "z = " << z << endl;
	return 0;
}

//2
#define w(x,y) (((y)*sqrt((pow((x) + (y), 4)))) / ((x) + 10 * (y)))
#define f(x,y,z) (log(pow((z), 3) + (x) + (y)) / (sqrt(pow((x), 2) + pow((y), 2)) - sqrt(z)))
int main() {
    setlocale(LC_ALL, "Russian");
    double x = 4.11;
    double y = 2.99;
    double pr1 = x + 10 * y;
    if (pr1 == 0) {
        cout << "попытка деления на 0 в w" << endl;
        return -1;
    }
    double z = w(x, y);
    double pr2 = pow(z, 3) + x + y;
    if (pr2 <= 0) {
        cout << "логарифм от отрицательного числа или нуля" << endl;
        return -1;
    }

    double b = f(x, y, z);
    cout << "b = f(x, y, z) = " << b << endl;
    return 0;
}
*/
//3
int main() {
    double a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    double y = pow(cos(a), 4) + pow(sin(b), 2) + 0.25 * pow(sin(2 * a), 2) - 1;
    cout << "y = " << y << endl;
}
