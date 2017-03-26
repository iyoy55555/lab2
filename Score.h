#ifndef SCORE
#define SCORE
#include<fstream>
#include<cmath>
#endif
using namespace std;



class Score{
	public:
		Score(int);
		
		void ScoreSet(int ,int);
	
		float EaCalculate();
		float EbCalculate();

		void RaCalculate(float);
		void RbCalculate(float);
		
		float RaGet();
		float RbGet();


	private:
		int K;
		float Ra,Rb,Ra2,Rb2;
};
