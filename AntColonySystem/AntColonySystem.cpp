// AntColonySystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

#define G_M 96
#define G_N 96
#define H_M 48
#define H_N 48

using namespace std;

int main(int argc, char* argv[])
{
	const string file_name = argv[1];
	ifstream cities_file(file_name);

	if (!cities_file.is_open())
	{
		cerr << "Could not open file " << file_name << endl;
		return 1;
	}

	double** cities;

	if (file_name == "gr96.txt")
	{
		cities = new double*[G_M];
		for(int i = 0; i < G_N; i++)
		{
			cities[i] = new double[G_N];
		}
		// determinar distancia de cities[i][j] por distancia euclidiana
	}
	else if (file_name == "hk48.txt")
	{
		cities = new double*[H_M];
		for (int i = 0; i < H_N; i++)
		{
			cities[i] = new double[H_N];
		}



	}

    return 0;
}

