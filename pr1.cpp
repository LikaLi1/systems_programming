#include iostream
#include ctime
#include cstdlib
#include cmath
using namespace std;


void task1() {
    cout  First task;
    cout  endl;

    cout  Enter your age ;
    int age;
    cin  age;

    cout  Enter your drive experience ;
    int drive_experience;
    cin  drive_experience;

    if (age  18)
        cout  Access denied;
    if (age = 18 && drive_experience  3)
        cout  Access is permitted, but the rate is higher;
    if (age = 18 && drive_experience = 3)
        cout  Access granted, standard rate;
}


void task2()
{
    cout  Second task;
    cout  endl;

    cout  Enter first number ;
    float first_num;
    cin  first_num;

    cout  Enter second number ;
    float second_num;
    cin  second_num;

    cout  Enter the operation symbol(+, -, , );
    char sym_operation;
    cin  sym_operation;

    switch (sym_operation)
    {
    case '+'
        cout  Addition =   first_num + second_num  endl;
        break;

    case '-'
        cout  Subtraction =   first_num - second_num  endl;
        break;

    case ''
        cout  Multiplication =   first_num  second_num  endl;
        break;

    case ''
        if (second_num == 0) {
            cout  Error division by zero  endl;
        }
        else {
            cout  Division =   (static_castlong long(first_num)  static_castlong long(second_num))  ,  (static_castlong long(first_num) % static_castlong long(second_num))  endl;
        }
        break;

    default
        cout  Error  endl;
        break;
    }
}


void task3()
{
    cout  Third  task; Part 1;
    cout  endl;

    int sum = 0;
    for (int i = 1; i = 100; i++)
        if (i % 2 != 0)
            sum += i;
    cout  sum;

    cout  endl;

    cout  Third  task; Part 2;
    cout  endl;

    cout  Enter number(enter 0) ;
    int count = 0;
    int number = -1;

    while (number != 0) {
        cin  number;
        if (number != 0) {
            count++;
        }
    }
    cout  count;
}


void task4()
{
    cout  endl;
    cout  Fourth  task;
    cout  endl;

	const int size = 10;
	int arr[size];
	int maxV = arr[0];
	int maxI = 0;

	srand(static_castunsigned int(time(nullptr)));

	for (int i = 0; i  size; i++)
		arr[i] = 1 + rand() % 50;

	for (int i = 0; i  size; i++)
		cout  arr[i]   ;

	for (int i = 0; i  size; i++) {
		if (arr[i]  maxV) {
			maxV = arr[i];
			maxI = i;
		}
	}
	cout  endl;
	cout  maxV  endl;
	cout  maxI  endl;
}


void task5()
{
    cout  Fifth task;
    cout  endl;

    int a = 5;
    int b = 10;

    cout  a =   a   b =   b  endl;

    int c = &a;
    int d = &b;

    int tmp = c;

    c = d;
    d = tmp;

    cout  a =   a   b =   b  endl;
}


bool isPrime(int a) {
    if (a = 1) 
        return false;
    if (a % 2 == 0)
        return false;
    if (a == 2) 
        return true;

    for (int i = 3; i  i = a; i += 2) {
        if (a % i == 0) 
            return false;
    }
    return true;
}


int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
    cout  Sixth task;
    cout  endl;

    cout  Enter number ;
    int x;
    if (!(cin  x)) {
        cout  Invalid input!  endl;
        return 0;
    }
    if (isPrime(x)) {
        cout  Simple  endl;
    }
    else {
        cout  Not simple  endl;
    }
    return 0;
}
