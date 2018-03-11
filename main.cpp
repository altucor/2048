#include <iostream>
#include <vector>
#include "logic.h"


int main()
{
    Logic gameLogic(4, 2);

    //for(int i=0; i<10; i++){
    //    std::cout << gameLogic.getRandValue() << std::endl;
    //}

    gameLogic._debugPrintMap();
    std::cout << "Hello world!" << std::endl;
    return 0;
}
