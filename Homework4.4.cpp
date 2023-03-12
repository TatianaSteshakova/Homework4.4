#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n = 0;

    cout << "Введите количество элементов в массиве: " << endl;
    cin >> n;

    int* mas = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите число mas[" << i + 1 << "]: " << endl;
        cin >> mas[i];
    }

    int min = mas[0], max = mas[0], sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
        }
        else if (mas[i] > max)
        {
            max = mas[i];
        }
        sum += mas[i];
    }
    double avg = (double) sum / n;

    cout << "Минимальное число: " << min << endl;
    cout << "Максимальное число: " << max << endl;
    cout << "Среднее значение: " << avg << endl;
}
