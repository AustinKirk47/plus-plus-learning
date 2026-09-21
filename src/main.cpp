#include "test_runner.h"
#include <iostream>
#include <string>
#include <vector>

// This is the main direction from which all learning exercises can be run.
int main()
{
    /* 
     * =====================
     * =   Testing Order   =
     * =====================
     * 0 - cpp-setup
     * 1 - multi-component
     * 2 - data-types
     */
    std::vector<bool> tests = {false, false, true};

    runTests(tests);
    
    return 0;
}