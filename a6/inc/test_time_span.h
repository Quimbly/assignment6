// Copyright 2022 CSCE 240
//
#ifndef INC_TEST_TIME_SPAN_H_
#define INC_TEST_TIME_SPAN_H_

#include <a6/inc/time_span.h>
#include <cassert>  // ::assert
#include <cstdlib>  // ::atoi
#include <iostream>
#include <sstream>
#include <string>


bool TestOperatorPlusTimeSpan();
bool TestOperatorPlusInt();
bool TestOperatorExtract();
bool TestOperatorInsert();

#endif  // INC_TEST_TIME_SPAN_H_
