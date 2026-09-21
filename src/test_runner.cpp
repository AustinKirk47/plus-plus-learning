#include "test_runner.h"
#include "test_functions.h"
#include <iostream>
#include <vector>

void runTests(std::vector<bool> testSelections)
{
    if (testSelections.max_size() < 3)
        std::cout << "Test selection array is too small." << std::endl;

    if (testSelections.at(0))
        setupTest();

    if (testSelections.at(1))
        multiComponentTest();

    if (testSelections.at(2))
        dataTypesTest();
}