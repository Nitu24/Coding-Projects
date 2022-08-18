#include <iostream>
#include <conio.h>
using namespace std;
int x = 0;

class gameLogic
{
public:
	int option;
	char ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11;

	void header()
	{

		cout << "\t========================================================================" << endl;
		cout << "\t============================   QUIZ GAME    ============================" << endl;
		cout << "\t========================================================================" << endl;
	}
	void type()
	{
		cout << "\tSelect a Genre for questions" << endl;
		cout << "\t1.Education" << endl;
		cout << "\t2.General Knowledge" << endl;
		cout << "\t3.Sports" << endl;
		cout << "\t4.Video Games "  << endl;
		cout << "\t5.Exit" <<endl;

		cout << "\tEnter your option: ";
		cin >> option;
	}
	void edu()
	{
		system("cls");
		header();
		cout << "\t Q1. Who Developed C++? \n\n\t A.Bjarne Stroustrup \n\t B.Brendan Eich \n\t C.Alan Kay \n\t D.Milan Melkovinec" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x << endl;
			cout << " \t Press Enter! ";
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
	getch();
		system("CLS");
		header();

		cout << "\t Q2. Which of the following is an Object Oriented Language? \n\t A.HTML \n\t B.CSS \n\t C.JAVA \n\t D.C" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q3. Which loop does not exist in C++? \n\t A.While \n\t B.For in \n\t C.For \n\t D.Do While" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q4. What is the full form of HTML \n\t A.HighText Machine Language  \n\t B.HyperText Markup Language \n\t C.HyperText Markup Link  \n\t D.Hypertext Machine Link" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q5. How to print Output in C++? \n\t A.cout<< \n\t B.Cout<< \n\t C.cout>> \n\t D.Cout =" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q6. How to take Input in C++?  \n\t A.cin>> \n\t B.Cin>> \n\t C.cin<< \n\t D.Cin =" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << " \t Q7. Which of these is an Operating System \n\t A.Microsoft Office \n\t B.SQL \n\t C.macOS \n\t D.Php" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q8. What is Windows \n\t A.Application \n\t B.Operating System \n\t C.Website \n\t D.Game" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q9. Which of these is not a programming language \n\t A.Linux \n\t B.Python \n\t C.JAVA \n\t D.C" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q10. People who write computer codes are known as? \n\t A.Analyst \n\t B.Professor \n\t C.Programmers \n\t D.Coder" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
	}

