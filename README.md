# lab1
# ФИО: Булгакова Юлия Олеговна

Выполнить все задания в одном проекте в виде статических методов одного класса. В главной функции `main` организовать вызов всех функций с дружественным интерфейсом. Для всех вводов организовать проверку на корректность данных.

# Постановка задач

Задание 1.1.1
Вычислить дробную часть вещественного числа.

Алгоритм:

1) Получить вещественное число от пользователя
2) Вычислить дробную часть: число минус его целая часть
3) Вывести результат

# Реализация: 

```cpp
void Lab1::Task1Fraction() {
  double number = GetDouble("Введите вещественное число: ");
  double result = Fraction(number);
  std::cout << "Дробная часть числа " << number << " = " << result << std::endl;
}

double Lab1::Fraction(double x) {
  return x - static_cast<int>(x);
}
```

# Тестирование
<img width="236" height="67" alt="image" src="https://github.com/user-attachments/assets/985fd5e5-897d-448f-a85d-8042a035e44d" />
<img width="260" height="67" alt="image" src="https://github.com/user-attachments/assets/99ae58a7-c674-4686-9338-35f41cbfec56" />
<img width="231" height="63" alt="image" src="https://github.com/user-attachments/assets/a589725d-11d8-4d97-a2ac-2fdc9ec31298" />

# Задание 1.1.2
Преобразовать символ цифры в её ASCII код.

Алгоритм:

1) Получить символ от пользователя.
2) Проверить, является ли символ цифрой (0-9).
3) Преобразовать символ в целое число (ASCII код).
4)Вывести результат.

# Реализация:

```cpp
void Lab1::Task2CharToAscii() {
  std::string input;
  while (true) {
    std::cout << "Введите один символ цифры (0-9): ";
    std::getline(std::cin, input);
    
    // Проверка на пустой ввод
    if (input.empty()) {
      std::cout << "Ошибка: ввод не может быть пустым!" << std::endl;
      continue;
    }
    
    // Проверка на ввод одного символа
    if (input.length() != 1) {
      std::cout << "Ошибка: нужно ввести только один символ!" << std::endl;
      continue;
    }
    
    char symbol = input[0];
    
    // Проверка, является ли символ цифрой
    if (symbol < '0' || symbol > '9') {
      std::cout << "Ошибка: символ '" << symbol << "' не является цифрой от 0 до 9!" << std::endl;
      continue;
    }
    
    // Если все проверки пройдены, преобразуем в ASCII код
    int ascii_code = CharToNum(symbol);
    std::cout << "Символ: '" << symbol << "'" << std::endl;
    std::cout << "ASCII код: " << ascii_code << std::endl;
    std::cout << "Результат: " << ascii_code << std::endl;
    break;
  }
}

int Lab1::CharToNum(char x) {
  return static_cast<int>(x);
}
}
```

# Тестирование:
<img width="297" height="58" alt="image" src="https://github.com/user-attachments/assets/148d1eed-da47-469b-8552-93e93231fb3b" />
<img width="399" height="74" alt="image" src="https://github.com/user-attachments/assets/3252c4fd-73de-44d6-a6ad-4759c1bf66f9" />

# Задание 1.1.3
Проверить, является ли число двузначным.

Алгоритм:

1) Получить целое число от пользователя.
2) Вычислить абсолютное значение числа.
3) Проверить, находится ли число в диапазоне [10, 99].
4) Вывести результат.

# Реализация:
```cpp
void Lab1::Task3TwoDigits() {
  int number = GetInteger("Введите целое число: ");
  bool is_two_digit = IsTwoDigits(number);
  std::cout << "Число " << number 
            << (is_two_digit ? " является" : " не является") 
            << " двузначным" << std::endl;
}

bool Lab1::IsTwoDigits(int x) {
  int abs_x = (x < 0) ? -x : x;
  return (abs_x >= 10 && abs_x <= 99);
}
```
# Тестирование:
<img width="300" height="61" alt="image" src="https://github.com/user-attachments/assets/6cd3fed0-091e-4adc-9877-da8f09da9a68" />
<img width="298" height="72" alt="image" src="https://github.com/user-attachments/assets/d7aa1515-8417-4d0c-97ff-f8a8500aa3a2" />
<img width="291" height="67" alt="image" src="https://github.com/user-attachments/assets/b637d7f0-072a-400b-bd74-7eb22d90dbc2" />
<img width="313" height="60" alt="image" src="https://github.com/user-attachments/assets/51d16bc9-ccad-44d9-aa74-bfebb8b80ceb" />

