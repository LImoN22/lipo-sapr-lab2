/* 
 * File:   MacrosSearch.cpp
 * Author: osipo_000
 * 
 * Created on 12.10.2016, 16:04
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "MacrosSearch.h"
#include <pcrecpp.h>

MacrosSearch::MacrosSearch() {
    this->newReg = " ^#define\\s\\w+\\s\".+\" ";
}

int MacrosSearch::getCountMacros() {
    int count = 0; 

//Чтение из файла и увеличение счетчика
string line = ""; 
pcrecpp::RE re(newReg);
while( getline (stdin,line) )
{
if(re.FullMatch(line))
count++;
}

return  count;
}
    


