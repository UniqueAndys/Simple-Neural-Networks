#include <iostream>
#include <string>
#include <sstream>

#include "readData.h"

ReadData::ReadData(const std::string filename) {
	dataFile.open(filename.c_str());
}

void ReadData::getTopology(std::vector<unsigned> &topology) {
	std::string line;
	std::string label;

	getline(dataFile, line);
	std::stringstream ss(line);
	ss >> label;
	std::cout << label;

	if (this->isEof() || label.compare("topology:") != 0) {
		abort();
	}
	while (!ss.eof()) {
		unsigned n;
		ss >> n;
		topology.push_back(n);
	}
	return;
}