# Задание 1.1.4
Проверить, находится ли число в заданном диапазоне.

Алгоритм:
1) Получить границы диапазона a и b.
2) Получить число для проверки.
3) Проверить, находится ли число между a и b (включительно).
4) Вывести результат.

# Реализация:
```cpp
void Lab1::Task4InRange() {
  int a = GetInteger("Введите начало диапазона (a): ");
  int b = GetInteger("Введите конец диапазона (b): ");
  int number = GetInteger("Введите число для проверки: ");
  
  bool in_range = IsInRange(a, b, number);
  int min_val = (a < b) ? a : b;
  int max_val = (a > b) ? a : b;
  
  std::cout << "Число " << number 
            << (in_range ? " находится" : " не находится")
            << " в диапазоне [" << min_val << ", " << max_val << "]" << std::endl;
}

bool Lab1::IsInRange(int a, int b, int num) {
  return (a <= num && num <= b) || (b <= num && num <= a);
}
```
# Тестирование 

<img width="312" height="99" alt="image" src="https://github.com/user-attachments/assets/8ddbd322-430c-41d2-b46e-af5f2109e970" />
<img width="363" height="92" alt="image" src="https://github.com/user-attachments/assets/9382f93e-2fc7-4916-9c4a-b10d398b26aa" />

# Задание 1.1.5
Проверить, равны ли три числа между собой.

Алгоритм:
1) Получить три целых числа.
2) Проверить, равны ли все три числа.
3) Вывести результат.

# Реализация:
```
cpp
void Lab1::Task5ThreeEqual() {
  int a = GetInteger("Введите число a: ");
  int b = GetInteger("Введите число b: ");
  int c = GetInteger("Введите число c: ");
  
  bool all_equal = AreEqual(a, b, c);
  std::cout << "Числа " << a << ", " << b << ", " << c
            << (all_equal ? " равны" : " не равны")
            << " между собой" << std::endl;
}

bool Lab1::AreEqual(int a, int b, int c) {
  return (a == b && b == c);
}
```
# Тестирование:
<img width="263" height="105" alt="image" src="https://github.com/user-attachments/assets/a70631d8-44ed-4ab5-b1fa-914670185489" />
<img width="335" height="106" alt="image" src="https://github.com/user-attachments/assets/34254991-8388-4ae1-8b6a-766614ee1bd9" />
<img width="300" height="100" alt="image" src="https://github.com/user-attachments/assets/4e62d739-549c-4814-baf2-ac0aeda02cb3" />
<img width="294" height="97" alt="image" src="https://github.com/user-attachments/assets/2c1ffbca-fbea-42d2-be9a-df81bc4d6cc9" />


# Задание 1.2.1
Вычислить модуль целого числа.

Алгоритм:
1) Получить целое число.
2) Если число отрицательное, умножить на -1.
3) Вывести результат.

# Реализация:
```
cpp
void Lab1::Task6Absolute() {
  int number = GetInteger("Введите целое число: ");
  int absolute = MyAbs(number);
  std::cout << "|" << number << "| = " << absolute << std::endl;
}

int Lab1::MyAbs(int x) {
  return (x >= 0) ? x : -x;
}
```
# Тестирование:

<img width="230" height="62" alt="image" src="https://github.com/user-attachments/assets/f0ca6602-540d-4218-a13a-34545a228275" />
<img width="204" height="63" alt="image" src="https://github.com/user-attachments/assets/abf4c432-5624-42bc-a461-50caf3986fbf" />

# Задание 1.2.2
Проверить, делится ли число на 3 или 5, но не на 15.

Алгоритм:

