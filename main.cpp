#include <iostream>       // for cout
#include <vector>         // for data type vector
#include "statistics.cpp" // for class standardDeviation

using namespace std;

int main()
{ // declare variables
    standardDeviation sd;
    size_t count;
    vector<double> dataSet;
    double number;
    // get the number of numbers in the data set
    cout << "Enter the number of numbers in the data set: ";
    cin >> count;
    sd.setNumbersCount(count);
    // get the data set
    cout << "Enter the numbers in the data set: ";
    for (size_t i = 0; i < count; i++)
    {

        cin >> number;
        dataSet.push_back(number);
    }
    sd.setData(dataSet);
    // calculate the mean and variance of the data set
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
        cout << "The mean of the data set is: " << sd.mean(sd.getData()) << endl;
        cout << "The variance of the data set is: " << sd.variance(sd.getData()) << endl;
        break;
    }
    system("pause");
    return 0;
}