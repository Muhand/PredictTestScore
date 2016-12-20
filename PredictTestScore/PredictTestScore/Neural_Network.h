///////////////////////////////////////////////////////////////////////////
//Neural_Network header file
//This header will define the number of input, hidden, output layers 
///////////////////////////////////////////////////////////////////////////
#ifndef NEURAL_NETWORK
#define NEURAL_NETWORK

class Neural_Network
{
public:
private:
	//Functions
	Neural_Network();								//Default Constructor
	~Neural_Network();								//Destructor
	void init();									//This function will take care of initializing variables and constants
	
	//Constants
	const int inputLayerSize = 2;
	const int outputLayerSize = 1;
	const int hiddenLayerSize = 3;

	//Variables
	int **w1;
	int **w2;

};

#endif