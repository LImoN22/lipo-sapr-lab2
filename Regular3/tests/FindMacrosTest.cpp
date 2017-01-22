/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FindMacrosTest.cpp
 * Author: LImoN22
 *
 * Created on Jan 22, 2017, 10:57:41 PM
 */

#include "FindMacrosTest.h"
#include "MacrosSearch.h"
#include "FindMacrosTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(FindMacrosTest);

FindMacrosTest::FindMacrosTest() {
}

FindMacrosTest::~FindMacrosTest() {
}

void FindMacrosTest::setUp() {
}

void FindMacrosTest::tearDown() {
}
string MacrosSearch::SearchMacros ();
void FindMacrosTest::testSearchMacros() {
      const char* ErrorMessage = "MacrosSearch::SearchMacros must find all unique macros names with string type body    ";
    MacrosSearch macrosSearch;
    string List = macrosSearch.SearchMacros();
     string ExpectedList = "#define PACKAGE_NAME \"MySQL Server\"\n#define PACKAGE_VERSION \"5.1.54\"\n#define PACKAGE_BUGREPORT \"\"";
    if (true /*check result*/) {
         CPPUNIT_ASSERT_MESSAGE(ErrorMessage, List == ExpectedList);
    }
}

