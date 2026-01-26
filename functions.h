#ifndef LAB1_FUNCTIONS_H_
#define LAB1_FUNCTIONS_H_

#include <string>

// Задание 1. Методы
double Fraction(double x);
int CharToNum(char x);
bool IsTwoDigits(int x);
bool IsInRange(int a, int b, int num);
bool AreEqual(int a, int b, int c);

// Задание 2. Условия
int MyAbs(int x);
bool Is35(int x); // Задание 2.3 исправлено
int MaxOfThree(int x, int y, int z);
int SpecialSum(int x, int y);
std::string DayOfWeek(int x);

// Задание 3. Циклы
std::string ListNumbers(int x);
std::string EvenNumbers(int x);
int DigitCount(long x);
void DrawSquare(int x);
void DrawRightTriangle(int x);

// Задание 4. Массивы
int FindFirstElement(const int arr[], int size, int x);
int MaxAbs(const int arr[], int size);
int* InsertArray(const int arr[], int size, const int ins[], int ins_size, int pos);
int* ReverseBack(const int arr[], int size);
int* FindAll(const int arr[], int size, int x);

#endif  // LAB1_FUNCTIONS_H_
