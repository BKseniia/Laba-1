#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale.h> 


int sumLastNums(int x) {
    int lastDigit = x % 10;
    int secondLastDigit = (x / 10) % 10;

    return lastDigit + secondLastDigit;
}

bool isPositive(int x) {
    return x > 0;
}

bool isUpperCase(char x) {
    return x >= 'A' && x <= 'Z';
}

bool isDivisor(int a, int b) {
    if (a != 0 && b % a == 0) {
        return true;
    }

    if (b != 0 && a % b == 0) {
        return true;
    }

    return false;
}

int lastNumSum(int a, int b) {
    return a % 10 + b % 10;
}

double safeDiv(int x, int y) {
    if (y == 0) {
        return 0;
    }

    return static_cast<double>(x) / y;
}

std::string makeDecision(int x, int y) {
    if (x < y) {
        return std::to_string(x) + " < " + std::to_string(y);
    }

    if (x > y) {
        return std::to_string(x) + " > " + std::to_string(y);
    }

    return std::to_string(x) + " == " + std::to_string(y);
}

bool sum3(int x, int y, int z) {
    return x + y == z || x + z == y || y + z == x;
}

std::string age(int x) {
    if (x % 10 == 1 && x % 100 != 11) {
        return std::to_string(x) + " год";
    }

    if (x % 10 >= 2 && x % 10 <= 4 &&
        (x % 100 < 12 || x % 100 > 14)) {
        return std::to_string(x) + " года";
    }

    return std::to_string(x) + " лет";
}

void printDays(int x) {
    switch (x) {
    case 1:
        std::cout << "понедельник\n";
    case 2:
        std::cout << "вторник\n";
    case 3:
        std::cout << "среда\n";
    case 4:
        std::cout << "четверг\n";
    case 5:
        std::cout << "пятница\n";
    case 6:
        std::cout << "суббота\n";
    case 7:
        std::cout << "воскресенье\n";
        break;
    default:
        std::cout << "Это не день недели.\n";
    }
}

std::string reverseListNums(int x) {
    std::string result;

    for (int i = x; i >= 0; --i) {
        result += std::to_string(i);

        if (i > 0) {
            result += " ";
        }
    }

    return result;
}

int pow(int x, int y) {
    int result = 1;

    for (int i = 0; i < y; ++i) {
        result *= x;
    }

    return result;
}

bool equalNum(int x) {
    int digit = x % 10;
    x /= 10;

    while (x != 0) {
        if (x % 10 != digit) {
            return false;
        }

        x /= 10;
    }

    return true;
}

void leftTriangle(int x) {
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << '*';
        }

        std::cout << '\n';
    }
}

void guessGame() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int number = std::rand() % 10;
    int guess;
    int attempts = 0;

    std::cout << "Введите число от 0 до 9:\n";

    do {
        while (!(std::cin >> guess) || guess < 0 || guess > 9) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите число от 0 до 9:\n";
        }

        ++attempts;

        if (guess != number) {
            std::cout << "Неверно. Попробуйте еще раз:\n";
        }
    } while (guess != number);

    std::cout << "Вы угадали!\n";
    std::cout << "Попытки: " << attempts << '\n';
}

int findLast(int arr[], int x) {
    int lastIndex = -1;

    for (int i = 0; i < 7; ++i) {
        if (arr[i] == x) {
            lastIndex = i;
        }
    }

    return lastIndex;
}

int* add(int arr[], int x, int pos) {
    int* result = new int[6];

    for (int i = 0; i < pos; ++i) {
        result[i] = arr[i];
    }

    result[pos] = x;

    for (int i = pos; i < 5; ++i) {
        result[i + 1] = arr[i];
    }

    return result;
}

