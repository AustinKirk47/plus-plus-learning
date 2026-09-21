#include <iostream>
#include <string>
#include "test_runner.h"

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
    bool[3] tests = {false, false, true};

    runTests(tests);
    
    return 0;
}