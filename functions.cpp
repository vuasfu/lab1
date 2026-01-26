#include "functions.h"
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

// Задание 1.1: Дробная часть. Возвращает только вещественную часть числа.
double Fraction(double x) {
  return x - static_cast<long>(x);
}

// Задание 1.3: Символ в число. Преобразует символ цифры в int через ASCII.
int CharToNum(char x) {
  if (x >= '0' && x <= '9') return x - '0';
  return -1;
}

// Задание 1.5: Двузначное. Проверка, входит ли число в диапазон [10, 99].
bool IsTwoDigits(int x) {
  int abs_x = std::abs(x);
  return (abs_x >= 10 && abs_x <= 99);
}

// Задание 1.7: Диапазон. Проверяет нахождение n между границами a и b.
bool IsInRange(int a, int b, int num) {
  return (num >= std::min(a, b) && num <= std::max(a, b));
}

// Задание 1.9: Равенство. Возвращает true, если все три аргумента равны.
bool AreEqual(int a, int b, int c) {
  return (a == b && b == c);
}

// Задание 2.1: Модуль. Возвращает абсолютную величину целого числа.
int MyAbs(int x) {
  return (x < 0) ? -x : x;
}

// Задание 2.3: Is35. Делится на 3 или 5, но не на оба (исключающее ИЛИ).
bool Is35(int x) {
  bool d3 = (x % 3 == 0);
  bool d5 = (x % 5 == 0);
  return (d3 || d5) && !(d3 && d5);
}

// Задание 2.5: Максимум трех. Находит самое большое число из переданных.
int MaxOfThree(int x, int y, int z) {
  return std::max({x, y, z});
}

// Задание 2.7: Сумма 20. Возвращает 20, если сумма параметров в пределах [10, 19].
int SpecialSum(int x, int y) {
  int sum = x + y;
  return (sum >= 10 && sum <= 19) ? 20 : sum;
}

// Задание 2.9: День недели. Возвращает текстовое название дня по номеру 1-7.
std::string DayOfWeek(int x) {
  switch (x) {
    case 1: return "Понедельник";
    case 2: return "Вторник";
    case 3: return "Среда";
    case 4: return "Четверг";
    case 5: return "Пятница";
    case 6: return "Суббота";
    case 7: return "Воскресенье";
    default: return "Ошибка: неверный номер дня";
  }
}

// Задание 3.1: Список чисел. Генерирует строку с числами от 0 до x.
std::string ListNumbers(int x) {
  std::string res = "";
  for (int i = 0; i <= x; ++i) {
    res += std::to_string(i) + (i == x ? "" : " ");
  }
  return res;
}

// Задание 3.3: Четные числа. Выводит 0, 2, 4... используя шаг цикла +2.
std::string EvenNumbers(int x) {
  std::string res = "";
  for (int i = 0; i <= x; i += 2) {
    res += std::to_string(i) + " ";
  }
  return res;
}

// Задание 3.5: Кол-во цифр. Считает количество знаков в числе через деление.
int DigitCount(long x) {
  if (x == 0) return 1;
  int count = 0;
  long temp = std::abs(x);
  while (temp > 0) {
    temp /= 10;
    count++;
  }
  return count;
}

// Задание 3.7: Квадрат. Рисует в консоли квадрат из звездочек размером x.
void DrawSquare(int x) {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) std::cout << "*";
    std::cout << "\n";
  }
}

// Задание 3.9: Треугольник. Рисует правый прямоугольный треугольник высотой x.
void DrawRightTriangle(int x) {
  for (int i = 1; i <= x; ++i) {
    for (int j = 0; j < x - i; ++j) std::cout << " ";
    for (int k = 0; k < i; ++k) std::cout << "*";
    std::cout << "\n";
  }
}

// Задание 4.1: Поиск. Возвращает индекс первого найденного элемента x в массиве.
int FindFirstElement(const int arr[], int size, int x) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == x) return i;
  }
  return -1;
}

// Задание 4.3: Макс-Модуль. Ищет число, чей модуль является наибольшим.
int MaxAbs(const int arr[], int size) {
  if (size <= 0) return 0;
  int max_v = arr[0];
  for (int i = 1; i < size; ++i) {
    if (std::abs(arr[i]) > std::abs(max_v)) max_v = arr[i];
  }
  return max_v;
}

// Задание 4.5: Вставка массива. Создает новый массив, вставляя ins внутрь arr.
int* InsertArray(const int arr[], int size, const int ins[], int ins_size, int pos) {
  int* res = new int[size + ins_size];
  for (int i = 0; i < pos; ++i) res[i] = arr[i];
  for (int i = 0; i < ins_size; ++i) res[pos + i] = ins[i];
  for (int i = pos; i < size; ++i) res[i + ins_size] = arr[i];
  return res;
}

// Задание 4.7: Возвратный реверс. Возвращает новый перевернутый массив.
int* ReverseBack(const int arr[], int size) {
  int* res = new int[size];
  for (int i = 0; i < size; ++i) res[i] = arr[size - 1 - i];
  return res;
}

// Задание 4.9: Все вхождения. Возвращает массив индексов, где найдено число x.
int* FindAll(const int arr[], int size, int x) {
  std::vector<int> found;
  for (int i = 0; i < size; ++i) {
    if (arr[i] == x) found.push_back(i);
  }
  int* res = new int[found.size() + 1];
  res[0] = static_cast<int>(found.size());
  for (size_t i = 0; i < found.size(); ++i) res[i + 1] = found[i];
  return res;
}
