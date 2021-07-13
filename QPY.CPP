/*
********************* IMPORTANT **********************

this project is a quiz implementation basic function requirements is knowledge of
C++ programming at the beginner  level.
this project can be used as standard 11th (+1) school project

************** THANK YOU ***************************  
*/
#include<iostream.h>
#include<conio.h>
void instructions();
class details
{
  public:
   char name[20];
  int age,marks, ans;
  public:
  details(){
    cout<<"\n **************    WELCOME   ************ \n";
    cout<<"\n\n\n\t Enter your name - ";
    cin>>name;
    cout<<"\n Enter your age - ";
    cin>>age;
  }  //end of details function
  void help(){
    cout<<" \n press enter to continue...... ";
    getch();
    clrscr();
    cout<<" \n\t WELCOME "<<name<<" to our quiz.\n This quiz is to test your knowlegde.";
    cout<<"\n Here are some tips you might wanna know before playing \n";
    cout<<" You will be given 4 options and you have to press 1, 2 ,3 or 4 for the right option.";
    cout<<"\n You will be asked questions continuously, till right answers are given";
    cout<<"\n -1 negative marking for wrong answers! & +3 or +4 for right answer";
    cout<<" \n ALL THE BEST ";
    getch();
    clrscr();
  }  // end of help function
} ; // end of details class


class quiz : public details
{
  public:
  void test(){
    cout<<" \t\t\t\t Here we present you our 1st question --->";
    cout<<" \n\n 1. Who is current PM of India ?";
    cout<<" 1) Dr. B R Ambetkar \t 2) Narandra Modi";
    cout<<" \n 3) P G Nayak \t 4) Dr. P Y Sharma\n";
    cin>>ans;
    if (ans==2)
      marks+3;
    else{
      cout<<" wrong answer,the correct answer is 2) Narandra Modi\n";
      marks--;
    }
  getch();
  clrscr();
  cout<<"\n\t 2. which is the 3rd highest mountain in the world?";
  cout<<" 1) Mt. K2 \t 2) Mt. Kanchanjungha ";
  cout<<"\n 3) Mt. Makalu \t 4) Mt. Kilimanjaro ";
  cin>>ans;
  if(ans==2)
    marks+4;
  else{
    cout<<" \n wrong answer, the correct answer is 2) Mt. Kanchanjunga \n ";
    marks--;
  }
  getch();
  clrscr();
  cout<<"\n \t 3.Vedic Culture was from ............,";
  cout<<"1) 1500 BC to  600 \t 2) 1450 BC to 550 BC \n";
  cout <<" 3) 1400 BC to 500 BC \t 4) 1300 BC to 400 BC ";
  cin>>ans;
  if(ans==2)
    marks+4;
  else{
    cout<<"\n wronge answer, the correct ans is 1) 1500 BC to 600 BC \n";
    marks--;
  }
  getch();
  clrscr();
  cout<<"\n \t\t 4.The oldest university in the world is..";
  cout<<"\n 1) Cambridge University \t 2) Oxford University";
  cout<<"\n 3) University of Bologna \t 4) University of Warwick \n";
  cin>>ans;
  if (ans==3)
    marks+3;
  else{
    cout<<"\n wrong answer, the correct answer is 3) University of Bologna";
    marks--;
  }
  cout<<" 5. the currency of US is...";
  cout<<"1) rupiah \t 2) dinar";
  cout<< " 3) dollar \t 4) euro";
  cin>>ans;
  if(ans==3)
    marks+4;
  else{
    cout<<"\n the correct answer is 3) dollar\n";
    marks--;
  }
  getch();
  clrscr();
  cout<<"6. Which Bollywood actor has won the Best Performance by an Actor ";
  cout<< "award at the 2016 Asia Pacific Screen Awards? ";
  cout<<"1) Manoj Bajpayee \t 2) Johnny Lever";
  cout<<"\n 3) Danny Denzongpa \t 4) Nawazuddin Sidhhiqui \n";
  cin>>ans;
  if(ans==1)
    marks+4;
  else{
    cout<<"\n wrong answer, the correct answer is 1)Manjob Bajpayee\n";
    marks--;
  }
  getch();
  clrscr();
  cout<<"\n\t\t 7.Sachin Singh is associated with which sports? \n ";
  cout<<" 1) Boxing \t 2) Cricket \n";
  cout<<" 3) Football \t 3) Hockey \n";
  cin>>ans;
  if(ans==1)
    marks+4;
  else{
    cout<<"wrong answer, the correct answer is 1) Boxing\n";
    marks--;
  }
  getch();
  clrscr();
  cout<<"\n \t \t 8.The book �Banaras City of Light� has been authored by whom?\n";
  cout<<"1) Vrinda Grover \t 2) Diana Eck\n";
  cout<<"3)Mini Kapoor \t 4) sanjaya Baru ";
  cin>>ans;
  if(ans ==2)
    marks+3;
  else{
    cout<<"wronge answer, the correct answer is 2) Diana Eck";
    marks--;
  }
  getch();
  clrscr();
  cout<<"\n\t 9.. Which state has launched �Duck Boats� to boost tourist footfall? \n";
  cout<<"1) Kerla \t 2) Maharashtra";
  cout<<"\n 3)Goa \t 4) Tamil Nadu";
  cin>>ans;
  if(ans==3)
    marks+3;
  else{
    cout<<"wrong answer, the correct answer is 3) Goa";
    marks--;
  }
  getch();
  clrscr();
  cout<<"\n\t\t 10.The Constitution Day is celebrated on which date in India? \n";
  cout<<" 1) 25th Nov. \t 2) 28th Sept. ";
  cout<<" \n 3) 27th Nov. \t 4) 26th Nov. ";
  cin>>ans;
  if (ans==4)
    marks+4;
  else{
    cout<<"\n wrong answer, the corect answer is 4) 26th Nov. \n";
    marks--;
  }
  getch();
  clrscr();
  cout<<endl<<endl<<name<<" you have sucessfully reached to the end of the game...";
  cout<<"\t press enter to see your score and average ";
  getch();
  clrscr();
  }  // end of test function


  void score(){
      cout<<" *****/t/t/t GAME OVER ****** ";
    cout<<"\n\n\t Your score out of 10 questions is- "<<marks;
    cout<<"\n Your average grade is- "<<(marks/10);
    if ((marks/10)<=15)
    cout<<"\n\t DUDE you gotta imrpove your self ....All The Best \n";
    else
    cout<<"\n \t Keeping on.... Best Of Luck";
  }  // end of score function
} ;  // end of class quiz


void main(){
   details obj;  //object created for details
   obj.help();  // calling help for description
   quiz obj1;   // object creation for quiz class
  obj1.test();
  obj1.score();
  instructions();
  getch();
}   // end of main function

/* the function instructions shows
   the basic instructions to be followed  */
void instructions(){
  cout<<" \n\n\n This quiz is completly for the purpose of entertainment ";
  cout<<" \n its each question is related to daily life or General knowledge.";
  cout<" This game promotes knowledge, once life should possess lots of knowledge";
}  // end of instructions function
