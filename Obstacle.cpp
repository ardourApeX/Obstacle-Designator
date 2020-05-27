#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;


enum class State {kEmpty, kObstacle}; //Defining Enumerators


// Function to generate vector of State from string (a line from 1.board file)
vector<State> ParseLine(const string &S)  //Assigning State into a String
{
	istringstream my_stream(S);
	int num; //For numeric values
	char ch; //for ,
	vector<State>Row; 
	while(my_stream>>num>>ch)
	{
		if(num == 0)
			Row.push_back(State::kEmpty);
		else
			Row.push_back(State::kObstacle);
	}
	return Row; //Returning a Vector consist of States
}


//Function to generate a 2D vector of State from 1.board file using ParseLine Function
vector<vector<State>>ReadBoardFile(string Path) //Function to Convert Vector full of States
{
	ifstream fin; 
	fin.open(Path);
	vector<vector<State>> Board {};  //Vector comprise of binary input from 1.board
	if(fin) //If such file exists then...
	{
		string Line;
		while(getline(fin, Line)) //Copy the data line by line from object to Line 
		{ 
			Board.push_back(ParseLine(Line));

		}
	}
	return Board;
	fin.close();
}

//Function to return image of obstacle on the basis of state vector
string CellString(State Cell)  
{
	if(Cell == State::kObstacle)
		return"⛰️ ";
	else
		return "0 "; 
}

void PrintBoard(const vector<vector<State>> Board)
{

	for(auto I : Board){ //OR for(vector<State> I : Board)
		for(auto J : I)  //OR for(State J : I)
			cout<<CellString(J);
		cout<<"\n";
	}
}


int main()
{
	auto Board = ReadBoardFile("1.board");
	PrintBoard(Board);
	
}