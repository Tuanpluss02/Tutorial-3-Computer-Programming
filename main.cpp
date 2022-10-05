#include <iostream> // for cout
#include "statistics.h"

using namespace std;

int main()
{
    standardDeviation sd;
    size_t count;
    vector<double> dataSet;
    double number;
    cout << "Enter the number of numbers in the data set: ";
    cin >> count;
    sd.setNumbersCount(count);
    cout << "Enter the numbers in the data set: ";
    for (size_t i = 0; i < count; i++)
    {

        cin >> number;
        dataSet.push_back(number);
    }
    sd.setData(dataSet);
    switch (count)
    {
    case 1:
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0]) << endl;
        break;
    case 2:
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0], sd.getData()[1]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0], sd.getData()[1]) << endl;
        break;
    case 3:
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0], sd.getData()[1], sd.getData()[2]) << endl;
        break;
    case 4:
        cout << "The mean of the data set is: " << sd.mean(sd.getData()[0], sd.getData()[1], sd.getData()[2], sd.getData()[3]) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()[0], sd.getData()[1], sd.getData()[2], sd.getData()[3]) << endl;
        break;
    default:
        break;
    }
    system("pause");
    return 0;
}