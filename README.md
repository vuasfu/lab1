# lab1
# ФИО: Булгакова Юлия Олеговна

Выполнить все задания в одном проекте в виде функций. В главной функции `main` организовать вызов всех функций с дружественным интерфейсом. Для всех вводов организовать проверку на корректность данных.

# Постановка задач

Задание 1.1

Дробная часть: выделяет 0.xx из числа x

Алгоритм:

1. Получить вещественное число x.
2. Преобразовать x в целое число (отбросив дробную часть) через static_cast<long>.
3. Вычесть полученное целое из исходного числа x.
4. Вернуть результат. Реализация:

# Реализация: 

```cpp
double Fraction(double x) {
  return x - static_cast<long>(x);
}
```

# Тестирование
<img width="184" height="59" alt="image" src="https://github.com/user-attachments/assets/8b7e5bad-c330-49f8-beb5-b10a5bee5e0c" />
<img width="153" height="60" alt="image" src="https://github.com/user-attachments/assets/ae82b155-9fe7-48ba-b8be-1890310f22cd" />




# Задание 1.3
Преобразовать символ цифры в её ASCII код.

Алгоритм:

1. Получить символ x.
2. Проверить, лежит ли код символа в пределах от '0' до '9'.
3. Если да, вычесть из кода x код символа '0'.
4. Если нет, вернуть -1. Реализация:

# Реализация:

```cpp
int CharToNum(char x) {
  if (x >= '0' && x <= '9') return x - '0';
  return -1;
}
```

# Тестирование:
<img width="205" height="58" alt="image" src="https://github.com/user-attachments/assets/389656eb-7c4d-4749-9ce1-f8e603b86a01" />
<img width="187" height="59" alt="image" src="https://github.com/user-attachments/assets/3e4fd2bf-4911-4deb-8c9a-fe20b771d712" />


# Задание 1.5
Проверить, является ли число двузначным.

Алгоритм:

1. Получить число x.
2. Взять модуль числа для учета отрицательных значений.
3. Проверить, находится ли результат в интервале $[10, 99]$.

# Реализация:
```cpp
bool IsTwoDigits(int x) {
  int abs_x = std::abs(x);
  return (abs_x >= 10 && abs_x <= 99);
}
```
# Тестирование:
<img width="159" height="54" alt="image" src="https://github.com/user-attachments/assets/c2622b8c-b320-4235-a85b-2e005818fd3b" />
<img width="171" height="61" alt="image" src="https://github.com/user-attachments/assets/b8aab656-f236-4617-8a2a-1d9fe894aaba" />
<img width="168" height="52" alt="image" src="https://github.com/user-attachments/assets/d56e8584-7a4d-454d-a958-3e7b57bd84e9" />
<img width="157" height="57" alt="image" src="https://github.com/user-attachments/assets/9e67768b-417e-4dc0-b6f4-30ce6d78b4f6" />




# Задание 1.7
Проверить, находится ли число в заданном диапазоне.

Алгоритм:

1. Получить границы a, b и число num.
2. Найти минимальное и максимальное из a и b.
3. Проверить, входит ли num в этот интервал. Реализация:

# Реализация:
```cpp
bool IsInRange(int a, int b, int num) {
  return (num >= std::min(a, b) && num <= std::max(a, b));
}
```
# Тестирование 

<img width="190" height="93" alt="image" src="https://github.com/user-attachments/assets/12158434-767a-457b-892e-9fb6948e383b" />
<img width="218" height="87" alt="image" src="https://github.com/user-attachments/assets/8a702a57-d19e-4004-a898-6b4734db89d7" />


# Задание 1.9
Проверить, равны ли три числа между собой.

Алгоритм:
1) Получить три целых числа.
2) Сравнить первое со вторым и второе с третьим.
3) Вернуть true, если оба сравнения истинны.

# Реализация:

```cpp
bool AreEqual(int a, int b, int c) {
  return (a == b && b == c);
}
```
# Тестирование:

