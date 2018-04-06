#include <iostream>
#include "Carriage.h"

//using namespace std;
void coutCarriage(Carriage* carriage)
{
    std::cout << "Type: " << carriage->getType() << std::endl;
    std::cout << "Number: " << carriage->getNumber() << std::endl;
}

int main()
{
    std::cout << "Create carriage with default constructor" << std::endl;
    Carriage * firstCarriage = new Carriage();
    std::cout << "First carriage: " << std::endl;
    coutCarriage(firstCarriage);
    
    std::cout << "Create carriage with parameters comstructor" << std::endl;
    Carriage * secondCarriage = new Carriage(1, 1);
    std::cout << "Second carriage: " << std::endl;
    coutCarriage(secondCarriage);
    
    std::cout << "Create carriage with copy constructor" << std::endl;
    Carriage * thirdCarriage = new Carriage(*secondCarriage);
    std::cout << "Third carriage: " << std::endl;
    coutCarriage(thirdCarriage);
    return 0;
}
