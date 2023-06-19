

#include <iostream>
#include <clocale>
#include<cmath>
//int main()
//{
//    setlocale(LC_CTYPE, "rus");
//    int result = 0, num_1, num_2, num_3;
//    int i = 100;
//    int j = 999;
//    for (; i <= j; i++) {
//        for (; i <= j; j--) 
//        {
//
//            num_1 = j / 100;
//            num_2 = (j % 100) / 10;
//            num_3 = j % 10;
//            if (num_1 == num_2 || num_2 == num_3 || num_3 == num_1); 
//            {
//                result++;
//            }
//
//        }
//    }
//    std::cout << "Количество целых чисел в диапазоне от 100 до 999 у которых две одинаковые цифры = " << result;
//
//    return 0;
//
//}
//задание 3
//int main() {
//    setlocale(LC_CTYPE, "rus");
//    int n1 = 0, n2 = 0, n3 = 0;
//    int count = 0;
//    for (int i = 100; i <= 999; i++)
//    {
//        n1 = i / 100;
//        n2 = (i / 10) % 10;
//        n3 = i % 10;
//
//        if (n1 != n2 && n2 != n3 && n1 != n3)
//        {
//            count++;
//        }
//    }
//    std::cout << "Количество целых чисел, у которых все цифры разные: " << count << std::endl;
//    
//    return 0;
//}
// задание 4
//int main() {
//	setlocale(LC_CTYPE, "rus");
//	int result = 1, user_input, a = 0;
//
//	std::cout << "Введие число: " << std::endl;
//	std::cin >> user_input;
//
//	while (user_input != 0) 
//	{
//		if ((user_input % 10) != 3 && (user_input % 10) != 6) 
//		{
//			a += (user_input % 10) * result;
//			result *= 10;
//		}
//		user_input /= 10;
//	}
//	user_input = a;
//	std::cout << user_input;
//
//		return 0;
//}

// задание 5
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b;
//	std::cout << "Введите число: \n";
//	std::cin >> a;
//	for (int i = 2; i <= a; i++)
//	{
//		b = i; if ((a % (b * b) == 0) && (a % (b * b * b) != 0))
//		{
//			std::cout << b << std::endl;
//		}
//	}
//	return 0;
//
//}
//
// задание 7
//int main()
//{
//    setlocale(LC_ALL, "rus");
//
//    int number;
//    std::cout << "Введите число: ";
//    std::cin >> number;
//
//    for (int i = 1; i < number; i++)
//    {
//        if (number % i == 0) {
//            std::cout << i << std::endl;
//        }
//    }
//}
//задание 6
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, j = 0;
//
//	std::cout << "Введите число:";
//	std::cin >> a;
//
//	int k = a;
//
//	while (k > 0) {
//
//		j += k % 10;
//
//		k /= 10;
//	}
//	if (pow(j, 3) == pow(a, 2))
//	{
//		std::cout << "Куб суммы цифр этого числа равен А*А." << std::endl;
//	}
//	else {
//		std::cout << "Куб суммы цифр этого числа не равен А*А." << std::endl;
//	}
//}
//задание 8
int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "Пожалуйста введите два числа: ";
	int a, b, l;
	std::cin >> a;
	std::cin >> b;

	if (a > b) {
		l = a;
	}
	else {
		l = b;
	}
	for (int i = 1; i <= l; i++)
	{
		if (a % i == 0 && b % i == 0) {
			std::cout << "Число на которое делятся два введёных числа: " << i << std::endl;
		}
	}
	return 0;
}