<img width="135" height="88" alt="image" src="https://github.com/user-attachments/assets/7a516e31-9067-45e5-8164-548033b1f241" />
<img width="177" height="95" alt="image" src="https://github.com/user-attachments/assets/820ea403-2ebc-4bb5-b2c9-f42d48a87d1f" />


# Задание 2.1
Вычислить модуль целого числа.

Алгоритм:
1) Получить целое число.
2) Если число отрицательное, умножить на -1.
3) Вывести результат.

# Реализация:
```cpp
int MyAbs(int x) {
  return (x < 0) ? -x : x;
}
```
# Тестирование:

<img width="173" height="57" alt="image" src="https://github.com/user-attachments/assets/45718d3d-c8f9-4c22-b506-4a9daf09c8b2" />
<img width="147" height="54" alt="image" src="https://github.com/user-attachments/assets/4c8d0106-e5af-4f83-bbd5-ddb9de20a59b" />


# Задание 2.3
Проверить, делится ли число на 3 или 5, но не на оба сразу. 

Алгоритм:

1) Получить целое число.
2) Проверить делимость на 3 или 5.
3) Проверить, что число не делится на оба из них
4) Вернуть true, если истинно только одно из условий.

# Реализация:
```cpp
bool Is35(int x) {
  bool d3 = (x % 3 == 0);
  bool d5 = (x % 5 == 0);
  return (d3 || d5) && !(d3 && d5);
}
```
# Тестирование:
<img width="158" height="63" alt="image" src="https://github.com/user-attachments/assets/90184e21-1e93-44f8-aa12-1f855711e6c3" />
<img width="166" height="53" alt="image" src="https://github.com/user-attachments/assets/dca2ec20-ba74-464b-a4fc-b7527b5441d1" />
<img width="163" height="56" alt="image" src="https://github.com/user-attachments/assets/e74b3a9b-8595-47dd-985d-f3f061276963" />



# Задание 2.5
Найти максимальное из трех чисел.

Алгоритм:
1) Получить три целых числа.
2) Сравнить числа, найти наибольшее.
3) Вернуть наибольшее значение.

#Реализация:

```cpp
int MaxOfThree(int x, int y, int z) {
  return std::max({x, y, z});
}
```
# Тестирование: 
<img width="148" height="97" alt="image" src="https://github.com/user-attachments/assets/f7b4ae86-2adc-4783-b6c9-91014d96956e" />
<img width="138" height="89" alt="image" src="https://github.com/user-attachments/assets/c11d641e-9b80-4d28-90ab-e9339df49e71" />
<img width="155" height="90" alt="image" src="https://github.com/user-attachments/assets/e1c5761c-7358-4edb-ae58-37c11646e451" />





# Задание 2.7
Вычислить сумму с особым условием.

Алгоритм:

1) Получить два целых числа.
2) Вычислить сумму.
3) Если сумма от 10 до 19 включительно, вернуть 20.
4) Иначе вернуть обычную сумму.
5) Вывести результат.

# Реализация:

```cpp
int SpecialSum(int x, int y) {
  int sum = x + y;
  return (sum >= 10 && sum <= 19) ? 20 : sum;
}
```
# Тестирование:

<img width="138" height="75" alt="image" src="https://github.com/user-attachments/assets/2969822c-aba8-476e-985b-3de50d8c43f3" />
<img width="140" height="69" alt="image" src="https://github.com/user-attachments/assets/14253ed0-ef01-422f-ba29-294ef9d56b4e" />


# Задание 2.9
Преобразовать номер дня недели в название.

Алгоритм:

1) Получить номер дня недели (1-7).
2) Использовать switch-case для преобразования.
3) Вывести название дня недели.

# Реализация:
```cpp
std::string DayOfWeek(int x) {
  switch (x) {
    case 1: return "Понедельник";
    /* ... остальные дни ... */
    default: return "Ошибка";
  }
}
```
# Тестирование:

