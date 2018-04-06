#include "Carriage.h"

Carriage::Carriage()
{
    type = 0;
    number = 0;
}

Carriage::Carriage(bool newType)
{
    type = newType;
}

Carriage::Carriage(const Carriage &newCarriage)
{
    type = newCarriage.getType();
    number = newCarriage.getNumber();
}

bool Carriage::getCarriageType()
{
    return type;
}

void Carriage::setCarriageType(bool newType)
{
    type = newType;
}

int Carriage::getCarriageNumber()
{
    return number;
}

void Carriage::setCarriageNumber(int newNumber)
{
    number = newNumber;
}
