#include "functions.h"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::string;
using std::to_string;

void SetUtf8Console() {
#ifdef _WIN32
  system("chcp 65001 > nul");
#endif
}

// 1. Вычисляет дробную часть числа.
double Fraction(double x) {
  return x - static_cast<int>(x);
}

// 2. Преобразует символ цифры в её ASCII код.
int CharToNum(char x) {
  return static_cast<int>(x);
}

// 3. Проверяет, является ли число двузначным (по модулю).
bool IsTwoDigits(int x) {
  int abs_x = (x < 0) ? -x : x;
  return (abs_x >= 10 && abs_x <= 99);
}

// 4. Проверяет, находится ли число в заданном диапазоне (включительно).
bool IsInRange(int a, int b, int num) {
  return (a <= num && num <= b) || (b <= num && num <= a);
}

// 5. Проверяет, равны ли три числа между собой.
bool AreEqual(int a, int b, int c) {
  return (a == b && b == c);
}

// 6. Вычисляет модуль целого числа.
int MyAbs(int x) {
  return (x > 0) ? x : -x;
}

// 7. Проверяет, делится ли число на 3 или 5, но не на 15.
bool IsDivisibleBy3Or5ButNot15(int x) {
  bool divisible_by_3 = (x % 3 == 0);
  bool divisible_by_5 = (x % 5 == 0);
  
  return (divisible_by_3 || divisible_by_5) && !(divisible_by_3 && divisible_by_5);
}

// 8. Возвращает максимальное из трёх целых чисел.
int MaxOfThree(int x, int y, int z) {
  int max_value = x;
  if (y > max_value) max_value = y;
  if (z > max_value) max_value = z;
  return max_value;
}

// 9. Вычисляет сумму с особым условием: возвращает 20, если сумма от 10 до 19.
int SpecialSum(int x, int y) {
  int sum_xy = x + y;
  return (sum_xy >= 10 && sum_xy <= 19) ? 20 : sum_xy;
}

// 10. Преобразует номер дня недели (1-7) в название дня на русском.
string DayOfWeek(int x) {
  switch (x) {
    case 1:
      return "понедельник";
    case 2:
      return "вторник";
    case 3:
      return "среда";
    case 4:
      return "четверг";
    case 5:
      return "пятница";
    case 6:
      return "суббота";
    case 7:
      return "воскресенье";
    default:
      return "это не день недели";
  }
}

// 11. Возвращает строку с числами от 0 до x, разделёнными пробелами.
string ListNumbers(int x) {
  string result = "";
  for (int i = 0; i <= x; ++i) {
    result += to_string(i);
    if (i < x) result += " ";
  }
  return result;
}

// 12. Возвращает строку с чётными числами от 0 до x, разделёнными пробелами.
string EvenNumbers(int x) {
  if (x < 0) return "";
  string result = "";
  bool first = true;
  for (int i = 0; i <= x; i += 2) {
    if (!first) result += " ";
    result += to_string(i);
    first = false;
  }
  return result;
}

// 13. Считает количество цифр в длинном целом числе.
int DigitCount(long x) {
  if (x == 0) return 1;
  if (x < 0) x = -x;
  int count = 0;
  while (x > 0) {
    ++count;
    x /= 10;
  }
  return count;
}

// 14. Рисует квадрат из звёздочек со стороной x.
void DrawSquare(int x) {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      cout << "*";
    }
    cout << endl;
  }
}

// 15. Рисует прямоугольный треугольник из звёздочек высотой x.
void DrawRightTriangle(int x) {
  for (int i = 1; i <= x; ++i) {
    for (int j = 0; j < x - i; ++j) {
      cout << " ";
    }
    for (int j = 0; j < i; ++j) {
      cout << "*";
    }
    cout << endl;
  }
}

// 16. Находит первое вхождение значения x в массиве.
int FindFirstElement(const int arr[], int size, int x) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

// 17. Находит элемент с максимальным модулем в массиве.
int MaxAbsoluteValue(const int arr[], int size) {
  if (size == 0) return 0;
  int max_value = arr[0];
  for (int i = 1; i < size; ++i) {
    if (abs(arr[i]) > abs(max_value)) {
      max_value = arr[i];
    }
  }
  return max_value;
}

// Вспомогательная функция для получения целого числа с валидацией.
int GetIntegerInput(const string& prompt) {
  int value;
  while (true) {
    cout << prompt;
    cin >> value;
    if (cin.fail()) {
      cout << "Ошибка ввода! Пожалуйста, введите целое число." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      return value;
    }
  }
}

// Вспомогательная функция для получения числа с плавающей точкой с валидацией.
double GetDoubleInput(const string& prompt) {
  double value;
  while (true) {
    cout << prompt;
    cin >> value;
    if (cin.fail()) {
      cout << "Ошибка ввода! Пожалуйста, введите число." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      return value;
    }
  }
}

// Вспомогательная функция для получения символа с валидацией.
char GetCharInput(const string& prompt) {
  string input;
  
  while (true) {
    cout << prompt;
    getline(cin, input);
    
    // Проверка на пустой ввод
    if (input.empty()) {
      cout << "Ошибка: ввод не может быть пустым! Пожалуйста, введите цифру." << endl;
      continue;
    }
    
    // Проверка на ввод одного символа
    if (input.length() != 1) {
      cout << "Ошибка: нужно ввести только один символ! Вы ввели: '" << input << "'" << endl;
      continue;
    }
    
    char value = input[0];
    
    // Проверка, является ли символ цифрой
    if (value < '0' || value > '9') {
      cout << "Ошибка: символ '" << value << "' не является цифрой от 0 до 9!" << endl;
      continue;
    }
    
    return value;
  }
}

// Выполняет операции с массивом (поиск и максимальный модуль).
void ProcessArrayOperations() {
  cout << "\nРабота с массивом" << endl;
  
  int size = GetIntegerInput("Введите размер массива: ");
  if (size <= 0) {
    cout << "Размер массива должен быть положительным!" << endl;
    return;
  }
  
  int* arr = new int[size];
  cout << "Введите " << size << " элементов массива:" << endl;
  for (int i = 0; i < size; ++i) {
    arr[i] = GetIntegerInput("Элемент " + to_string(i) + ": ");
  }
  
  // Поиск элемента.
  int search_value = GetIntegerInput("Введите элемент для поиска: ");
  int position = FindFirstElement(arr, size, search_value);
  if (position != -1) {
    cout << "Элемент найден на позиции: " << position << endl;
  } else {
    cout << "Элемент не найден в массиве." << endl;
  }
  
  // Максимальный по модулю элемент.
  int max_abs_value = MaxAbsoluteValue(arr, size);
  cout << "Элемент с максимальным модулем: " << max_abs_value
       << " (модуль: " << abs(max_abs_value) << ")" << endl;
  
  delete[] arr;
}