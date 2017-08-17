#include <iostream>

using namespace std;


//function to perform sum of the products of expression for F1 and F2
void kMapExample(bool * input, bool * output)
{
	output[0] = (input[1] && input[0]) || input[2];
	output[1] = (!input[1] && !input[2]) || (input[0] && !input[1]) || (input[1] && input[2]);
}

int main()
{
	//allocating memory for two boolean vector arrays to store inputs and outputs
	bool * boolInputs = new bool[3];
	bool * boolOutputs = new bool[2];

	//for loop to get user input of boolean values
	for (int enter_i = 0; enter_i < sizeof(boolInputs) - 1; enter_i++)
	{
		cout << "Enter boolean value (either 1 or 0) for variable " << char(65 + enter_i) << ": ";
		cin >> boolInputs[enter_i];
		cout << endl;
	}

	//calling function kMapExample to populate output
	kMapExample(boolInputs, boolOutputs);

	//displaying results
	cout << "F1 = " << boolOutputs[0] << " and F2 = " << boolOutputs[1] << endl;
	
	cin.clear();
	cin.ignore();
	cin.get();
	
	delete boolInputs, boolOutputs; 

	return 0;
}