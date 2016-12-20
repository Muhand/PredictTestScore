///////////////////////////////////////////////////////////////////////////////
//Neural_Network cpp file
//This cpp file will take care of defining every function in the header file
///////////////////////////////////////////////////////////////////////////////
#include "Neural_Network.h"

///////////////////////////
//This is the default construct which will call the init function
///////////////////////////
Neural_Network::Neural_Network()
{
	init();
}

///////////////////////////
//Initialize the variables to a value;
///////////////////////////
void Neural_Network::init()
{
	//Initialize the weights for the first array
	w1 = new int*[this->inputLayerSize];
	for (int i = 0; i < this->inputLayerSize; ++i)
		w1[i] = new int[this->hiddenLayerSize];

	for (int i = 0; i < this->inputLayerSize; i++)
	{
		for (int i = 0; i < this->hiddenLayerSize; i++)
		{
			
		}
	}


	w2 = new int*[this->hiddenLayerSize];
	for (int i = 0; i < this->hiddenLayerSize; ++i)
		w2[i] = new int[this->outputLayerSize];

	
}

Neural_Network::~Neural_Network()
{
	delete[] w1;
	delete[] w2;
}

