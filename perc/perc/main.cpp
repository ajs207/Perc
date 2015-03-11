#include <cstdlib>
#include <iostream>
#include <array>

#include <fstream>
#include <ctime>
using namespace std;


int main(int argc, char* argv[])
{
	

	const int size = 1005;
	srand(time(0));
	int fill = 0;
	int chance = 25;
	ofstream myfile;
	myfile.open("test.pgm");
	myfile << "P2" << endl;
	myfile << "# test program" << endl;
	myfile << size << " " << size << endl;
	myfile << "1" << endl;
	

	
	
	
	bool grid[size][size];
	
	
	
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			fill = rand() % 100;			
			
			if (fill < chance)
				{
				grid[i][j] = true;
				
				}
				
			else
				{
				grid[i][j]= false; 
				
				}

			
			myfile << grid[i][j]<< " ";
		

		}
		myfile << endl;
	}

	
	myfile.close();
	
}