/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LImoN22
 *
 * Created on January 22, 2017, 9:22 PM
 */

#include <cstdlib>
#include "MacrosSearch.h"
#include "tests/FindMacrosTest.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 CPPUNIT_TEST_SUITE_REGISTRATION( FindMacrosTest );
	
	if ( argc >= 2 )
	{
	    // If argument option is -t or --test, then make test
	    if ( strcmp(argv[1], "-t\n") || strcmp(argv[1], "--test\n") ) 
		{
			CppUnit::Test *test = CppUnit::TestFactoryRegistry::getRegistry().makeTest();
			CppUnit::TextTestRunner runner;
			runner.addTest(test);
			
			runner.run();
			
			exit(0);
		}
		// Else run program
	}
	
    MacrosSearch Finder;
    cout << Finder.SearchMacros() << endl;
    return 0;
}

