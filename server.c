#include "rdt.h"

int main(char *argv[],int argc) {
	lossProbability=0.5;
	int port=5000;
	char *fileName="test";
	int windowSize=10;
	int maxSegSize=50;
	numServers=1;
	
	initWindow(windowSize,maxSegSize);

	printWindowInfo();
	rdtRecv(port,fileName);
}