int findLast(int arr[], int size, int x) {
    for (int i = size - 1; i >= 0; --i) {
        if (arr[i] == x) {
            return i;
        }
    }

    return -1;
}
int* add(int arr[], int size, int x, int pos) {
    int* newArr = new int[size + 1];

    for (int i = 0; i < pos; ++i) {
        newArr[i] = arr[i];
    }

    newArr[pos] = x;

    for (int i = pos; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }

    return newArr;
}
void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int* concat(int arr1[], int size1, int arr2[], int size2) {
    int* newArr = new int[size1 + size2];

    for (int i = 0; i < size1; ++i) {
        newArr[i] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        newArr[size1 + i] = arr2[i];
    }

    return newArr;
}
int* deleteNegative(int arr[], int size, int& newSize) {
    newSize = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            ++newSize;
        }
    }

    int* newArr = new int[newSize];
    int j = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            newArr[j] = arr[i];
            ++j;
        }
    }

    return newArr;
}

int main() {
    std::setlocale(LC_ALL, "RUS");
    int task;

    std::cout << "Выберите задачу:\n";
    std::cout << "1(1.2) - Сумма двух последних цифр числа\n";
    std::cout << "2(1.4) - Проверка числа на положительность\n";
    std::cout << "3(1.6) - Проверка буквы на верхний регистр\n";
    std::cout << "4(1.8) - Проверка чисел на делимость\n";
    std::cout << "5(1.10) - Многократный вызов функции\n";
    std::cout << "6(2.2) - Безопасное деление\n";
    std::cout << "7(2.4) - Сравнение двух чисел\n";
    std::cout << "8(2.6) - Проверка суммы трёх чисел\n";
    std::cout << "9(2.8) - Возраст с правильным окончанием\n";
    std::cout << "10(2.10) - Дни недели\n";
    std::cout << "11(3.2) - Обратная последовательность чисел\n";
    std::cout << "12(3.4) - Возведение числа в степень\n";
    std::cout << "13(3.6) - Проверка одинаковых цифр числа\n";
    std::cout << "14(3.8) - Левый треугольник\n";
    std::cout << "15(3.10) - Игра \"Угадайка\"\n";
    std::cout << "16(4.2) - Поиск последнего вхождения числа в массив\n";
    std::cout << "17(4.4) - Добавление элемента в массив\n";
    std::cout << "18(4.6) - Реверс массива\n";
    std::cout << "19(4.8) - Объединение массивов\n";
    std::cout << "20(4.10) - Удаление отрицательных элементов\n";
    std::cout << "Введите номер задачи: ";

    std::cin >> task;

    if (task == 1) {
        int x;

        std::cout << "Введите число с не менее чем двумя цифрами: ";

        while (!(std::cin >> x) || (x > -10 && x < 10)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите число с не менее чем двумя цифрами: ";
        }

        std::cout << "Результат: " << sumLastNums(x) << '\n';
    }
    else if (task == 2) {
        int x;

        std::cout << "Введите число: ";
        std::cin >> x;

        while (!(std::cin >> x)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите число: ";
        }

        std::cout << "Результат: "
            << (isPositive(x) ? "true" : "false") << '\n';
    }
    else if (task == 3) {
        char x;

        std::cout << "Введите английскую букву: ";
        
        while (true) {
            std::cin >> x;

            if (std::cin && ((x >= 'A' && x <= 'Z') ||
                (x >= 'a' && x <= 'z'))) {
                break;
            }

            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите одну английскую букву: ";
        }

        std::cout << "Результат: "
            << (isUpperCase(x) ? "true" : "false") << '\n';
    }
    else if (task == 4) {
        int a;
        int b;

        std::cout << "Введите два числа: ";

        while (!(std::cin >> a >> b)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите два числа: ";
        }

        std::cout << "Результат: "
            << (isDivisor(a, b) ? "true" : "false") << '\n';
    }
	else if (task == 5) {
        int result;
        int number;

        std::cout << "Введите первое число: ";
        while (!(std::cin >> result)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите число: ";
        }

        for (int i = 0; i < 4; ++i) {
            std::cout << "Введите следующее число: ";

            while (!(std::cin >> number)) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Неверный ввод. Введите число: ";
            }

            result = lastNumSum(result, number);
        }

        std::cout << "Результат: " << result << '\n';
    
    }
	else if (task == 6) {
		int x;
		int y;
        std::cout << "Введите два числа: ";

        while (!(std::cin >> x >> y)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите два числа: ";
        }

        std::cout << "Результат: " << safeDiv(x, y) << '\n';
	}
    else if (task == 7) {
		int x;
		int y;

		std::cout << "Введите два числа: ";

        while (!(std::cin >> x >> y)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите два числа: ";
        }

        std::cout << "Результат: " << makeDecision(x, y) << '\n';
	}
	else if (task == 8) {
		int x;
		int y;
		int z;

		std::cout << "Введите три числа: ";

        while (!(std::cin >> x >> y >> z)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите три числа: ";
        }

        std::cout << "Результат: "
            << (sum3(x, y, z) ? "true" : "false") << '\n';
	}
	else if (task == 9) {
		int x;

		std::cout << "Введите возраст: ";

        while (!(std::cin >> x) || x < 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите настоящий возраст: ";
        }

        std::cout << "Результат: " << age(x) << '\n';
	}
    else if (task == 10) {
		int x;

		std::cout << "Введите день недели (1-7): ";

        while (!(std::cin >> x) || x < 1 || x > 7) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите число от 1 до 7: ";
        }

		printDays(x);
	}
	else if (task == 11) {
		int x;

		std::cout << "Введите число: ";
        while (!(std::cin >> x) || x < 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите нормальное число: ";
        }

        std::cout << "Результат: " << reverseListNums(x) << '\n';
	}
	else if (task == 12) {
		int x;
		int y;
        std::cout << "Введите число: ";
        while (!(std::cin >> x)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите целое число: ";
        }

        std::cout << "Введите степень: ";

        while (!(std::cin >> y) || y < 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите нормальное целое число: ";
        }

        std::cout << "Результат: " << pow(x, y) << '\n';
	}
	else if (task == 13) {
		int x;

		std::cout << "Введите число: ";
        while (!(std::cin >> x) || x < 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите нормальное число: ";
		}

		std::cout << "Результат: "
			<< (equalNum(x) ? "true" : "false") << '\n';
	}

	else if (task == 14) {
		int x;

		std::cout << "Введите высоту: ";
        while (!(std::cin >> x) || x <= 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Неверный ввод. Введите положительное целое число: ";
		}

		leftTriangle(x);
	}
	else if (task == 15) {
		guessGame();
	}
    else if (task == 16) {
        int size;

        std::cout << "Введите размер массива: ";

        while (!(std::cin >> size) || size <= 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Ошибка. Введите положительное целое число: ";
        }

        int* arr = new int[size];

        std::cout << "Введите элементы массива:\n";

        for (int i = 0; i < size; ++i) {
            while (!(std::cin >> arr[i])) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Ошибка. Введите целое число: ";
            }
        }

        int x;

        std::cout << "Введите число для поиска: ";

        while (!(std::cin >> x)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Ошибка. Введите целое число: ";
        }

        std::cout << "Результат: " << findLast(arr, size, x) << '\n';

        delete[] arr;
     }

    else if (task == 17) {
         int size;

         std::cout << "Введите размер массива: ";

         while (!(std::cin >> size) || size <= 0) {
             std::cin.clear();
             std::cin.ignore(1000, '\n');
             std::cout << "Ошибка. Введите положительное целое число: ";
         }

         int* arr = new int[size];

         std::cout << "Введите элементы массива:\n";

         for (int i = 0; i < size; ++i) {
             while (!(std::cin >> arr[i])) {
                 std::cin.clear();
                 std::cin.ignore(1000, '\n');
                 std::cout << "Ошибка. Введите целое число: ";
             }
         }

         int x;
         std::cout << "Введите число для добавления: ";

         while (!(std::cin >> x)) {
             std::cin.clear();
             std::cin.ignore(1000, '\n');
             std::cout << "Ошибка. Введите целое число: ";
         }

         int pos;
         std::cout << "Введите позицию от 0 до " << size << ": ";

         while (!(std::cin >> pos) || pos < 0 || pos > size) {
             std::cin.clear();
             std::cin.ignore(1000, '\n');
             std::cout << "Ошибка. Введите позицию от 0 до "
                 << size << ": ";
         }

         int* newArr = add(arr, size, x, pos);

         std::cout << "Результат: [";

         for (int i = 0; i < size + 1; ++i) {
             std::cout << newArr[i];

             if (i < size) {
                 std::cout << ", ";
             }
         }

         std::cout << "]\n";

         delete[] arr;
         delete[] newArr;
     }
    else if (task == 18) {
         int size;

         std::cout << "Введите размер массива: ";

         while (!(std::cin >> size) || size <= 0) {
             std::cin.clear();
             std::cin.ignore(1000, '\n');
             std::cout << "Ошибка. Введите положительное целое число: ";
         }

         int* arr = new int[size];

         std::cout << "Введите элементы массива:\n";

         for (int i = 0; i < size; ++i) {
             while (!(std::cin >> arr[i])) {
                 std::cin.clear();
                 std::cin.ignore(1000, '\n');
                 std::cout << "Ошибка. Введите целые числа: ";
             }
         }

         reverse(arr, size);

         std::cout << "Результат: [";

         for (int i = 0; i < size; ++i) {
             std::cout << arr[i];

             if (i < size - 1) {
                 std::cout << ", ";
             }
         }

         std::cout << "]\n";

         delete[] arr;
     }
    else if (task == 19) {
         int size1;

         std::cout << "Введите размер первого массива: ";

         while (!(std::cin >> size1) || size1 <= 0) {
             std::cin.clear();
             std::cin.ignore(1000, '\n');
             std::cout << "Ошибка. Введите положительное целое число: ";
         }

         int* arr1 = new int[size1];

         std::cout << "Введите элементы первого массива:\n";

         for (int i = 0; i < size1; ++i) {
             while (!(std::cin >> arr1[i])) {
                 std::cin.clear();
                 std::cin.ignore(1000, '\n');
                 std::cout << "Ошибка. Введите целые числа: ";
             }
         }

         int size2;

         std::cout << "Введите размер второго массива: ";

         while (!(std::cin >> size2) || size2 <= 0) {
             std::cin.clear();
             std::cin.ignore(1000, '\n');
             std::cout << "Ошибка. Введите положительное целое число: ";
         }

         int* arr2 = new int[size2];

         std::cout << "Введите элементы второго массива:\n";

         for (int i = 0; i < size2; ++i) {
             while (!(std::cin >> arr2[i])) {
                 std::cin.clear();
                 std::cin.ignore(1000, '\n');
                 std::cout << "Ошибка. Введите целые числа: ";
             }
         }

         int* newArr = concat(arr1, size1, arr2, size2);

         std::cout << "Результат: [";

         for (int i = 0; i < size1 + size2; ++i) {
             std::cout << newArr[i];

             if (i < size1 + size2 - 1) {
                 std::cout << ", ";
             }
         }

         std::cout << "]\n";

         delete[] arr1;
         delete[] arr2;
         delete[] newArr;
     }
    else if (task == 20) {
        int size;

        std::cout << "Введите размер массива: ";

        while (!(std::cin >> size) || size <= 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Ошибка. Введите положительное целое число: ";
        }

        int* arr = new int[size];

        std::cout << "Введите элементы массива:\n";

        for (int i = 0; i < size; ++i) {
            while (!(std::cin >> arr[i])) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Ошибка. Введите целые числа: ";
            }
        }

        int newSize;
        int* newArr = deleteNegative(arr, size, newSize);

        std::cout << "Результат: [";

        for (int i = 0; i < newSize; ++i) {
            std::cout << newArr[i];

            if (i < newSize - 1) {
                std::cout << ", ";
            }
        }

        std::cout << "]\n";

        delete[] arr;
        delete[] newArr;
     }
    else {
        std::cout << "Неверный номер задачи.\n";
    }

    return 0;
}