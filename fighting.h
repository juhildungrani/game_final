class fighting(){
    friend class initial;
    friend class hurdle;
    friend class forward;
    public:
    void combathud(){
        sleep(3);
        std::cout<<"Name: "<<name<<"     |   Animal Name: "<<currentAnimal<<std::endl;
        std::cout<<"Player health: "<< TotalHealth<<"     | Animal Health: "<<AnimalHealth<<std::endl;
        stepAhed();
    }

    void combat(){
        combathud();
        int playerAttack;
        int playerDamage = 8* level / 2;
        int AnimalAttack = 5 * AnimalLevel / 2;

        if ( TotalHealth >= 1 && AnimalLevel>=1){
            std::cout<<"\n";
            std::cout<<"1. Attack\n";
            std::cout<<"2. Block\n";
            std::cout<<"3. Run\n\n\n";
            
            std::cin>> playerAttack;
            if (playerAttack = 1){
                //Attack
                std::cout<<"You have performed an Attack..."<< playerDamage<<" to the "<<CurrentAnimal<<std::endl;
                AnimalHealth = AnimalHealth - playerDamage;
                sleep(1);
                combathud();

                if (AnimalHealth>=1){
                    std::cout<<"\n Monster is Attacking...";
                    TotalHealth = TotalHealth - AnimalAttack;
                    std::cout<<"You suffered "<<AnimalAttack<<" Health "<< TotalHealth << std::endl;
                    //change the function

                    if (TotalHealth <= 0){
                        TotalHealth = 0;
                    }
                }
                else if (AnimalHealth<=0){
                    AnimalHealth = 0;
                }
                sleep(1);


            }
                else if (playerAttack = 2){
                //block
                int i = rand() % 100+1;
                if (i<=50){
                std::cout<<"You have blocked incomming attack...\n";
                heal = level * 10/2;
                TotalHealth += heal;
                std::cout<<"You have been healed for "<<heal<< std::endl;
                sleep(1);
                combat(); 
            }
            else{
                std::cout<<"you failed the savage attack...\n";
                TotalHealth -= AnimalAttack;
                std::cout<<"You were hitten by Animal for cost of "<<AnimalAttack;
                combat();

            }
            }
            else if (playerAttack = 3){
                //run
                int i = rand() % 100+1;
                if (i<=50){
                    std::cout<<"You run away..\n";
                    init.hud();

                }
                else{
                    std::sout<<"You failed to escape Monster has attack on you...\n";
                    TotalHealth -= AnimalAttack;
                    std::cout<<"your health is "<<TotalHealth;
                    combat();
                    sleep();
                    
                }

            }
            else {
                std::cout<<"\nWe did not know Please try again..\n";
                sleep(2);
                combat();
            }
        }
    }

};