#include <iostream>
#include <algorithm> 
#include <ctime> 


int nomber_max(int a, int b)
{
    if (a < b) {
        std::swap(a, b);
    }

    while (b>0) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

int mirror_number(int num) {
    int m = 0;
    while (num>0)
    {
        m = m * 10 + num % 10;
        num /= 10;
    }
    return m;
}
template <typename T>
void arr_index(T arr[], const int lenght, T N) {
    for (int i = 0; i < lenght; i++) {
        if (arr[i] == N)
          std::sort (arr+i, arr + lenght);
          std::cout << arr[i] << std::endl;
    }
}


void arr_end(int arr[], const int lenght, int a, int b) {
     srand(time(NULL));
     for (int i = 0; i < lenght; i++) {
        arr[i] = rand() % (b - a + 1) + a;
        std::cout << arr[i] << ' ';
    }
}
    int main()
{
    setlocale(LC_ALL, "Russian");
    
    std::cout << "Задание 1 \n";
    int n, m;
    std::cout << "Введите два числа->";
    std::cin >> n >> m;
    std::cout << "Наибольший делитель равен: " <<nomber_max(n, m);
    std::cout << std::endl;

    std::cout << "Задание 2 \n";
    int a;
    std::cout << "Введите число->";
    std::cin >> a;
    std::cout << "Число наоборот равно: " << mirror_number(a);
    std::cout << std::endl;

    std::cout << "Задание 3 \n";
    double N;
    std::cout << "Введите число->";
    std::cin >> N;
    int const length = 5;
    double arr[length]{ 3.2, -5, 7.5, -4, 0.3 };
    arr_index (arr, length,N);
    std::cout << std::endl;
    
    std::cout << "Задание 4 \n";
    int A, B;
    std::cout << "Введите начало диапазона ->";
    std::cin >> A;
    std::cout << "Введите конец диапазона ->";
    std::cin >> B;
    const int size = 10;
    int arrs[size]{};
    arr_end (arrs, size, A, B);
    std::cout << std::endl;

    return 0;
}
