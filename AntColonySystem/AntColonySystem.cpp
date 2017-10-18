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
	
	string jumper;
	for (int i = 0; i < 7; i++)
	{
		getline(cities_file, jumper);
		cout << jumper << endl;
	}

	if (file_name == "gr96.txt")
	{
		double** cities = new double*[G_M];
		for(int i = 0; i < G_N; i++)
		{
			cities[i] = new double[G_N];
		}
		
	}
	else if (file_name == "hk48.txt")
	{
		int cities[H_M][H_N] = { 0 };

		int reader;
		ofstream out("oi.txt");

		for(int i = 0; i < H_M; i++)
		{
			for (int j = 0; j < H_N; j++)
			{
				cities_file >> cities[i][j];
				if (cities[i][j] == 0)
				{
					i++;
					j = 0;
				}
			}
		}

		for (int i = 0; i < H_M; i++)
		{
			for (int j = 0; j < H_N; j++)
			{
				out << cities[i][j] << "\t";
			}
			out << endl;
		}
		out.close();

	} else
	{
		cerr << "File not accepted" << endl;
		return 1;
	}

	cities_file.close();

    return 0;
}

