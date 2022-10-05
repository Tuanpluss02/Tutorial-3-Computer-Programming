#include "statistics.h"
#include <cstring> // for memset

standardDeviation::standardDeviation()
{
    numbersCount = 0;
    memset(&data, 0, sizeof(data));
}

standardDeviation::~standardDeviation()
{
    numbersCount = 0;
    memset(&data, 0, sizeof(data));
}

void standardDeviation::setNumbersCount(std::size_t count)
{
    numbersCount = count;
}

void standardDeviation::setData(std::vector<double> dataSet)
{
    data = dataSet;
}

std::vector<double> standardDeviation::getData()
{
    return data;
}

std::size_t standardDeviation::getNumbersCount()
{
    return numbersCount;
}

double standardDeviation::mean(double number)
{
    return number;
}

double standardDeviation::mean(double number1, double number2)
{
    return (number1 + number2) / 2;
}

double standardDeviation::mean(double number1, double number2, double number3)
{
    return (number1 + number2 + number3) / 3;
}

double standardDeviation::mean(double number1, double number2, double number3, double number4)
{
    return (number1 + number2 + number3 + number4) / 4;
}

double standardDeviation::variance(double number)
{
    return 0;
}

double standardDeviation::variance(double number1, double number2)
{
    return (number1 - number2) * (number1 - number2);
}

double standardDeviation::variance(double number1, double number2, double number3)
{
    return (number1 - number2) * (number1 - number2) + (number1 - number3) * (number1 - number3) + (number2 - number3) * (number2 - number3);
}

double standardDeviation::variance(double number1, double number2, double number3, double number4)
{
    return (number1 - number2) * (number1 - number2) + (number1 - number3) * (number1 - number3) + (number1 - number4) * (number1 - number4) + (number2 - number3) * (number2 - number3) + (number2 - number4) * (number2 - number4) + (number3 - number4) * (number3 - number4);
}