<img width="156" height="58" alt="image" src="https://github.com/user-attachments/assets/717332be-09c5-49c4-8c7d-5e6fc90d73a3" />
<img width="140" height="55" alt="image" src="https://github.com/user-attachments/assets/d90b79e7-8aec-4d8b-ba48-927fb55f4b2b" />


# Задание 3.1
Вывести последовательность чисел от 0 до N.

Алгоритм:

1. Запустить цикл от 0 до x.
2. Конкатенировать числа в строку

# Реализация:

```cpp
std::string ListNumbers(int x) {
  std::string res = "";
  for (int i = 0; i <= x; ++i) res += std::to_string(i) + " ";
  return res;
}
```
# Тестирование:

<img width="184" height="59" alt="image" src="https://github.com/user-attachments/assets/fed1d834-4ee4-47b2-ac10-3d324fd45891" />
<img width="145" height="58" alt="image" src="https://github.com/user-attachments/assets/a18601b3-85e5-43ab-9d01-b411c6600388" />


# Задание 3.3
Вывести четные числа от 0 до N.

Алгоритм:

1) Цикл от 0 до x с шагом 2.

# Реализация:

```cpp
std::string EvenNumbers(int x) {
  std::string res = "";
  for (int i = 0; i <= x; i += 2) res += std::to_string(i) + " ";
  return res;
}
```
# Тестирование:

<img width="151" height="56" alt="image" src="https://github.com/user-attachments/assets/66a20b5c-fb75-4d5e-bbb2-c97d65e8526b" />
<img width="143" height="52" alt="image" src="https://github.com/user-attachments/assets/0601b0e5-b60d-40de-bd84-b7dca8292e1c" />


# Задание 3.5
Подсчитать количество цифр в числе.

Алгоритм:

1) Пока число не равно 0, делить его на 10 и инкрементировать счетчик.

Реализация:

```cpp
int DigitCount(long x) {
  if (x == 0) return 1;
  int count = 0; long temp = std::abs(x);
  while (temp > 0) { temp /= 10; count++; }
  return count;
}
```
Тестирование:

<img width="160" height="58" alt="image" src="https://github.com/user-attachments/assets/aff144dd-2749-462b-ae39-ab072bd71bbd" />
<img width="165" height="56" alt="image" src="https://github.com/user-attachments/assets/47111337-92d7-4067-8a1e-4c2e482cb0ca" />


# Задание 3.7
Нарисовать квадрат из звездочек.

Алгоритм:

1. Получить размер квадрата.
2. Использовать вложенные циклы для рисования.
3. Вывести квадрат.

# Реализация:

```cpp
void DrawSquare(int x) {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) std::cout << "*";
    std::cout << "\n";
  }
}
```
# Тестирование:
<img width="148" height="114" alt="image" src="https://github.com/user-attachments/assets/241a97c9-0492-41fe-8e67-b8150d48037e" />
<img width="155" height="105" alt="image" src="https://github.com/user-attachments/assets/a9740982-03a1-4464-b19a-ecc9c5316951" />


# Задание 3.9
Нарисовать прямоугольный треугольник из звездочек.

Алгоритм:

1. Получить высоту треугольника.
2. Внешний цикл i от 1 до x.
3. Внутренний цикл: печатать x-i пробелов и i звезд
4. Вывести треугольник.

Реализация:

```cpp
void DrawRightTriangle(int x) {
  for (int i = 1; i <= x; ++i) {
    for (int j = 0; j < x-i; ++j) std::cout << " ";
    for (int k = 0; k < i; ++k) std::cout << "*";
    std::cout << "\n";
  }
}
```
# Тестирование:

<img width="142" height="103" alt="image" src="https://github.com/user-attachments/assets/7599b43e-4bb3-4df4-a05e-c32e81670d25" />
<img width="112" height="122" alt="image" src="https://github.com/user-attachments/assets/6f759973-7dc8-4b2f-869a-c474cf156b56" />


