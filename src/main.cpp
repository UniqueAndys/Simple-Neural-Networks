#include <iostream>
#include "readData.h"

using namespace std;

int main()
{
	string path = "C:/Users/songbinbin_i/Desktop/github/Simple-Neural-Networks/data/trainingData.txt";
	ReadData trainData(path);

	vector<unsigned> topology;
	trainData.getTopology(topology);
	for (int i = 0; i < topology.size(); ++i)
		cout << topology[i] << " ";
	cout << endl;

	return 0;
}