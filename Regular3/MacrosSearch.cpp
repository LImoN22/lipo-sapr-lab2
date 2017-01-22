/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MacrosSearch.cpp
 * Author: LImoN22
 * 
 * Created on January 22, 2017, 9:24 PM
 */

#include "MacrosSearch.h"
#include <string>
#include <iostream>
#include <pcrecpp.h>
#include <sstream>		// std::stringstream
#include <algorithm>    // std::find
#include <iterator>		// std::vector::iterator
#include <vector>	

using namespace std;


string MacrosSearch::SearchMacros() {
      string macros = "";
    string list = "";
    pcrecpp::RE macrosRegex = pcrecpp::RE("(#define\\s(\"[\\w]+\"|[\\w]+)\\s(\".+\"|\\d+))");
    
    vector<string>macrosArray;
    vector<string>::iterator macrosArrayIterator;
    vector<string>::iterator uniqueMacros;
    
    while (getline(cin, macros))
    {
        pcrecpp::StringPiece input(macros);
        while (macrosRegex.FindAndConsume(&input, &macros))
        {
            uniqueMacros = find(macrosArray.begin(), macrosArray.end(), macros);
            if (uniqueMacros == macrosArray.end())
            {
                if (list == "")
                {
                    list += macros;
                }
                else 
                {
                    list += "\n" + macros;
                }
                macrosArray.push_back(macros);
            }
        }
    }
    return list;
}



