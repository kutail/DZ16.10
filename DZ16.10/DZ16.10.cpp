#include <iostream>
#include <Windows.h>
#include <cstdlib>

void Zadaniye1(int arr[], const int size);
void Zadaniye2(int arr[], const int size);
void Zadaniye3(int arr3[], const int size3);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int size = 5;
    int arr[size];

    const int size3 = 12;
    int arr3[size3];

    Zadaniye1(arr, size);
    Zadaniye2(arr, size);
    Zadaniye3(arr3, size3);

    return 0;
}

void Zadaniye1(int arr[], const int size)
{

	int minchislo, maxchislo;

    for (int j = 0; j < size; j++)
    {
        arr[j] = rand() % 5 + 5;    
        std::cout << arr[j] << "\t";
    }

    minchislo = arr[0];
    maxchislo = arr[0];

    for (int j = 0; j < size; j++)
    {
        if (arr[j] < minchislo)
        {
            minchislo = arr[j];
        }
        if (arr[j] > maxchislo)
        {
            maxchislo = arr[j];
        }
    }
    std::cout << std::endl << "Минимальное число = " << minchislo << std::endl << "Максимальное число = " << maxchislo << std::endl;
}

void Zadaniye2(int arr[], const int size)
{
    int ot, ido, sum, znach;
    sum = 0;
    std::cout << "Введите от скольки будет заполняться массив: ";
    std::cin >> ot;
    std::cout << "Введите до скольки будет заполняться массив: ";
    std::cin >> ido;
    ido = ido + 1 - ot;
    std::cout << "Введите значение максимального элемента: ";
    std::cin >> znach;
    for (int j = 0; j < size; j++)
    {
        arr[j] = rand() % ido + ot;
        std::cout << arr[j] << "\t";
        if (arr[j] <= znach)
        {
            sum += arr[j];
        }
    }
    std::cout << std::endl << "Сумма элементов до максимального значения: " << sum << std::endl;
}

void Zadaniye3(int arr3[], const int size3)
{

    for (int j = 0; j < size3; j++)
    {
        std::cout << "Введите прибыль фирмы за " << j + 1 << " месяц: ";
        std::cin >> arr3[j];
    }

    int minchislo, maxchislo;
    int ot, ido;
    int minmes = 0;
    int maxmes = 0;
    minchislo = arr3[0];
    maxchislo = arr3[0];

    std::cout << "\nВведите номер месяця от: ";
    std::cin >> ot;
    std::cout << "\nВведите номер месяця до: ";
    std::cin >> ido;

    for (int i = 0; ot <= ido; i++, ot++)
    {
        if (arr3[i] < minchislo)
        {
            minchislo = arr3[i];
            minmes = i;
        }
        if (arr3[i] > maxchislo)
        {
            maxchislo = arr3[i];
            maxmes = i;
        }
    }
    std::cout << "\nМесяц в котором была минимальная прибыль: " << minmes << "\nМесяц в ктором была максимальная прибыль: " << maxmes + 1;
}