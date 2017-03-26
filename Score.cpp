#include "Score.h"
       
       Score:: Score(int k){
		K=k;

	}

       void Score::ScoreSet(int a,int b){
		Ra=a;
		Rb=b;
	}

        float Score::EaCalculate(void){
		float Ea;
		Ea=1/(1+pow(10,(Rb-Ra)/400));
		return Ea;

	}
        float Score::EbCalculate(void){
		float Eb;
		Eb=1/(1+pow(10,(Ra-Rb)/400));
		return Eb;

	}

         void Score::RaCalculate(float Sa){
		float E;
		E=EaCalculate();
		Ra2=Ra+K*(Sa-E);
	}
          void Score::RbCalculate(float Sb){
		float E;
		E=EbCalculate();
		Rb2=Rb+K*(Sb-E);		
	}

                float Score:: RaGet(void){
			return Ra2+0.5;
		
		}
                float Score::RbGet(void){
			return Rb2+0.5;
		}


 

