#ifndef LAB_FUNCTIONS_H_
#define LAB_FUNCTIONS_H_

#include <string>

// Устанавливает кодировку консоли UTF-8 для корректного отображения русского текста.
void SetUtf8Console();

// 1. Вычисляет дробную часть числа.
double Fraction(double x);

// 2. Преобразует символ цифры в её ASCII код.
int CharToNum(char x);

// 3. Проверяет, является ли число двузначным (по модулю).
bool IsTwoDigits(int x);

// 4. Проверяет, находится ли число в заданном диапазоне (включительно).
bool IsInRange(int a, int b, int num);

// 5. Проверяет, равны ли три числа между собой.
bool AreEqual(int a, int b, int c);

// 6. Вычисляет модуль целого числа.
int MyAbs(int x);

// 7. Проверяет, делится ли число на 3 или 5, но не на 15.
bool IsDivisibleBy3Or5ButNot15(int x);

// 8. Возвращает максимальное из трёх целых чисел.
int MaxOfThree(int x, int y, int z);

// 9. Вычисляет сумму с особым условием: возвращает 20, если сумма от 10 до 19.
int SpecialSum(int x, int y);

// 10. Преобразует номер дня недели (1-7) в название дня на русском.
std::string DayOfWeek(int x);

// 11. Возвращает строку с числами от 0 до x, разделёнными пробелами.
std::string ListNumbers(int x);

// 12. Возвращает строку с чётными числами от 0 до x, разделёнными пробелами.
std::string EvenNumbers(int x);

// 13. Считает количество цифр в длинном целом числе.
int DigitCount(long x);

// 14. Рисует квадрат из звёздочек со стороной x.
void DrawSquare(int x);

// 15. Рисует прямоугольный треугольник из звёздочек высотой x.
void DrawRightTriangle(int x);

// 16. Находит первое вхождение значения x в массиве.
// Возвращает индекс, если найдено, -1 в противном случае.
int FindFirstElement(const int arr[], int size, int x);

// 17. Находит элемент с максимальным модулем в массиве.
int MaxAbsoluteValue(const int arr[], int size);

// Вспомогательные функции для валидации ввода.
int GetIntegerInput(const std::string& prompt);
double GetDoubleInput(const std::string& prompt);
char GetCharInput(const std::string& prompt);

// Выполняет операции с массивом (поиск и максимальный модуль).
void ProcessArrayOperations();

#endif  // LAB_FUNCTIONS_H_