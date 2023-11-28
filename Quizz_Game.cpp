#include <iostream>
#include<string>

using namespace std;

char Guess;
int Total;

class Question{
	private:
		string Question_Text ;
		string option_1;
		string option_2;
		string option_3;
		string option_4;
		char correct_Answer;
		int Question_score;
	
	public:
		void set_values(string, string, string, string,string,  char, int);
		
		void ask_question();
};

int main(){
	
	cout <<"\n******************************************************************************";
	cout<<"\n\t\t\t\tWELCOME TO QUIZ GAME";
	cout <<"\n\n******************************************************************************"
		 <<endl;
	cout<<"\n\t\t\tPress Enter to start Quiz"<<endl;
	
	cin.get(); //for Input
	
	string Respond;
	
	cout<<"\t\t\t Are you Ready? Yes/No"<<endl;
	cout<<"\t\t\t\t";
	cin>>Respond;
	
	if(Respond == "yes"){
		cout<<endl;
		cout<<"\t\t\tGood Luck!"<<endl;
	}
	else
	{
		cout<<"Ok Good Bye!"<<endl;
		return 0;
	}
	
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	
	q1.set_values("\t\t\tQ.NO.1: Who is the father of C language?", "Steve Jobs",
                 "James Gosling", "Dennis Ritchie",
                 "Rasmus Lerdorf",'c', 10); // 'c' is for correct option
				                         // 10 is points for correct Answer
	q2.set_values("\t\t\tQ.NO.2: Who is the father of Computer?", "Allen Turing",
                 "Charles Babbage", "Simur Cray",
                  "Augusta Adaming",'b', 10);
                  
    q3.set_values("\t\t\tQ.NO.3: WWW stands for___________?", "World Whole Web",
                 "Web World Wide", "Wide World Web",
                 "World Wide Web", 'd', 10);
                 
    q4.set_values("\t\tQ.NO.4: The brain of any computer system is___________?", "Memory",
                 "ALU", " CPU",
                 "Control unit", 'c', 10);
                 
    q5.set_values("\t\t\tQ.NO.5: Who is the father of Computer science?", "Allen Turing",
                 "Augusta Adaming", "Charles Babbage",
                 "Simur Cray", 'a', 10);			                         
	

	q1.ask_question();
	q2.ask_question();
	q3.ask_question();
	q4.ask_question();
	q5.ask_question();
		
	cout<< "\t\t\t Total Score = "<<Total<<" out of 50"<<endl;
	
	if(Total >=30){
		cout<<"\t\t\t Congrat :) You WON.."<<endl;
	}
	else{
		cout<<"\t\t\t You Falied :(";
		cout<<"\n\t\t\t OOps! Try Again.."<<endl;
	}
	return 0;
}
void Question::set_values(string q, string op1,
							string op2, string op3,
							string op4, char ca, int qs)
{
	
	Question_Text = q;
	option_1 = op1;
	option_2 = op2;
    option_3 = op3;
    option_4 = op4;
    correct_Answer = ca;
    Question_score = qs;
								
}
void Question::ask_question(){
	
	cout<<endl;
	
	cout<<Question_Text<<endl;
	cout <<"\t\t\t\t a."<<option_1<<endl;
    cout <<"\t\t\t\t b. " << option_2 << endl;
    cout <<"\t\t\t\t c. " << option_3 << endl;
    cout <<"\t\t\t\t d. " << option_4 << endl;
    
    cout<<endl;


cout<<"\t\t\t Choose your Option"<<endl;
cout<<" \t\t\t";
cin>>Guess;

system("cls");

if (Guess == correct_Answer)
{
	cout<<endl;
	cout<<"\t\t\t Correct!"<<endl;
	
	Total = Total+Question_score;
	cout<<endl;
}

else{

	cout<<"\n\t\t\t Wrong!";
	cout<<"\n\t\t\t Correct Answer "<<correct_Answer<<endl;
}



}

























