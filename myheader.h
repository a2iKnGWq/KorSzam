#ifndef MYHEADER_H
#define MYHEADER_H



#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;


// I used ChatGPT !!!

struct Polinom
{
    std::vector<double> coeffs;

    Polinom(const std::vector<double>& coeffs) : coeffs(coeffs) {} // konstruktor


    Polinom operator+(const Polinom& p2)
    {
        std::vector<double> result(std::max(coeffs.size(), p2.coeffs.size()));

        for (int i = 0; i < coeffs.size(); i++)
            result[i] += coeffs[i];
        for (int i = 0; i < p2.coeffs.size(); i++)
            result[i] += p2.coeffs[i];

        return {result};
    }

    Polinom operator-(const Polinom& p2)
    {
        std::vector<double> result(std::max(coeffs.size(), p2.coeffs.size()));

        for (int i = 0; i < coeffs.size(); i++) 
            result[i] += coeffs[i];
        for (int i = 0; i < p2.coeffs.size(); i++)
            result[i] -= p2.coeffs[i];

        return {result};
    }

    Polinom operator*(const Polinom& p2)
    {
        std::vector<double> result(coeffs.size() + p2.coeffs.size() - 1);

        for (int i = 0; i < coeffs.size(); i++)
            for (int j = 0; j < p2.coeffs.size(); j++)
                result[i + j] += coeffs[i] * p2.coeffs[j];

        return {result};
    }

    Polinom derivative()
    {
        if (coeffs.size() < 2)
            return {{0}};   // 0-ad foku polinom
        
        std::vector<double> result(coeffs.size() - 1);

        for (int i = 1; i < coeffs.size(); i++)
            result[i - 1] = coeffs[i] * i;

        return {result};
    }

};


#endif // MYHEADER_H