1) Получить целое число.
2) Проверить делимость на 3 или 5.
3) Проверить, что число не делится на оба из них
4) Вывести результат.

# Реализация:
```cpp
void Lab1::Task7DivisibleBy3Or5() {
  int number = GetInteger("Введите целое число: ");
  bool result = IsDivisibleBy3Or5ButNot15(number);
  std::cout << "Число " << number
            << (result ? " делится" : " не делится")
            << " на 3 или 5, но не на 15" << std::endl;
}

bool Lab1::IsDivisibleBy3Or5ButNot15(int x) {
  return ((x % 3 == 0 || x % 5 == 0) && x % 15 != 0);
}
```
# Тестирование:

<img width="419" height="68" alt="image" src="https://github.com/user-attachments/assets/33f1ae1c-1251-4184-a8fa-4d0673f983ff" />
<img width="425" height="68" alt="image" src="https://github.com/user-attachments/assets/ade024c9-58bf-4e7f-8eb6-e21552b071d4" />
<img width="416" height="72" alt="image" src="https://github.com/user-attachments/assets/07359a20-9fc6-4e6d-b5b2-0a1f21609d28" />

# Задание 1.2.3
Найти максимальное из трех чисел.

Алгоритм:
1) Получить три целых числа.
2) Сравнить числа, найти наибольшее.
3) Вывести результат.

#Реализация:

```cpp
void Lab1::Task8MaximumOfThree() {
  int x = GetInteger("Введите число x: ");
  int y = GetInteger("Введите число y: ");
  int z = GetInteger("Введите число z: ");
  
  int maximum = MaxOfThree(x, y, z);
  std::cout << "Максимальное из чисел " << x << ", " << y << ", " << z
            << " = " << maximum << std::endl;
}

int Lab1::MaxOfThree(int x, int y, int z) {
  int max_value = x;
  if (y > max_value) max_value = y;
  if (z > max_value) max_value = z;
  return max_value;
}
```
# Тестирование: 
<img width="270" height="101" alt="image" src="https://github.com/user-attachments/assets/52cf2834-fbfc-4162-ab4c-e557014b4b50" />
<img width="270" height="94" alt="image" src="https://github.com/user-attachments/assets/8193b533-bf97-4329-bc03-d068e5c79d88" />

# Задание 1.2.4
Вычислить сумму с особым условием.

Алгоритм:

1) Получить два целых числа.
2) Вычислить сумму.
3) Если сумма от 10 до 19 включительно, вернуть 20.
4) Иначе вернуть обычную сумму.
5) Вывести результат.

# Реализация:

```cpp
void Lab1::Task9SpecialSum() {
  int x = GetInteger("Введите число x: ");
  int y = GetInteger("Введите число y: ");
  
  int result = SpecialSum(x, y);
  std::cout << "Сумма " << x << " + " << y << " = " << result << std::endl;
}

int Lab1::SpecialSum(int x, int y) {
  int sum = x + y;
  return (sum >= 10 && sum <= 19) ? 20 : sum;
}
```
# Тестирование:

<img width="298" height="85" alt="image" src="https://github.com/user-attachments/assets/57bbd609-8f42-4d3c-833e-2892b9567e1d" />
<img width="279" height="84" alt="image" src="https://github.com/user-attachments/assets/875167c7-c42d-4dbc-95ea-0fe67dd904fd" />

# Задание 1.2.5
Преобразовать номер дня недели в название.

Алгоритм:

1) Получить номер дня недели (1-7).
2) Использовать switch-case для преобразования.
3) Вывести название дня недели.

# Реализация:
```
cpp
void Lab1::Task10DayOfWeek() {
  int day_number = GetInteger("Введите номер дня недели (1-7): ");
  std::string day_name = DayOfWeek(day_number);
  std::cout << "День недели: " << day_name << std::endl;
}

std::string Lab1::DayOfWeek(int x) {
  switch (x) {
    case 1: return "понедельник";
    case 2: return "вторник";
    case 3: return "среда";
    case 4: return "четверг";
    case 5: return "пятница";
    case 6: return "суббота";
    case 7: return "воскресенье";
    default: return "неверный номер дня";
  }
}
```
# Тестирование:

