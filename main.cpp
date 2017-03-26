#include"Score.h"

using namespace std;

int main()
{
	float Ra,Rb,Sa,Sb;
	int k;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	inFile >> k;
	Score S(k);
	inFile >> Ra;
	inFile >> Rb;
	S.ScoreSet(Ra,Rb);
	outFile << (int)Ra<<' '<<(int)Rb<<endl;
	while(inFile >> Sa){
		Sb=1-Sa;
		S.RaCalculate(Sa);
		S.RbCalculate(Sb);
		Ra=S.RaGet();
		Rb=S.RbGet();
		outFile << (int)Ra<<' '<<(int)Rb<<endl;
		S.ScoreSet(Ra,Rb);
	}	
}
