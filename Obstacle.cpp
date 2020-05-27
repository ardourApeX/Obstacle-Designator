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
void ReadBoardFile(string Path) //Taking path of file
{
	ifstream fin; 
	fin.open(Path);
	if(fin) //If such file exists then...
	{
		string Line;
		while(getline(Fin, Line)){ //Copy the data line by line from object to Line 
			cout<<Line<<"\n";
		}
	}
	else
		cout<<"No such file found!"<<"\n"; //If such file doesn't exists...
	fin.close();
}
#include "test.cpp" //for testing
int main()
{
	ReadBoardFile("1.board");
	TestParseLine();
}