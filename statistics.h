#ifndef _STATISTICS_H // To cause the current source file to be included only once in a single compilation
#define _STATISTICS_H

#include <vector>    // for data type vector
using namespace std; // for size_t, vector and cout
class standardDeviation
{
private:
    size_t numbersCount; // number of numbers in the data set
    vector<double> data; // data set

public:
    standardDeviation();                                                             // constructor                                                         // destructor
    void setNumbersCount(size_t);                                                    // set the number of numbers in the data set
    void setData(vector<double>);                                                    // set the data set
    vector<double> getData();                                                        // get the data set
    size_t getNumbersCount();                                                        // get the number of numbers in the data set
    double mean(double number);                                                      // calculate the mean of the data set
    double mean(double number1, double number2);                                     // calculate the mean of two numbers
    double mean(double number1, double number2, double number3);                     // calculate the mean of three numbers
    double mean(double number1, double number2, double number3, double number4);     // calculate the mean of four numbers
    double mean(vector<double>);                                                     // calculate the mean with more than four numbers
    double variance(double number);                                                  // calculate the variance of the data set
    double variance(double number1, double number2);                                 // calculate the variance of two numbers
    double variance(double number1, double number2, double number3);                 // calculate the variance of three numbers
    double variance(double number1, double number2, double number3, double number4); // calculate the variance of four numbers
    double variance(vector<double>);                                                 // calculate the variance with more than four numbers
    ~standardDeviation();                                                            // destructor
};

#endif
