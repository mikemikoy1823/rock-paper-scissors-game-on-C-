#include <iostream>

using namespace std;




class RPS{
private:

string rock;
public:

    int GC;



    RPS(string aRock, int gc){
        RK(aRock);
        GC = gc;

    }





 //               if( aRock == "paper" && GC <= 1){                                    template of if statements incase if forgotten
 //   cout << "Your opponent chose scissor you lose" << endl;
 //   GC++;
 //   }else if( aRock == "scissor"){
 //   cout << "Your opponent chose paper you win" << endl;
 //   GC++;
 //   }else if (aRock == "rock"){
 //   cout << "Your opponent chose rock draw game" << endl;
 //   GC++;
//    }else{
 //   cout << "Please Choose again" << endl;


 //   }




       void RK (string aRock){

      switch(GC){
  case 0:
       if( aRock == "rock"){
    cout << "Your opponent chose scissor you win" << endl;
    }else if( aRock == "paper"){
    cout << "Your opponent chose rock you win" << endl;

    }else if( aRock == "scissor") {
    cout << "Your opponent chose scissor draw game" << endl;
    }else{
    cout << "Please Choose again" << endl;
    }
    break;
  case 1:

      if( aRock == "paper"){
    cout << "Your opponent chose scissor you lose" << endl;
    GC++;
    }else if( aRock == "scissor"){
    cout << "Your opponent chose paper you win" << endl;
    GC++;
    }else if (aRock == "rock"){
    cout << "Your opponent chose rock draw game" << endl;
    GC++;
    }else{
    cout << "Please Choose again" << endl;


    }
    break;
  case 2: // add another if statements if you decided to add games
  case 3:
  case 4:






  default:
    cout << "Try again" << endl;





      }

    }

};





int main()
{
    string paper;
    string rock1;
    string scissor;
    int GC = 0;
    int GL = 3; // change this number for longer games


do{
    cout << "Please enter rock paper or scissor" << endl;
 cin >> rock1;

 RPS Rks(rock1, GC);


    GC++;


}while(GC < GL);





    return 0;
}
