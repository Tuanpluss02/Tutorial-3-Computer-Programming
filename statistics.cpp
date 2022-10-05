#include "statistics.h"

standardDeviation::standardDeviation()
{
    numbersCount = 0;
    data.clear();
}

void standardDeviation::setNumbersCount(size_t count)
{
    numbersCount = count;
}

void standardDeviation::setData(vector<double> dataSet)
{
    data = dataSet;
}

vector<double> standardDeviation::getData()
{
    return data;
}

size_t standardDeviation::getNumbersCount()
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
double standardDeviation::mean(vector<double> dataSet)
{
    double sum = 0;
    for (size_t i = 0; i < numbersCount; i++)
    {
        sum += dataSet[i];
    }
    return sum / numbersCount;
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
double standardDeviation::variance(vector<double> dataSet)
{
    double meanData = mean(dataSet);
    double sum = 0;
    for (size_t i = 0; i < numbersCount; i++)
    {
        sum += (dataSet[i] - meanData) * (dataSet[i] - meanData);
    }
    return sum / numbersCount;
}

standardDeviation::~standardDeviation()
{
    numbersCount = 0;
    data.clear();
}
