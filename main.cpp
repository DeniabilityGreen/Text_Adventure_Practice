#include <iostream>
#include <string>
using namespace std;

int main(){
    
   std::cout << "            A Very Strange Dream.          \n" <<std:: endl;
//---------------Story Start-----------------------------------------------------------------------------------------------------
std::cout << " It is a cold, dark and windy night. The rain is coming down heavily and you can not sleep."<<std::endl;
std::cout << " You decide to get up instead of laying in the dark with your thoughts running around." <<std::endl; 
std::cout << "  \n  What Is the first thing you do?:\n" <<std::endl;

//-------------------------------branches----------------------------------------------------------------------------------------------
int branch_choice;
string choice = "Make your choice: ";
string notAnOption = "Try again. That is not an option!";

std::cout<< " 1. Put on your slippers? \n" <<std::endl;
std::cout<< " 2. Have a sip of water? \n" <<std::endl;
std::cout<< " 3. Go to the toilet \n" <<std::endl;

int branch_choice_slippers = 1;
int branch_choice_water = 2;
int branch_choice_toilet = 3;

std::cin>> branch_choice;
//----------------------------branch 1
if (branch_choice == branch_choice_slippers) {
    
std::cout<< "You go to put on your slippers and you notice that one has a hole. This really bothers you for some reason. You sigh heavily and decide that there\'s no point in wearing holey slippers, you’ll just get some socks. You pick out your favourite fluffy socks for warmth.\n They are:\n"<<std::endl;

std::cout<< " 1. Pink with yellow spots \n"<<std::endl;
std::cout<< " 2. White with glitter\n"<<std::endl;
std::cout<< " 3. Black\n"<<std::endl;

int socks_tries = 0;
int socks_choice;
std::cin>>socks_choice;

int socks_choice_1 = 1;
int socks_choice_2 = 2;
int socks_choice_3 = 3;



while (socks_choice != socks_choice_3 && socks_tries <=1) {
std::cout<< " Oh yeah, I need to do the laundry! I will have to wear a different pair."<<std::endl; 
std::cout<< "\nSad times. \n" <<std::endl;
socks_tries++;
std::cout<< "Try again.Maybe another pair?\n" <<std::endl;
std::cin >> socks_choice;
    
    
}
 
if (socks_choice == socks_choice_3) {
   std::cout<< " You choose the black slippers. As you begin to pull one on you suddenly feel like you’re being pulled at by the sock, into the sock. You have a real moment of panic before you are fully sucked into your sock before you can even make a sound about it.\n"<<std::endl; 
}
    
   else {
       std::cout<< notAnOption <<std::endl;
       

       } 

}

//---------------------branch 2--------------------------------------------------------------
else if (branch_choice == branch_choice_water) {
        std::cout<< " You go to have a sip of water and knock the glass over. My my, we ARE clumsy. Oh well. At this point you: \n"<<std::endl;

std::cout<< " 1. Lay back down on your bed for a mini pity party \n"<<std::endl;
std::cout<< " 2. Get up to clean the water up and maybe get yourself a refill. \n"<<std::endl;
std::cout<< " 3. Stare at the spilled water angrily and curse yourself for not having a bottle instead. \n"<<std::endl;

int water_tries = 0;
int water_choice;
std::cin>>water_choice;

int water_choice_1 = 1;
int water_choice_2 = 2;
int water_choice_3 = 3;

while (water_choice != water_choice_2 && water_tries <=2) {
std::cout<< " Sort your life out! It’s just a bit of spilled water. Just do something about it then!"<<std::endl; 
water_tries++;
std::cout<< "Try again.Make better choices!\n" <<std::endl;
std::cin >> water_choice;
    
    
}
 
if (water_choice == water_choice_2) {
   std::cout<< "You choose to get up and clean the water up(and maybe get yourself a refill). \nYou swing your legs off the bed and put your feet down, only to step right into the puddle of water. \nThat was silly. \nAnyways, so, now your feet are wet, \nbut it feels like you may have bigger problems as you start to fall into what seemed like a very small amount of water in a glass, \nbut now seems to have become a huge puddle that is pulling you in and under. \nYou just grab a lungful of air before you are submerged...\n"<< std::endl;
   }
    
   else {
       std::cout<< notAnOption <<std::endl;
       
      
       
       } 




}

else if (branch_choice == branch_choice_toilet){
    std::cout<< " You decide that the best plan of action is to evacuate your bladder first.  \nYou don’t know why you drank all that tea before you went to bed. \nYou feel your way down the darkened hallway to the bathroom because you just can not even handle the light just yet. \nYou make it after only stubbing your toe once and pull down your undies to plonk your butt down on the freezing cold toilet seat. \nYou: \n"<<std::endl;
}
std::cout<<"  \n" <<std::endl;
std::cout<<"  \n" <<std::endl;
std::cout<<"  \n" <<std::endl;
    





    
    
    
    
    
    
    
    
    
    
    
    return 0;
}