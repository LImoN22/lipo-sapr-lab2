/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MacrosSearchTest.h
 * Author: LImoN22
 *
 * Created on Jan 22, 2017, 10:34:55 PM
 */

#ifndef MACROSSEARCHTEST_H
#define MACROSSEARCHTEST_H

#include <cppunit/extensions/HelperMacros.h>

class MacrosSearchTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MacrosSearchTest);

    CPPUNIT_TEST(testMacrosSearch);

    CPPUNIT_TEST_SUITE_END();

public:
    MacrosSearchTest();
    virtual ~MacrosSearchTest();
    void setUp();
    void tearDown();

private:
    void testMacrosSearch();

};

#endif /* MACROSSEARCHTEST_H */

