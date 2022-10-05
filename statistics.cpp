#include "statistics.h"
#include <cstring> // for memset

standardDeviation::standardDeviation()
{
    numbersCount = 0;
    data.clear();
}

standardDeviation::~standardDeviation()
{
    numbersCount = 0;
    data.clear();
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
    double meanData = mean(number1, number2);
    return ((number1 - meanData) * (number1 - meanData) + (number2 - meanData) * (number2 - meanData)) / 2;
}

double standardDeviation::variance(double number1, double number2, double number3)
{
    double meanData = mean(number1, number2, number3);
    return ((number1 - meanData) * (number1 - meanData) + (number2 - meanData) * (number2 - meanData) + (number3 - meanData) * (number3 - meanData)) / 3;
}

double standardDeviation::variance(double number1, double number2, double number3, double number4)
{
    double meanData = mean(number1, number2, number3, number4);
    return ((number1 - meanData) * (number1 - meanData) + (number2 - meanData) * (number2 - meanData) + (number3 - meanData) * (number3 - meanData) + (number4 - meanData) * (number4 - meanData)) / 4;
}
