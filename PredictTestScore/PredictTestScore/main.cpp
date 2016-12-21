///////////////////////////////////////////////////////////////////
//					Predict the next test scroes
//							Muhand Jumah
//							 12/19/2016
//This project uses neural networks to predict the next test scores 
//based on hours you studied and hours you slept for previous exams.
///////////////////////////////////////////////////////////////////
#include <ctime>
#include <iostream>
#include "Neural_Network.h"

/////////////////////////////
//Name spaces
/////////////////////////////
using namespace std;

/////////////////////////////
//Global Variables
/////////////////////////////
Neural_Network network;

int main()
{
	cout << "Printing W1" << endl << "-----------"<<endl;
	network.printArray(network.getw1(), network.getInputLayerSize(), network.gethiddenLayerSize());
	cout << endl << "Printing W2" << endl << "-----------"<<endl;
	network.printArray(network.getw2(), network.gethiddenLayerSize(), network.getOutputLayerSize());

Terminate:	
	return 0;
}