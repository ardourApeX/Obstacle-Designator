#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
vector<int> ParseLine(const string &S)  //Converting a string into vector
{
	istringstream my_stream(S);
	int num;
	vector<int>Vector; //For numeric values
	char ch; //for ,
	while(my_stream>>num>>ch)
	{
		Vector.push_back(num); //Pushig back to Vector
	}
	return Vector;
}
vector<vector<int>> ReadBoardFile(string Path) //Taking path of file
{
	ifstream fin; 
	fin.open(Path);
	vector<vector<int>> Board;  //Vector comprise of binary input from 1.board
	if(fin) //If such file exists then...
	{
		string Line;
		while(getline(Fin, Line)){ //Copy the data line by line from object to Line 
			Board.push_back(ParseLine(Line));

		}

	}
	return Board;
	fin.close();
}
void PrintBoard(const vector<vector<int>> Board)
{
	for(auto I : Board){
		for(int J : I)
			cout<<J;
		cout<<"\n";
	}
}
#include "test.cpp" //for testing
int main()
{
	auto Board = ReadBoardFile("1.board");
	PrintBoard(Board);
	
}