///////////////////////////////////////////////////////////////////////////////
//Neural_Network cpp file
//This cpp file will take care of defining every function in the header file
///////////////////////////////////////////////////////////////////////////////
#include "Neural_Network.h"
#include <ctime>
#include <math.h>
#include <iostream>
#include<iomanip>

using namespace std;

///////////////////////////
//This is the default construct which will call the init function
///////////////////////////
Neural_Network::Neural_Network()
{
	init();
	srand(time(NULL));
}

///////////////////////////
//Initialize the variables to a value;
///////////////////////////
void Neural_Network::init()
{
	cout << left<< fixed << setprecision(5);

	//Initialize the weights for the first array
	w1 = new float*[this->inputLayerSize];
	for (int i = 0; i < this->inputLayerSize; ++i)
		w1[i] = new float[this->hiddenLayerSize];

	for (int i = 0; i < this->inputLayerSize; i++)
	{
		for (int j = 0; j < this->hiddenLayerSize; j++)
		{
			int x = rand() % 100 + 1;
			w1[i][j] = x;
		}
	}


	w2 = new float*[this->hiddenLayerSize];
	for (int i = 0; i < this->hiddenLayerSize; ++i)
		w2[i] = new float[this->outputLayerSize];

	for (int i = 0; i < this->hiddenLayerSize; i++)
	{
		for (int j = 0; j < this->outputLayerSize; j++)
		{
			int x = rand() % 100 + 1;
			w2[i][j] = x;
		}
	}
	
}

void Neural_Network::forward(float** x)
{
	float z2 = n
}


///////////////////////////////////////
//Other Functions
///////////////////////////////////////
float Neural_Network::sigmoid(float x)
{
	//Fast Sigmoid function: f(x) = x / (1 + abs(x))
	return ((x) / (1 + fabs(x)));

}

void Neural_Network::printArray(float** array, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			
			if (j == cols - 1)
				cout << array[i][j];
			else
				cout << array[i][j] << setw(5) << ",";
		}
		cout << std::endl;
	}
}

int Neural_Network::getInputLayerSize() const
{
	return this->inputLayerSize;
}

int Neural_Network::getOutputLayerSize() const
{
	return this->outputLayerSize;
}

int Neural_Network::gethiddenLayerSize() const
{
	return this->hiddenLayerSize;
}

float** Neural_Network::getw1() const
{
	return this->w1;
}

float** Neural_Network::getw2() const
{
	return this->w2;
}

Neural_Network::~Neural_Network()
{
	delete[] w1;
	delete[] w2;
}

