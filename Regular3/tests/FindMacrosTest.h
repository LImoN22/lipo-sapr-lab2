/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FindMacrosTest.h
 * Author: LImoN22
 *
 * Created on Jan 22, 2017, 10:57:41 PM
 */

#ifndef FINDMACROSTEST_H
#define FINDMACROSTEST_H
#include "../MacrosSearch.h"
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>


class FindMacrosTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(FindMacrosTest);

    CPPUNIT_TEST(testSearchMacros);

    CPPUNIT_TEST_SUITE_END();

public:
    FindMacrosTest();
    virtual ~FindMacrosTest();
    void setUp();
    void tearDown();

private:
    void testSearchMacros();

};

#endif /* FINDMACROSTEST_H */

