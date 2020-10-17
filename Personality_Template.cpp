// Personality_Template.cpp
//Use this as a template for simple personality quizzes in c++

#include <iostream>
#include <string> 
#include <thread>
#include <chrono>
#include <random>

using namespace std;

int main()
{//here are the variables
	//these are outcomes;change names when using templates ex:double Superman;there are ten, but you dont have to use all, or can add more
	double var1 = 0;
	double var2 = 0;
	double var3 = 0;
	double var4 = 0;
	double var5 = 0;
	double var6 = 0;
	double var7 = 0;
	double var8 = 0;
	double var9 = 0;
	double var10 = 0;
	//input ints
	int inputtest;
	int input1;
	int input2;
	int input3;
	int input4;
	int input5;
	int input6;
	int input7;
	int input8;
	int input9;
	int input10;
	int input11;
	int input12;
	//options
	string optionstest = " 1. walla \n 2. achla \n 3. achi \n 4. yafe";
	string options1;
	string options2;
	string options3;
	string options4;
	string options5;
	string options6;
	string options7;
	string options8;
	string options9;
	string options10;
	string options11;
	string options12;
	//these are question texts;again there are twelve, use as many or as little as you want
	string qtest = "What is the best one?";
	string q1;
	string q2;
	string q3;
	string q4;
	string q5;
	string q6;
	string q7;
	string q8;
	string q9;
	string q10;
	string q11;
	string q12;
	//here are misc vars.
	string again = "alright, on to the next question";
	string choices = "(1, 2, 3, 4)";
	string quizname = "Quiz template";//put the string in a "what kind of " or "do you have " something that will fit into a "Today you will be figuring out " statment
	string name;
	string nonnumreponse = "That's not 1,2,3 or 4! Try again!";
	//here is the introduction
	cout << "Hello, would you mind telling me your name?" << endl;
	cin >> name;
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "It's nice to meet you " << name << ". Today you will be figuring out " << quizname << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	//here are the questions;the following one will show the structure, then there will be the skeleton of 12

	cout << qtest << endl << optionstest << endl;
	cin >> inputtest;
	switch (inputtest) {
	default:
		cout << nonnumreponse;
	case 1:
		var1 += 1;
		break;
	case 2:
		var2 += 1;
		break;
	case 3:
		var3 += 1;
		break;
	case 4:
		var4 += 1;
		break;
	}
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << again << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	//repeat this format however you want, switching input, options, and q's
}