<img width="323" height="62" alt="image" src="https://github.com/user-attachments/assets/a71a7f75-b1e5-4392-ad1a-bf97b6f684ec" />

# Задание 1.3.1
Вывести последовательность чисел от 0 до N.

Алгоритм:

1) Получить целое неотрицательное число N.
2) Использовать цикл для генерации чисел от 0 до N.
3) Вывести числа через пробел.

# Реализация:

```cpp
void Lab1::Task11ListNumbers() {
  int n = GetInteger("Введите число N: ");
  
  if (n < 0) {
    std::cout << "Ошибка: N должно быть неотрицательным!" << std::endl;
    return;
  }
  
  std::string sequence = ListNumbers(n);
  std::cout << "Последовательность: " << sequence << std::endl;
}

std::string Lab1::ListNumbers(int x) {
  std::string result;
  for (int i = 0; i <= x; ++i) {
    result += std::to_string(i);
    if (i < x) result += " ";
  }
  return result;
}
```
# Тестирование:

<img width="311" height="59" alt="image" src="https://github.com/user-attachments/assets/9c57ce80-a88a-467c-8a37-018114655cc3" />

# Задание 1.3.2
Вывести четные числа от 0 до N.

Алгоритм:

1) Получить целое неотрицательное число N.
2) Использовать цикл с шагом 2 для генерации четных чисел.
3) Вывести числа через пробел.

# Реализация:

```cpp
void Lab1::Task12EvenNumbers() {
  int n = GetInteger("Введите число N: ");
  
  if (n < 0) {
    std::cout << "Ошибка: N должно быть неотрицательным!" << std::endl;
    return;
  }
  
  std::string evens = EvenNumbers(n);
  std::cout << "Четные числа: " << evens << std::endl;
}

std::string Lab1::EvenNumbers(int x) {
  std::string result;
  bool first = true;
  for (int i = 0; i <= x; i += 2) {
    if (!first) result += " ";
    result += std::to_string(i);
    first = false;
  }
  return result;
}
```
# Тестирование:

<img width="240" height="62" alt="image" src="https://github.com/user-attachments/assets/cda60a7c-a38c-45f5-a4e7-da9f5e119ba2" />

# Задание 1.3.3
Подсчитать количество цифр в числе.

Алгоритм:

1) Получить целое число.
2) Взять абсолютное значение числа.
3) Использовать цикл деления на 10 для подсчета цифр.
4) Вывести результат.

Реализация:

```cpp
void Lab1::Task13DigitCount() {\
  long number = GetInteger("Введите целое число: ");
  int digits = DigitCount(number);
  std::cout << "Количество цифр в числе " << number << ": " << digits << std::endl;
}

int Lab1::DigitCount(long x) {
  if (x == 0) return 1;
  
  long abs_x = (x < 0) ? -x : x;
  int count = 0;
  
  while (abs_x > 0) {
    ++count;
    abs_x /= 10;
  }
  
  return count;
}
```
Тестирование:

<img width="289" height="63" alt="image" src="https://github.com/user-attachments/assets/2139e2c4-35b4-40cc-a66b-e004f84a3ba3" />

# Задание 1.3.4
Нарисовать квадрат из звездочек.

Алгоритм:

1) Получить размер квадрата.
2) Использовать вложенные циклы для рисования.
3) Вывести квадрат.

# Реализация:

```cpp
void Lab1::Task14DrawSquare() {
  int size = GetInteger("Введите размер квадрата: ");
  
  if (size <= 0) {
    std::cout << "Ошибка: размер должен быть положительным!" << std::endl;
    return;
  }
  
  std::cout << "\nКвадрат " << size << "x" << size << ":\n" << std::endl;
  DrawSquare(size);
}

void Lab1::DrawSquare(int x) {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
```
# Тестирование:

<img width="231" height="165" alt="image" src="https://github.com/user-attachments/assets/3dfba1f2-c53e-446a-aae3-0723a178974d" />

