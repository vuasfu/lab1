#include <iostream>
#include <locale>
#include <string>
#include <limits>
#include "functions.h"

// Очистка потока ввода для предотвращения зацикливания и вылета меню
void CleanStdin() {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int SafeIntInput(const std::string& msg) {
  int val;
  while (true) {
    std::cout << msg;
    if (std::cin >> val) return val;
    std::cout << "Ошибка: введите целое число!" << std::endl;
    CleanStdin();
  }
}

int main() {
  try {
    std::locale::global(std::locale(""));
    std::cout.imbue(std::locale());
  } catch (...) {}

  std::cout << std::boolalpha; // Настройка вывода true/false

  int choice;
  do {
    std::cout << "\n--- МЕНЮ ЗАДАНИЙ ---" << std::endl;
    std::cout << "1.  [1.1] Дробная часть: выделяет 0.xx из числа x" << std::endl;
    std::cout << "2.  [1.3] Символ в число: превращает char '5' в int 5" << std::endl;
    std::cout << "3.  [1.5] Двузначное: проверка, лежит ли число в [-99, -10] или [10, 99]" << std::endl;
    std::cout << "4.  [1.7] Диапазон: входит ли число n в интервал между a и b" << std::endl;
    std::cout << "5.  [1.9] Равенство: проверка, что все три числа одинаковы" << std::endl;
    std::cout << "6.  [2.1] Модуль: возвращает абсолютное значение числа" << std::endl;
    std::cout << "7.  [2.3] Is35: делится на 3 или 5, но не на 15" << std::endl;
    std::cout << "8.  [2.5] Максимум: находит наибольшее из трех чисел" << std::endl;
    std::cout << "9.  [2.7] Сумма 20: если сумма в [10, 19], результат равен 20" << std::endl;
    std::cout << "10. [2.9] День недели: выводит название по номеру 1-7" << std::endl;
    std::cout << "11. [3.1] Список: выводит все числа от 0 до N" << std::endl;
    std::cout << "12. [3.3] Четные: выводит четные от 0 до N без использования if" << std::endl;
    std::cout << "13. [3.5] Цифры: считает количество знаков в длинном числе" << std::endl;
    std::cout << "14. [3.7] Квадрат: рисует заполненную фигуру из звездочек" << std::endl;
    std::cout << "15. [3.9] Треугольник: рисует прямоугольный треугольник (правый угол)" << std::endl;
    std::cout << "16. [4.1] Поиск: возвращает индекс первого вхождения числа в массив" << std::endl;
    std::cout << "17. [4.3] Макс-Модуль: ищет элемент с наибольшим абсолютным значением" << std::endl;
    std::cout << "18. [4.5] Вставка: вставляет один массив в другой по индексу" << std::endl;
    std::cout << "19. [4.7] Реверс: создает новый массив-копию, перевернутый задом наперед" << std::endl;
    std::cout << "20. [4.9] Все вхождения: ищет все индексы числа в массиве" << std::endl;
    std::cout << "0.  Выход" << std::endl;

    choice = SafeIntInput("Выберите пункт: ");

    switch (choice) {
      case 1: {
        double d;
        std::cout << "Введите число: ";
        if (!(std::cin >> d)) CleanStdin();
        else std::cout << "Результат: " << Fraction(d) << std::endl;
        break;
      }
      case 2: {
        char c;
        std::cout << "Введите символ цифры: ";
        std::cin >> c;
        int res = CharToNum(c);
        if (res != -1) std::cout << "Результат: " << res << std::endl;
        else std::cout << "Ошибка: это не цифра!" << std::endl;
        CleanStdin(); 
        break;
      }
      case 3:
        std::cout << "Результат: " << IsTwoDigits(SafeIntInput("Число: ")) << std::endl;
        break;
      case 4: {
        int a = SafeIntInput("a: "), b = SafeIntInput("b: "), n = SafeIntInput("n: ");
        std::cout << "Результат: " << IsInRange(a, b, n) << std::endl;
        break;
      }
      case 5: {
        int a = SafeIntInput("1: "), b = SafeIntInput("2: "), c = SafeIntInput("3: ");
        std::cout << "Результат: " << AreEqual(a, b, c) << std::endl;
        break;
      }
      case 6:
        std::cout << "Результат: " << MyAbs(SafeIntInput("Число: ")) << std::endl;
        break;
      case 7:
        std::cout << "Результат: " << Is35(SafeIntInput("Число: ")) << std::endl;
        break;
      case 8: {
        int a = SafeIntInput("1: "), b = SafeIntInput("2: "), c = SafeIntInput("3: ");
        std::cout << "Результат: " << MaxOfThree(a, b, c) << std::endl;
        break;
      }
      case 9: {
        int a = SafeIntInput("1: "), b = SafeIntInput("2: ");
        std::cout << "Результат: " << SpecialSum(a, b) << std::endl;
        break;
      }
      case 10:
        std::cout << DayOfWeek(SafeIntInput("Номер дня: ")) << std::endl;
        break;
      case 11:
        std::cout << "Результат: " << ListNumbers(SafeIntInput("N: ")) << std::endl;
        break;
      case 12:
        std::cout << "Результат: " << EvenNumbers(SafeIntInput("N: ")) << std::endl;
        break;
      case 13: {
        long n;
        std::cout << "Введите число: ";
        if (!(std::cin >> n)) CleanStdin();
        else std::cout << "Результат: " << DigitCount(n) << std::endl;
        break;
      }
      case 14:
        DrawSquare(SafeIntInput("Введите сторону: "));
        break;
      case 15:
        DrawRightTriangle(SafeIntInput("Введите высоту: "));
        break;
      case 16: {
        int s = SafeIntInput("Размер массива: ");
        int* a = new int[s];
        for(int i=0; i<s; ++i) a[i] = SafeIntInput("Введите элемент: ");
        int x = SafeIntInput("Ищем элемент: ");
        std::cout << "Индекс: " << FindFirstElement(a, s, x) << std::endl;
        delete[] a;
        break;
      }
      case 17: {
        int s = SafeIntInput("Размер массива: ");
        int* a = new int[s];
        for(int i=0; i<s; ++i) a[i] = SafeIntInput("Введите элемент: ");
        std::cout << "Результат: " << MaxAbs(a, s) << std::endl;
        delete[] a;
        break;
      }
      case 18: {
        int s1 = SafeIntInput("Размер 1 массива: ");
        int* a1 = new int[s1];
        for(int i=0; i<s1; ++i) a1[i] = SafeIntInput("Введите элемент: ");
        int s2 = SafeIntInput("Размер 2 массива: ");
        int* a2 = new int[s2];
        for(int i=0; i<s2; ++i) a2[i] = SafeIntInput("Введите элемент: ");
        int p = SafeIntInput("После какого элемента выполнить вставку: ");
        int* r = InsertArray(a1, s1, a2, s2, p);
        for(int i=0; i<(s1+s2); ++i) std::cout << r[i] << " ";
        delete[] a1; delete[] a2; delete[] r;
        break;
      }
      case 19: {
        int s = SafeIntInput("Размер массива: ");
        int* a = new int[s];
        for(int i=0; i<s; ++i) a[i] = SafeIntInput("Введите элемент: ");
        int* r = ReverseBack(a, s);
        for(int i=0; i<s; ++i) std::cout << r[i] << " ";
        delete[] a; delete[] r;
        break;
      }
      case 20: {
        int s = SafeIntInput("Размер массива: ");
        int* a = new int[s];
        for(int i=0; i<s; ++i) a[i] = SafeIntInput("Введите элемент: ");
        int x = SafeIntInput("Ищем вхождение числа: ");
        int* r = FindAll(a, s, x);
        std::cout << "Индексы: ";
        for(int i=1; i<=r[0]; ++i) std::cout << r[i] << " ";
        delete[] a; delete[] r;
        break;
      }
      case 0: std::cout << "Выход..." << std::endl; break;
      default: std::cout << "Нет такого пункта!" << std::endl; break;
    }
  } while (choice != 0);

  return 0;
}
