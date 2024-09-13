//Rock paper scissors
//intro setup
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
	//set up starting variables round, player input, scores
        int round = 1;
        cout <<"Round "<< round <<" - Please enter your choice (rock, paper, scissors, or q to quit): ";
        string call;
        cin >> call;
        int scoreNum =0;
        int scoreDen=0;
	//set up while loop for wanted input aka filter out gibberish
        while (call == "rock" || call == "paper" || call == "scissors"){
                //output player choice
		cout <<"Your Choice: "<< call<< endl;
		//create random number generator and computer choice
		int random = rand()%3;
                vector<string> position {"rock", "paper", "scissors"};
                vector<string> *p {&position};
		//output computer choice
                cout<<"Computer's Choice: "<< (*p)[random] << endl;
		//tie scenario
                if (call == (*p)[random] ){
			//output draw and don't change score
                        cout <<"Result: it is a draw.\n";
			//output score
                        cout << "Score: "<< scoreNum << "/" << scoreDen << endl;
                }
		//rock loses to paper scenario
                if (call == "rock" && (*p)[random] == "paper"){
                        //output lose and increase denominator of score
			cout <<"Result: You lose.\n";
                        scoreDen++;
			//output score
                        cout << "Score: "<< scoreNum << "/" << scoreDen << endl;
                }
		//rock wins to scissors scenario
                if (call == "rock" && (*p)[random] == "scissors"){
                        //output win and increase numerator and denominator of score
			cout <<"Result: You win.\n";
                        scoreNum++;
                        scoreDen++;
			//output score
                        cout << "Score: "<< scoreNum << "/" << scoreDen << endl;
                }
		//paper wins to rock scenario
                if (call == "paper" && (*p)[random] == "rock"){
                        //output win and increase numerator and denominator of score
			cout <<"Result: You win.\n";
                        scoreNum++;
                        scoreDen++;
			//output score
                        cout << "Score: "<< scoreNum << "/" << scoreDen << endl;
                }
		//paper loses to scissors scenario
                if (call == "paper" && (*p)[random] == "scissors"){
                        //output lose and increase denominator of score
			cout <<"Result: You lose.\n";
                        scoreDen++;
			//output score
                        cout << "Score: "<< scoreNum << "/" << scoreDen << endl;
                }
		//scissors wins to paper scenario
                if (call == "scissors" && (*p)[random] == "paper"){
                        //output win and increase numerator and denominator of score
			cout <<"Result: You win.\n";
                        scoreNum++;
                        scoreDen++;
			//output score
                        cout << "Score: "<< scoreNum << "/" << scoreDen << endl;
                }
		//scissors loses to rock scenario
                if (call == "scissors" && (*p)[random] == "rock"){
                        //output lose and increase denominator of score
			cout <<"Result: You lose.\n";
                        scoreDen++;
			//output score
                        cout << "Score: "<< scoreNum << "/" << scoreDen << endl;
                }
                //update round
		round = round + 1; //idk why it won't let me use round++
                cout <<"Round "<< round <<" - Please enter your choice (rock, paper, scissor, or q to quit): ";
                cin >> call;


        }
	//differentiate between gibberish and exiting
        if (call == "q"){
                cout << "Thank you for playing!\n";
                exit(0);
        } else{
                cout << "Icorrect input.\n";
                exit(0);
        }
return 0;
}