	void gen()
	{
		system("cls");
		header();
		cout << "\t Q1. Which is the largest planet in the solar system? \n\n\t A.Saturn \n\t B.Mars \n\t C.Jupiter \n\t D.Mercury" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x << endl;
			cout << " \t Press Enter! ";
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q2. Who is the financial capital of India? \n\t A.Gujrat \n\t B.Mumbai \n\t C.Hyderabad \n\t D.Delhi" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q3. Where is the Great Pyramid of Giza located? \n\t A.Giza \n\t B.Egypt \n\t C.Paris \n\t D.Dubai  " << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q4. How many teeth does an adult human have? \n\t A.32  \n\t B.30 \n\t C.40 \n\t D.35" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q5. Which is the world\'s largest ocean? \n\t A.Atlantic \n\t B.Indian \n\t C.Pacific \n\t D.Arctic" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q6. Which is the largest internal organ in the human body? \n\t A.Liver \n\t B.Stomach \n\t C.Brain \n\t D.Kidneys " << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << " \t Q7. Who invented the telephone? \n\t A.Steve Jobs \n\t B.Alexander Graham Bell \n\t C.Newton \n\t D.Martin Cooper" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q8. Which is the largest continent? \n\t A.Africa \n\t B.Asia \n\t C.Antarctica \n\t D.Europe" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q9. What is the fastest animal? \n\t A.Cheetah \n\t B.Penguin \n\t C.Tiger \n\t D.Lion" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q10. How many states are there in india? \n\t A.18 \n\t B.32 \n\t C.28 \n\t D.15" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
	}
	void sport()
	{
		system("cls");
		header();
		cout << "\t Q1. What is the National Game of India? \n\n\t A.Kabaddi \n\t B.Cricket \n\t C.Hockey \n\t D.Kabaddi" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x << endl;
			cout << " \t Press Enter! ";
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q2. Who was the Captain of Team India, When India Won Their First WorldCup? \n\t A.Kapil Dev \n\t B.Sunil Gavaskar \n\t C.Saurav Ganguly \n\t D.Mohammed Azharuddin " << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q3. Who won The First Cricket World Cup? \n\t A.India \n\t B.West Indies \n\t C.Australia \n\t D.Pakistan" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q4. Where were the first Olympic games held? \n\t A.Egypt  \n\t B.Athens \n\t C.Spain \n\t D.Greece" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q5. How many players are there on the Kabbadi team? \n\t A.7 \n\t B.11 \n\t C.9 \n\t D.10" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q6. In which game India has won the most number of Olympic medals? \n\t A.Shooting \n\t B.Badminton \n\t C.Hockey \n\t D.Running" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << " \t Q7. In which country the game of chess originated? \n\t A.China \n\t B.India \n\t C.Brazil \n\t D.Japan" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q8. Who is the Top Goal scorer For India in Football? \n\t A.Abhishek Yadav \n\t B.Sunil Chetri \n\t C.Jeje Lalpekhlua \n\t D.Abhishek Yadav" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q9. Who Won the Most BallonD'or in Football History? \n\t A.Cristiano Ronaldo \n\t B.Leonel Messi \n\t C.Neymar jr \n\t D.Robert Lewandowski" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q10. Which country won most kabaddi world cup? \n\t A.Iran \n\t B.Pakistan \n\t C.India \n\t D.South Korea" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
	}
  void vdgames()
  {
  
  system("cls");
		header();
		cout << "\t Q1. 1.Most downloaded game in 2022 ? \n\t A. Minecraft \n\t B. Grand Theft Auto V \n\t C. PlayerUnknown's Battlegrounds \n\t D. Valorant" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x << endl;
			cout << " \t Press Enter! ";
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q2. when was Counter-strike global offensive released ? \n\t A. 21st Aug,2011 \n\t B. 21st Nov,2012 \n\t C. 6th Aug,2011 \n\t D. 21st Aug,2012" << endl;
		cin >> ch2;
		if (ch2 == 'd' || ch2 == 'D')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q3. 3.What is the first game to sell more than 100M copies ? \n\t A. Super Mario Bros	 \n \t B. World of Warcraft \n\t C. Grand Theft Auto: The Lost and Dammned \n\t D. Minecraft" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q4. Which video game features a futuristic version of football with cars ? \n\t A. Stardew valley \n\t B. Rocket League \n\t C. Dropzone \n\t D. Jeep thrill" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q5. Which is the best Selling video game of All-time ? \n\t A. Minecraft \n\t B. Grand Theft Auto V \n\t C. Cyberpunk \n\t D. Tetris" << endl;
		cin >> ch2;
		if (ch2 == 'b' || ch2 == 'B')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q6. 6.The first version of Call of Duty was released in ? \n\t A. 2006 \n\t B. 2000 \n\t C. 2004 \n\t D. 2003" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << " \t Q7.7 What is the best selling video game console of all-time ? \n\t A. Play Station 2 \n\t B. Nintendo DS \n\t C. Xbox 360 \n\t D. Game boy" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q8. 8 Valorant is created by which Organisation \n\t A. Epic Games \n\t B. Ubisoft \n\t C. Valve \n\t D. Riot" << endl;
		cin >> ch2;
		if (ch2 == 'd' || ch2 == 'D')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q9.  Which team won the First ever LAN event in Valorant \n\t A. Cloud 9 \n\t B. Team Liquid \n\t C. Sentinels \n\t D. Fanatic" << endl;
		cin >> ch2;
		if (ch2 == 'c' || ch2 == 'C')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();
		system("CLS");
		header();

		cout << "\t Q10. Which is the most viewed game on Twitch.tv in 2022 \n\t A. Dota 2 \n\t B. Apex Legends	 \n\t C. Grand Theft Auto V	\n\t D. Valorant" << endl;
		cin >> ch2;
		if (ch2 == 'd' || ch2 == 'D')
		{
			x = x + 10;
			cout << " \t Great! Your Game score is: " << x;
		}
		else
		{
			cout << " \t Sorry wrong answer " << endl;
			cout << " \t Press Enter! ";
		}
		getch();	
  }
	void footer()
	{
		cout << "\n\t========================================================================" << endl;
		cout << "\t=============================    Result    =============================" << endl;
		cout << "\t========================================================================" << endl;
	}
	void user()
	{
		char ch1[100];
		cout << "\t Enter Your Name : ";
		cin >> ch1;
		cout << "\n\tWelcome " << ch1 << endl
			 << endl;
	}
	void results()
	{
		if (x == 100)
		{
			cout << " \t No cheating...... You have done this earlier also.";
		}
		else if (x == 90)
		{
			cout << " \t You are extremely intelligent Your Score is " << x;
		}
		else if (x == 80)
		{
			cout << " \t You are intelligent Your Score is " << x;
		}
		else if (50 == x || x == 70 || x == 60)
		{
			cout << " \t You are average Your Score is " << x << "Better luck next time";
		}
		else
		{
			cout << " \t Not even 5 questions right...better luck next time";
			getch();
			system("cls");
		}
	}
};

int main()

{
	char a;
	system("cls");
//	system ("color E4");
	gameLogic obj;
	start:
			system ("color E4");
	obj.header();
	obj.user();
	obj.type();
	if (obj.option == 1)
	{
			system("color 0b");
		obj.edu();
		obj.footer();
		obj.results();
		getch();
		 cout<<"do you want to play again y or n "<<endl;
    cin>>a;
		 if (a=='y'||a=='Y')
    {
    	system("cls");
    
		goto start;
	}
	
	}
	else if (obj.option == 2)
	{
			system("color 30");
		obj.gen();
		obj.footer();
		obj.results();
		getch();
		 cout<<"do you want to play again y or n "<<endl;
    cin>>a;
		 if (a=='y'||a=='Y')
    {
    		system("cls");
		goto start;
	}
	
	}
	else if (obj.option == 3)
	{
			system("color 8e");
		obj.sport();
		obj.footer();
		obj.results();
		getch();
    
    cout<<"do you want to play again y or n "<<endl;
    cin>>a;
    if (a=='y'||a=='Y')
    {
    	system("cls");	
		goto start;
    
	}
	
    
	}
		else if (obj.option == 4)
	{
			system("color bf");
		obj.vdgames();
		obj.footer();
		obj.results();
		getch();
    
    cout<<"do you want to play again y or n "<<endl;
    cin>>a;
    if (a=='y'||a=='Y')
    {
    	system("cls");	
		goto start;
    
	}
	
    
	}
	
	else if (obj.option == 5)
	{
		system("color 80");
		system("cls");
		cout << "See you later!";
		getch();
		system("exit");
	}
	
	
	else
	{
		cout << endl << "\t\tTry again" << endl;
		
	}

	return 0;
}

