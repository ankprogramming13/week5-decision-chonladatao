#include <iostream>
#include <string>
using namespace std;
int main () {

  string playerName;
  int score = 0, life = 3;
  char choice1, choice2, choice3;

  // ประกาศตัวแปรเพื่อรับการเลือกคำตอบของผู้เล่น
  // เช่นการเป็น ตัวเลขให้ประกาศเป็น int choice1;
  // ถ้ารับคำตอบเป็นตัวอักษร ให้ประกาศเป็น char choice1;
  //

  cout << "Welcome to Mini Adventure Game." << endl;
  cout << "Please enter your name : ";

  // เขียนคำสั่งรับชื่อ แล้วเก็บในตัวแปร playerName
    cin>>playerName;

    if (playerName.length()> 8) {
    playerName.erase(playerName.begin()+6, playerName.end());
    cout <<"You name has been changed to" << playerName <<endl;
    }else{
    cout << playerName << endl;
    }

  // เขียนคำสั่งแสดงผล คำบรรยายสภาพแวดล้อม สถานการณ์ และคำทักทายที่มีชื่อตัวละคร
  // เช่น cout << "Hello " << playerName << ". You are in Robinson. You are walking happily. Suddenly you realize that forgetting the wallet."
  // << " But you're lazy to get back to get it." << endl;

    cout << "Hi !!!" << playerName << ". You came to The concert, you forgot to bring a Ticket You will do how?.";
    cout << "But you will waste time getting back to your Ticket." << endl;

  // เขียนคำสั่งแสดงผล คำถามให้ผู้ใช้ตัดสินใจ
  // เช่น cout << "What should you do? (A)sk for money,(S)teal : ";
    cout << "What should you do? (A)Let the mother bring ticket, (B)Buy a new ticket:";

  // เขียนคำสั่งรับคำตอบจากผู้ใช้ แล้วให้คะแนนหรือทำโทษ จากการตัดสินใจนั้น
  // เช่น
  //     cin >> choice1;
  //     switch(choice1) {
  //        case "S" : score += 10; life -= 1; cout << "You stole money from people. Now you can shopping.";
  //        case "A" : score += 50; cout << "You ask for money from people then you get 100 baht. You are very happy. Now you can shopping."
  //     }

    cin >> choice1;
    switch(choice1){
        case 'B' : score+= 15; life-= 1; cout << "Let's take the money to pay at the place to the ticket." << endl; break;
        case 'A' : score+= 40; cout << "Call my father to pay the ticket." <<endl; break;
        default : cout << "You Stupid" <<endl;
        }


  // ฝึกสร้างสถานการณ์และสร้างเงื่อนไข อีก 2 สถานการณ์
    cout << "Enough money to pay for food" << endl;
    cout << "What should you do? (A)Let the father bring money, (B)Borrow friend money:";
    cin >> choice2;
        switch(choice2){
        case 'B' : score+= 15; life-= 1; cout << "Have to pay the food." << endl; break;
        case 'A' : score+= 40; cout << "My father paid for a food." <<endl; break;
        default : cout << "You Stupid" <<endl;
        }


    cout << "Friend disappears" << endl;
    cout << "What should you do? (A)Call the police, (B)Find a friend:";
    cin >> choice3;
        switch(choice3){
        case 'B' : score+= 15; life-= 1; cout << "will meet friend." << endl; break;
        case 'A' : score+= 40; cout << "Police will help you find a friend." <<endl; break;
        default : cout << "You Stupid" <<endl;
        }


  // สรุปผลคะแนนและพลังชีวิต เช่น cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;

  cout << "Congratulations! You win the game with" << score << "see you next time on next game.GG." << endl;
  return 0;
}
