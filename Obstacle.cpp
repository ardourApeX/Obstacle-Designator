#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
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
int main()
{
	ReadBoardFile("1.board");
}