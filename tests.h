/*
 * tests.h
 *
 *  Created on: Apr 9, 2017
 *      Author: diltheyat
 */

#ifndef TESTS_H_
#define TESTS_H_

#include "EpitopeEnumerator.h"
#include <set>
#include <string>

void randomTests();

void assert_AA_sets_identical(const std::set<std::string>& s1, const std::set<std::string>& s2);

unsigned int randomNumber(unsigned int max_inclusive);

#endif /* TESTS_H_ */