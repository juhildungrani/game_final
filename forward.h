//Forward player class to walk forward
class forward(){
    friend class fighting;
    friend class hurdle;
    friend class initial;
    public:
void StepAhed() // the use of this function is to move forward in text based game
{
    int choice;

    std::cout<<"1.  Bingo! Let's move forward\n";
    std::cout<<"2.  It's dangerours time right now so be Realax and chill\n";
    std::cout<<"3.  Ahhh, It's time to take our Step back..\n\n";
    std::cout<<"#........Now please ENTER your Choice........#\n";

    std::cin>> choice;
    if (choice==1){ //choice is declared on line 6
        int temp = rand () % 100 +1;                      // It will work on probability concepts so each time it will trigger diffrent output
        std::cout<<"You are moving forward ...\n";
        if (temp>=50){ 
            //Encounter an animal
           CreateAnimal();                               // this function will assign random animal which is located in hurdle.h
            string TempName = AnimalName[rand() % 5];
            std::cout<< "A"<<TempName<<" Prepares to fight..\n";
            CurrentAnimal = TempName;
            sleep(1);
            combat();                                   //  this function will open in fighting.h file 
        }
        std::cout<<"You find nothing intresting\n";
        sleep(2);
        init.Hud();                                   // this function is in initialfile.h
    }
    else if (choice==2){
        std::cout<<"Now you are in your submarine and enjoying Caviar.....\n";
        if(TotalHealth<=80){
            TotalHealth += 10* level;
        }
        std::cout<<"Eating Cavir impoves your health by "<< TotalHealth<<endl;
        sleep(2);
        init.Hud();
    }
    else if (choice==3){
        int temp = rand () % 100 +1;
        std::cout<<"You are moving Backward ...\n";
        if (temp>=50){
            //Encounter an animal
            CreateAnimal();
            std::string TempName = AnimalName[rand() % 5];
            std::cout<< "A"<<TempName<<" Prepares to fight..\n";
            CurrentAnimal = TempName;
            sleep(1);
            combat();
        }
        std::cout<<"You find nothing intresting\n";
        sleep(2);
        init.Hud();

    }
    else{
        std::cout<<"Sorry I didn't expect that Please try again one more time...\n\n";
        sleep(1);
        init.Hud();             //see comment on line 31
    }
};