# Задание 1.3.5
Нарисовать прямоугольный треугольник из звездочек.

Алгоритм:

1) Получить высоту треугольника.
2) Использовать вложенные циклы для рисования.
3) Первый цикл для строк, второй для пробелов, третий для звездочек.
4) Вывести треугольник.

Реализация:

```cpp
void Lab1::Task15DrawTriangle() {
  int height = GetInteger("Введите высоту треугольника: ");
  
  if (height <= 0) {
    std::cout << "Ошибка: высота должна быть положительной!" << std::endl;
    return;
  }
  
  std::cout << "\nТреугольник высотой " << height << ":\n" << std::endl;
  DrawRightTriangle(height);
}

void Lab1::DrawRightTriangle(int x) {
  for (int i = 1; i <= x; ++i) {
    // Пробелы для выравнивания
    for (int j = 0; j < x - i; ++j) {
      std::cout << " ";
    }
    // Звездочки
    for (int j = 0; j < i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
```
# Тестирование:

<img width="292" height="150" alt="image" src="https://github.com/user-attachments/assets/6cd0838c-b731-4cc6-b8cf-996299d95d2c" />

# Задание 1.4.1
Найти первое вхождение элемента в массиве.

Алгоритм:

1) Создать или получить массив чисел.
2) Получить элемент для поиска.
3) Пройти по массиву, найти первое вхождение.
4) Вывести индекс или сообщение об отсутствии.

Реализация:

```cpp
void Lab1::Task16FindInArray() {  
  std::cout << "Создание массива:" << std::endl;
  std::vector<int> array = CreateArrayFromInput();
  
  if (array.empty()) {
    std::cout << "Массив пуст!" << std::endl;
    return;
  }
  
  int search_value = GetInteger("Введите элемент для поиска: ");
  int position = FindFirstElement(array, search_value);
  
  if (position != -1) {
    std::cout << "Элемент " << search_value << " найден на позиции " << position << std::endl;
  } else {
    std::cout << "Элемент " << search_value << " не найден в массиве" << std::endl;
  }
}

int Lab1::FindFirstElement(const std::vector<int>& arr, int x) {
  for (size_t i = 0; i < arr.size(); ++i) {
    if (arr[i] == x) {
      return static_cast<int>(i);
    }
  }
  return -1;
}
```
# Тестирование:


<img width="330" height="159" alt="image" src="https://github.com/user-attachments/assets/f59fb937-3f6e-4556-a295-304b17f7f68e" />

<img width="336" height="158" alt="image" src="https://github.com/user-attachments/assets/2af10f99-718e-4e76-99c1-7ed974564358" />

# Задание 1.4.2
Найти элемент с максимальным модулем в массиве.

Алгоритм:

1) Создать или получить массив чисел.
2) Пройти по массиву, сравнивая модули элементов.
3) Запомнить элемент с наибольшим модулем.
4) Вывести результат.

# Реализация:

```cpp
void Lab1::Task17MaxAbsoluteInArray() {
  std::cout << "Создание массива:" << std::endl;
  std::vector<int> array = CreateArrayFromInput();
  
  if (array.empty()) {
    std::cout << "Массив пуст!" << std::endl;
    return;
  }
  
  int max_abs_value = MaxAbsoluteValue(array);
  std::cout << "Элемент с максимальным модулем: " << max_abs_value << std::endl;
  std::cout << "Модуль: " << MyAbs(max_abs_value) << std::endl;
}

int Lab1::MaxAbsoluteValue(const std::vector<int>& arr) {
  if (arr.empty()) return 0;
  
  int max_abs_elem = arr[0];
  int max_abs = MyAbs(arr[0]);
  
  for (size_t i = 1; i < arr.size(); ++i) {
    int current_abs = MyAbs(arr[i]);
    if (current_abs > max_abs) {
      max_abs = current_abs;
      max_abs_elem = arr[i];
    }
  }
  
  return max_abs_elem;
}
```

# Тестирование:
<img width="331" height="159" alt="image" src="https://github.com/user-attachments/assets/4b63fe9d-88f1-4bf0-ab8d-9c2474022d12" />





