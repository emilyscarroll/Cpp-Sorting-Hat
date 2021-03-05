```
#include <iostream>
int main() {
  
  //result counters
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int response1;
  int response2;
  int response3;
  int response4;
  
  //welcome message
  std::cout << "Welcome to The Sorting Hat Quiz! Please answer each question honestly to determine your Hogwarts house!\n";
  
  //first question
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
 
  //user inputted answer
  std::cout << "Enter your answer:\n";
  std::cin >> response1;
  
  //point calculation
  if(response1 == 1) {
    hufflepuff++;
  }
   else if (response1 == 2) {
    slytherin++;
  }
  else if (response1 == 3) {
    ravenclaw++;
  }
  else if (response1 == 4) {
    gryffindor++;
  }
  else {
    std::cout << "Invalid response\n";
  }

  //Second question
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  //user inputted answer
  std::cout << "Enter your answer:\n";
  std::cin >> response2;
  //point calculation
  if (response2 == 1) {
    gryffindor++;
    ravenclaw++;
  }
  else if (response2 == 2) {
    hufflepuff++;
    slytherin++;
  }
  else {
    std::cout << "Invalid response\n";
  }
 
  //third question
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";
  
  //user inputted answer
  std::cout << "Enter your answer:\n";
  std::cin >> response3;
  
  //point calculation
  if(response3 == 1) {
    slytherin++;
  }
   else if (response3 == 2) {
    hufflepuff++;
  }
  else if (response3 == 3) {
    ravenclaw++;
  }
  else if (response3 == 4) {
    gryffindor++;
  }
  else {
    std::cout << "Invalid response\n";
  }
  
  //fourth question
  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined with ancient buildings\n";
  
  //user inputted answer
  std::cout << "Enter your answer:\n";
  std::cin >> response4;
  
  //point calculation
  if(response4 == 1) {
    hufflepuff++;
  }
   else if (response4 == 2) {
    slytherin++;
  }
  else if (response4 == 3) {
    gryffindor++;
  }
  else if (response4 == 4) {
    ravenclaw++;
  }
  else {
    std::cout << "Invalid response\n";
  }

  //Thank you output statement
  std::cout << "Thank you for completing the quiz!\n";

  //final calculation
  std::string house;
  int max = 0;
  if (gryffindor > max) {
    max = gryffindor;
  house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  //final output statement
  std::cout << "Your Hogwarts house is " << house << "!\n";
 }
