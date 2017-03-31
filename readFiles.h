/*
 * readFiles.h
 *
 *  Created on: Mar 31, 2017
 *      Author: diltheyat
 */

#ifndef READFILES_H_
#define READFILES_H_

#include <string>
#include <vector>
#include <map>

#include "Utilities.h"

class variantFromVCF {
public:
	std::string chromosomeID;
	unsigned int position;
	std::string referenceString;
	std::vector<std::string> sampleAlleles;
};

class transcriptExon {
public:
	unsigned int firstPos;
	unsigned int lastPos;
};

class transcript {
public:
	std::string transcriptID;
	std::string geneName;
	unsigned char strand;
	std::string chromosomeID;
	std::vector<transcriptExon> exons;
};

std::map<std::string, std::map<int, variantFromVCF>> readVariants(std::string VCF);
std::vector<transcript> readTranscripts(std::string transcriptsFile);
unsigned int countCharacters_noGaps(const std::string& S);

#endif /* READFILES_H_ */