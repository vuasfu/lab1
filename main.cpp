#include "functions.h"

#include <iostream>
#include <locale>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

// Отображает главное меню программы.
void ShowMenu() {
  cout << "\nМЕНЮ ПРОГРАММЫ" << endl;
  cout << "1.  Вычислить дробную часть числа" << endl;
  cout << "2.  Преобразовать символ цифры в ASCII код" << endl;
  cout << "3.  Проверить, является ли число двузначным" << endl;
  cout << "4.  Проверить, находится ли число в диапазоне" << endl;
  cout << "5.  Проверить равенство трёх чисел" << endl;
  cout << "6.  Вычислить модуль числа" << endl;
  cout << "7.  Проверить делимость на 3 или 5 (но не на 15)" << endl;
  cout << "8.  Найти максимум из трёх чисел" << endl;
  cout << "9.  Вычислить сумму с особым условием" << endl;
  cout << "10. Преобразовать номер дня недели в название" << endl;
  cout << "11. Вывести последовательность чисел от 0 до N" << endl;
  cout << "12. Вывести чётные числа от 0 до N" << endl;
  cout << "13. Подсчитать количество цифр в числе" << endl;
  cout << "14. Нарисовать квадрат из звёздочек" << endl;
  cout << "15. Нарисовать прямоугольный треугольник" << endl;
  cout << "16-17. Работа с массивами (поиск и максимальный модуль)" << endl;
  cout << "0.  Выход" << endl;
}

int main() {
  SetUtf8Console();
  
  int choice;
  
  do {
    ShowMenu();
    choice = GetIntegerInput("Выберите задачу (0-17): ");
    
    switch (choice) {
      case 1: {
        cout << "\nВычисление дробной части числа" << endl;
        double num = GetDoubleInput("Введите число: ");
        double result = Fraction(num);
        cout << "Дробная часть числа: " << result << endl;
        break;
      }
      
      case 2: {
        cout << "\nПреобразование символа цифры в ASCII код" << endl;
        char ch = GetCharInput("Введите символ цифры (0-9): ");
        if (ch >= '0' && ch <= '9') {
          int result = CharToNum(ch);
          cout << "ASCII код символа '" << ch << "': " << result << endl;
        } else {
          cout << "Ошибка: введён не цифровой символ!" << endl;
        }
        break;
      }
      
      case 3: {
        cout << "\nПроверка, является ли число двузначным" << endl;
        int num = GetIntegerInput("Введите число: ");
        bool result = IsTwoDigits(num);
        cout << "Число " << num << (result ? " является" : " не является")
             << " двузначным" << endl;
        break;
      }
      
      case 4: {
        cout << "\nПроверка, находится ли число в диапазоне" << endl;
        int a = GetIntegerInput("Введите начало диапазона (a): ");
        int b = GetIntegerInput("Введите конец диапазона (b): ");
        int num = GetIntegerInput("Введите число для проверки: ");
        bool result = IsInRange(a, b, num);
        int min_val = (a < b) ? a : b;
        int max_val = (a > b) ? a : b;
        cout << "Число " << num << (result ? " находится" : " не находится")
             << " в диапазоне [" << min_val << ", " << max_val << "]" << endl;
        break;
      }
      
      case 5: {
        cout << "\nПроверка равенства трёх чисел" << endl;
        int a = GetIntegerInput("Введите число a: ");
        int b = GetIntegerInput("Введите число b: ");
        int c = GetIntegerInput("Введите число c: ");
        bool result = AreEqual(a, b, c);
        cout << "Числа " << a << ", " << b << ", " << c
             << (result ? " равны" : " не равны") << " между собой" << endl;
        break;
      }
      
      case 6: {
        cout << "\nВычисление модуля числа" << endl;
        int num = GetIntegerInput("Введите число: ");
        int result = MyAbs(num);
        cout << "|" << num << "| = " << result << endl;
        break;
      }
      
      case 7: {
        cout << "\nПроверка делимости на 3 или 5 (но не на оба одновременно)" << endl;
        int num = GetIntegerInput("Введите число: ");
        bool result = IsDivisibleBy3Or5ButNot15(num);
        cout << "Результат: " << (result ? "true" : "false") << endl;
        break;
      }
      
      case 8: {
        cout << "\nНахождение максимума из трёх чисел" << endl;
        int x = GetIntegerInput("Введите число x: ");
        int y = GetIntegerInput("Введите число y: ");
        int z = GetIntegerInput("Введите число z: ");
        int result = MaxOfThree(x, y, z);
        cout << "Максимум из чисел " << x << ", " << y << ", " << z
             << " равен " << result << endl;
        break;
      }
      
      case 9: {
        cout << "\nВычисление суммы с особым условием" << endl;
        int x = GetIntegerInput("Введите число x: ");
        int y = GetIntegerInput("Введите число y: ");
        int result = SpecialSum(x, y);
        cout << "Результат суммы " << x << " + " << y << " = " << result << endl;
        break;
      }
      
      case 10: {
        cout << "\nПреобразование номера дня недели в название" << endl;
        int day_num = GetIntegerInput("Введите номер дня недели (1-7): ");
        string result = DayOfWeek(day_num);
        cout << "День недели: " << result << endl;
        break;
      }
      
      case 11: {
        cout << "\nВывод последовательности чисел от 0 до N" << endl;
        int n = GetIntegerInput("Введите число N: ");
        if (n < 0) {
          cout << "Число должно быть неотрицательным!" << endl;
        } else {
          string result = ListNumbers(n);
          cout << "Последовательность: " << result << endl;
        }
        break;
      }
      
      case 12: {
        cout << "\nВывод чётных чисел от 0 до N" << endl;
        int n = GetIntegerInput("Введите число N: ");
        if (n < 0) {
          cout << "Число должно быть неотрицательным!" << endl;
        } else {
          string result = EvenNumbers(n);
          cout << "Чётные числа: " << result << endl;
        }
        break;
      }
      
      case 13: {
        cout << "\nПодсчёт количества цифр в числе" << endl;
        long num = GetIntegerInput("Введите число: ");
        int result = DigitCount(num);
        cout << "Количество цифр в числе " << num << ": " << result << endl;
        break;
      }
      
      case 14: {
        cout << "\nРисование квадрата из звёздочек" << endl;
        int size = GetIntegerInput("Введите размер квадрата: ");
        if (size <= 0) {
          cout << "Размер должен быть положительным!" << endl;
        } else {
          cout << "\nКвадрат размером " << size << "x" << size << ":\n" << endl;
          DrawSquare(size);
        }
        break;
      }
      
      case 15: {
        cout << "\nРисование прямоугольного треугольника" << endl;
        int height = GetIntegerInput("Введите высоту треугольника: ");
        if (height <= 0) {
          cout << "Высота должна быть положительной!" << endl;
        } else {
          cout << "\nТреугольник высотой " << height << ":\n" << endl;
          DrawRightTriangle(height);
        }
        break;
      }
      
      case 16:
      case 17: {
        ProcessArrayOperations();
        break;
      }
      
      case 0: {
        cout << "Выход из программы..." << endl;
        break;
      }
      
      default: {
        cout << "Неверный выбор! Пожалуйста, выберите от 0 до 17." << endl;
        break;
      }
    }
    
    if (choice != 0) {
      cout << "\nНажмите Enter для продолжения...";
      cin.get();
    }
    
  } while (choice != 0);
  
  return 0;
}