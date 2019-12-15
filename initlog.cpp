#include "log.h"
#include <iostream>
void initlog()
{
    Log("Initialising Log ...");
}

void Log(const char* message)
{
    std::cout << message << std::endl;
}