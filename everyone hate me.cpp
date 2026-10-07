#include <iostream>

int main()
{
    double sum = 0, bonuses = 0;
    std::cout << "Введите сумму покупки и количество бонусов: ";
    std::cin >> sum >> bonuses;

    if (!std::cin)
    {
        std::cout << "Нужно ввести числа\n";
        return 1;
    }
    if (sum < 0)
    {
        std::cout << "Сумма не может быть отрицательной\n";
        return 1;
    }
    if (bonuses < 0)
    {
        std::cout << "Бонусы не могут быть отрицательными\n";
        return 1;
    }

    int percent = 0;
    if (sum >= 10000)
        percent = 15;
    else if (sum >= 5000)
        percent = 10;
    else if (sum >= 1000)
        percent = 5;

    double total = sum - sum * percent / 100;
    if (bonuses > total * 0.3)
        bonuses = total * 0.3;

    std::cout << "Скидка: " << percent << "%\n";
    std::cout << "Использовано бонусов: " << bonuses << '\n';
    std::cout << "К оплате: " << total - bonuses << '\n';
    return 0;
}
