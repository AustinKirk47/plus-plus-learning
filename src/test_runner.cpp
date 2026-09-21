#include "test_runner.h"
#include "test_functions.h"

void runTests(bool[] testSelections)
{
    if (testSelections.size() < 3)
        std::cout << "Test selection array is too small." << std::endl;

    if (bool[0])
        cppSetupTest();

    if (bool[1])
        multiComponentTest();

    if (bool[2])
        dataTypesTest();
}