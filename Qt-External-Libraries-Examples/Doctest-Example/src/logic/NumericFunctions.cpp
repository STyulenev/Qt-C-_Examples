#include "NumericFunctions.h"

#include <stdexcept>

namespace Logic {

Numeric::Numeric(int firstNumber, int secondNumber) :
    firstNumber(firstNumber),
    secondNumber(secondNumber)
{

}

Numeric::~Numeric()
{

}

int Numeric::getFirstNumber() const
{
    return firstNumber;
}

int Numeric::getSecondNumber() const
{
    return secondNumber;
}

void Numeric::setFirstNumber(int newFirstNumber)
{
    firstNumber = newFirstNumber;
}

void Numeric::setSecondNumber(int newSecondNumber)
{
    secondNumber = newSecondNumber;
}

int Numeric::add()
{
    return firstNumber + secondNumber;
}

int Numeric::sub()
{
    return firstNumber - secondNumber;
}

int Numeric::div()
{
    if (secondNumber == 0)
        throw std::logic_error("Division by 0");
    else
        return firstNumber / secondNumber;
}

int Numeric::multi()
{
    return firstNumber * secondNumber;
}

} // namespace Logic
