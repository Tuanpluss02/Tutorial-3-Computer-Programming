#ifndef _STATISTICS_H_ // To cause the current source file to be included only once in a single compilation
#define _STATISTICS_H_

#include <vector> // for data type vector

class standardDeviation
{
private:
    std::size_t numbersCount; // number of numbers in the data set
    std::vector<double> data; // data set

public:
    standardDeviation();                                                             // constructor
    ~standardDeviation();                                                            // destructor
    void setNumbersCount(std::size_t);                                               // set the number of numbers in the data set
    void setData(std::vector<double>);                                               // set the data set
    std::vector<double> getData();                                                   // get the data set
    size_t getNumbersCount();                                                        // get the number of numbers in the data set
    double mean(double number);                                                      // calculate the mean of the data set
    double mean(double number1, double number2);                                     // calculate the mean of two numbers
    double mean(double number1, double number2, double number3);                     // calculate the mean of three numbers
    double mean(double number1, double number2, double number3, double number4);     // calculate the mean of four numbers
    double mean(std::vector<double>);                                                // calculate the mean with more than four numbers
    double variance(double number);                                                  // calculate the variance of the data set
    double variance(double number1, double number2);                                 // calculate the variance of two numbers
    double variance(double number1, double number2, double number3);                 // calculate the variance of three numbers
    double variance(double number1, double number2, double number3, double number4); // calculate the variance of four numbers
    double variance(std::vector<double>);                                            // calculate the variance with more than four numbers
};

#endif