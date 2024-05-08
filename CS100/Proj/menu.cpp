#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

//Example functions
void BETA_BattleMenu();
void BETA_CharacterMenu();
void BETA_LocationMenu();
void BETA_EditWorldMenu();
void BETA_MainMenu();
void BETA_EditbyNPCMenu();
void BETA_EditNPCMenu();

int main(){
    cout<<endl;
    cout<<endl;
    BETA_BattleMenu();
    cout<<endl;
    cout<<endl;
    BETA_CharacterMenu();
    cout<<endl;
    cout<<endl;
    BETA_LocationMenu();
    cout<<endl;
    cout<<endl;
    BETA_MainMenu();
    cout<<endl;
    cout<<endl;
    BETA_EditbyNPCMenu();
    cout<<endl;
    cout<<endl;
    BETA_EditNPCMenu();
    cout<<endl;
    cout<<endl;
    BETA_EditWorldMenu();
    return 0;
}
void BETA_BattleMenu(){
    cout<<"------------------------------------------------------"<<endl;
    cout<<"======================BATTLE MENU====================="<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Great Red Dragon takes a deep breath..."<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"YOUR STATS | HP: 13 / 16 | MANA: 4 / 10 | Status: Fine"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Choose an Action:"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"1: Basic Attack"<<endl;
    cout<<"2: Fireball"<<endl;
    cout<<"3: Mage Armor"<<endl;
    cout<<"4: Grasping Roots"<<endl;
    cout<<"I: Inspect Enemy"<<endl;
    cout<<"D: Dodge/Defend"<<endl;
    cout<<"R: Attempt to Run"<<endl;
    cout<<"-----------------"<<endl;
}
void BETA_CharacterMenu(){
    cout<<"--------------------------"<<endl;
    cout<<"------Character Menu------"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"1: View Statistics"<<endl;
    cout<<"2: Inventory"<<endl;
    cout<<"3: Abilities"<<endl;
    cout<<"4: Level Up"<<endl;
    cout<<"5: Save Game"<<endl;
    cout<<"6: Return to Previous Menu"<<endl;
    cout<<"7: Quit to Main Menu"<<endl;
    cout<<"--------------------------"<<endl;
}
void BETA_LocationMenu(){
    cout<<"----------------------------"<<endl;
    cout<<"--------Generic Town--------"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"1: Talk to Shopkeeper Jorgen"<<endl;
    cout<<"2: (!)Talk to Elder Rashok"<<endl;
    cout<<"3: (!)Inspect Well Water"<<endl;
    cout<<"4: Travel"<<endl;
    cout<<"5: Character Menu"<<endl;
    cout<<"----------------------------"<<endl;
}
void BETA_EditWorldMenu(){
    cout<<"-----------------------------------------"<<endl;
    cout<<"~~~~~~~~~~~~~~~WORLD EDITOR~~~~~~~~~~~~~~"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"1: Edit by Location"<<endl;
    cout<<"2: Edit by NPC (List of all NPCs)"<<endl;
    cout<<"3: Edit by Item (List of all Items)"<<endl;
    cout<<"4: Edit by Quest (List of all Quests)"<<endl;
    cout<<"5: Save World"<<endl;
    cout<<"6: Return to Create Menu"<<endl;
    cout<<"-----------------------------------------"<<endl;
}
void BETA_MainMenu(){
    cout<<"----------------------------"<<endl;
    cout<<"**********MAIN MENU*********"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"1: New Game"<<endl;
    cout<<"2: Load Game"<<endl;
    cout<<"3: Create Mode"<<endl;
    cout<<"4: Quit"<<endl;
    cout<<"----------------------------"<<endl;
}
void BETA_EditbyNPCMenu(){
    cout<<"-----------------------------------------"<<endl;
    cout<<"~~~~~~~~~~~~~~~~WORLD NPCs~~~~~~~~~~~~~~~"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"1: Shopkeeper Jorgen | Generic Town"<<endl;
    cout<<"2: Elder Rashok | Generic Town"<<endl;
    cout<<"3: Troglodyte | Generic Town Water Supply"<<endl;
    cout<<"4: Mayor Quimby | Capital City"<<endl;
    cout<<"5: Spirit Healer Vo | Capital City"<<endl;
    cout<<"-----------------------------------------"<<endl;
}
void BETA_EditNPCMenu(){
    cout<<"-----------------------------------------"<<endl;
    cout<<"~~~~~~~~~~EDIT SHOPKEEPER JORGEN~~~~~~~~~"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Choose what to adjust:"<<endl;
    cout<<"1: HP"<<endl;
    cout<<"2: Items Held"<<endl;
    cout<<"3: NPC Type"<<endl;
    cout<<"4: Location"<<endl;
    cout<<"5: Vendor Modifier"<<endl;
    cout<<"-----------------------------------------"<<endl;
}