///////////////////////////////////////////////////////////////////////////
//Neural_Network header file
//This header will define the number of input, hidden, output layers 
///////////////////////////////////////////////////////////////////////////
#ifndef NEURAL_NETWORK
#define NEURAL_NETWORK

class Neural_Network
{
public:
	Neural_Network();								//Default Constructor
	~Neural_Network();								//Destructor
	float sigmoid(float x);
	void printArray(float **array, int rows, int cols);
	void forward(float**x);

	//Getters and setters
	int getInputLayerSize() const;
	int getOutputLayerSize() const;
	int gethiddenLayerSize() const;
	float **getw1() const;
	float **getw2() const;

private:
	//Functions
	void init();									//This function will take care of initializing variables and constants
	
	//Constants
	const int inputLayerSize = 2;
	const int outputLayerSize = 1;
	const int hiddenLayerSize = 3;

	//Variables
	float **w1;										//Going from input to hidden
	float **w2;										//Going from hidden to output

};

#endif