# Задание 4.1
Найти первое вхождение элемента в массиве.

Алгоритм:

1) Создать или получить массив чисел.
3) Пройти по массиву, найти первое вхождение.
4) Вывести индекс или сообщение об отсутствии.

Реализация:

```cpp
int FindFirstElement(const int arr[], int size, int x) {
  for (int i = 0; i < size; ++i) if (arr[i] == x) return i;
  return -1;
}
```
# Тестирование:

<img width="188" height="157" alt="image" src="https://github.com/user-attachments/assets/1c689411-5e41-4545-9530-54be4a008914" />
<img width="173" height="126" alt="image" src="https://github.com/user-attachments/assets/fc8abe00-7670-4c68-83a1-b0aae8dcd5a9" />




# Задание 4.3
Найти элемент с максимальным модулем в массиве.

Алгоритм:

1. Создать или получить массив чисел.
2. Пройти по массиву, сравнивая модули элементов.
3. Запомнить элемент с наибольшим модулем.
4. Вывести результат.

# Реализация:

```cpp
int MaxAbs(const int arr[], int size) {
  int max_v = arr[0];
  for (int i = 1; i < size; ++i)
    if (std::abs(arr[i]) > std::abs(max_v)) max_v = arr[i];
  return max_v;
}
```

# Тестирование:
<img width="177" height="139" alt="image" src="https://github.com/user-attachments/assets/9ed153a0-4988-416e-a9ad-14113ce75d55" />
<img width="183" height="109" alt="image" src="https://github.com/user-attachments/assets/f26d006d-d24a-4399-9c8f-c48074ebfa83" />


# Задание 4.5
Вставка: вставляет один массив в другой по индексу

Алгоритм:
1. Выделить новую память.
2. Копировать часть 1, затем вставку, затем остаток части 1. Реализация:

# Реализация
```cpp
int* InsertArray(const int arr[], int size, const int ins[], int ins_size, int pos) {
  int* res = new int[size + ins_size];
  for (int i = 0; i < pos; ++i) res[i] = arr[i];
  for (int i = 0; i < ins_size; ++i) res[pos + i] = ins[i];
  for (int i = pos; i < size; ++i) res[i + ins_size] = arr[i];
  return res;
}
```

# Тестирование

<img width="324" height="223" alt="image" src="https://github.com/user-attachments/assets/5e2fb3f7-dc00-4e9a-a1fc-1fc82d361735" />
<img width="328" height="222" alt="image" src="https://github.com/user-attachments/assets/0ecb858a-fce8-4ebe-afa7-9ae8b12dd235" />



# Задание 4.7
Реверс: создает новый массив-копию, перевернутый задом наперед

Алгоритм:
1. Создать новый массив.
2.Заполнить его элементами оригинала с конца.

# Реализация 
```cpp
int* ReverseBack(const int arr[], int size) {
  int* res = new int[size];
  for (int i = 0; i < size; ++i) res[i] = arr[size - 1 - i];
  return res;
}
```


# Тестирование

<img width="184" height="141" alt="image" src="https://github.com/user-attachments/assets/855d0984-e266-4c90-8e0b-ac511a0fb624" />



# Задание 4.9

Все вхождения: ищет все индексы числа в массиве

Алгоритм:
1. Собрать индексы совпадений.
2. Сохранить размер в res[0], затем сами индексы.

# Реализация 
```cpp
int* FindAll(const int arr[], int size, int x) {
  std::vector<int> found;
  for (int i = 0; i < size; ++i) if (arr[i] == x) found.push_back(i);
  int* res = new int[found.size() + 1];
  res[0] = found.size();
  for (size_t i = 0; i < found.size(); ++i) res[i + 1] = found[i];
  return res;
}
```

# Тестирование
<img width="200" height="164" alt="image" src="https://github.com/user-attachments/assets/f2749f0c-4f27-48ae-8bda-a7b2daa6ef11" />
