#ifndef READDATA_H
#define READDATA_H

#include <string>
#include <fstream>
#include <vector>

class ReadData
{
public:
	ReadData(const std::string filename);
	bool isEof(void) {
		return dataFile.eof();
	}
	void getTopology(std::vector<unsigned> &topology);

private:
	std::ifstream dataFile;
};
#endif