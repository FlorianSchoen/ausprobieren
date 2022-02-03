#include<iostream>
#include<string>
#include<vector>
#include<map>

namespace local
{
    
    void warte(){
        char bedingung;
        while(bedingung != 'e')
        {
            std::cout << "Zum fortfahren druecken Sie die Taste e!" << std::endl;
            std::cin >> bedingung;

            if(bedingung != 'e') std::cout <<  "Irreguläre Eingabe" << std::endl;
        }
    }

    struct Tiere{
        private:

            std::string art;
            int alter = 0;
            float gewicht = 0;
            std::string name;

            void daten_tier(){
                std::cout << std::endl;
                std::cout << "Was ist es für ein Tier?" << std::endl;
                std::cin >> art;
                std::cout << "Wie alt ist das Tier?" << std::endl;
                std::cin >> alter;
                std::cout << "Wie viel wiegt das Tier (kg)?" << std::endl;
                std::cin >> gewicht;
                std::cout << "Wie heißt das Tier?" << std::endl;
                std::cin >> name;
                std::cout << std::endl;
            }

            void daten_ausgabe(){
                std::cout << std::endl;
                std::cout << "Tierart:                " << art << std::endl;
                std::cout << "Alter des Tieres:       " << alter << std::endl;
                std::cout << "Gewicht des Tieres(kg): " << gewicht << std::endl;
                std::cout << "Name des Tieres:        " << name << std::endl;
                std::cout << std::endl;

                warte();
            }

            void daten_aendern(){
                
                int auswahl_1 = 2;

                while(auswahl_1 != 0){

                        std::cout << std::endl;
                        std::cout << "********Auswahl********" << std::endl;
                        std::cout << "1) Tierart ändern      " << std::endl;
                        std::cout << "2) Alter ändern        " << std::endl;
                        std::cout << "3) Gewicht ändern      " << std::endl;
                        std::cout << "4) Name ändern         " << std::endl;
                        std::cout << "5) Änderungen verlassen" << std::endl;
                        std::cout << std::endl;

                        std::cin >> auswahl_1;

                        switch(auswahl_1)
                        {
                            default:
                                std::cout << std::endl;
                                std::cout << "Irreguläre Eingabe!" << std::endl;
                                std::cout << std::endl;
                                break;
                            
                            case 1:
                                std::cout << std::endl;
                                std::cout << "Geben Sie die neue Tierart ein!" << std::endl;
                                std::cin >> art;
                                std::cout << std::endl;
                                break;
                            
                            case 2:
                                std::cout << std::endl;
                                std::cout << "Geben Sie das neue Alter des Tieres an!" << std::endl;
                                std::cin >> alter;
                                std::cout << std::endl;
                                break;

                            case 3:
                                std::cout << std::endl;
                                std::cout << "Geben Sie das neue Gewicht an (kg)!" << std::endl;
                                std::cin >> gewicht;
                                std::cout << std::endl;
                                break;

                            case 4:
                                std::cout << std::endl;
                                std::cout << "Geben Sie den neuen Namen an!" << std::endl;
                                std::cin >> name;
                                std::cout << std::endl;
                                break;

                            case 5:
                                auswahl_1 = 0;
                                break;
                        }

                }
            }

        public:

            int auswahl;

            void schleife()
            {

                while(auswahl != 0)
                {
                
                    std::cout << std::endl;
                    std::cout << "******Optionen******" << std::endl;
                    std::cout << "1) Daten des Tieres " << std::endl;
                    std::cout << "2) Daten ausgeben   " << std::endl;
                    std::cout << "3) Daten ändern     " << std::endl;
                    std::cout << "4) Gehäge auswählen " << std::endl;
                    std::cout << "5) Beenden          " << std::endl;
                    std::cout << std::endl;

                    std::cin >> auswahl;

                    switch(auswahl)
                    {
                        default:
                            std::cout << "Irreguläre Eingabe" << std::endl;
                            break;

                        case 1: 
                            daten_tier();
                            break;

                      case 2:
                            daten_ausgabe();
                            break;

                        case 3:
                            daten_aendern();
                            break;

                        case 4:
                            std::cout << "Code noch nicht implementiert!" << std::endl;
                            //open::Gehäge neuesgehäge;
                            //neuesgehäge.optionen();
                            break;

                        case 5:
                            auswahl = 0;
                            break;

                    }
                }

            }

            Tiere(){
                auswahl = 1;
            }
    
    };

}

namespace open
{

    struct Gehäge
    {
        private:

            int anzahl;
            std::map<std::string, int> gehäge_anztier;
            int groesse;


        public:

            void optionen()
            {
                int auswahl;

                while(auswahl != 0)
                {

                    std::cout << "***********Optionen***********" << std::endl;
                    std::cout << "1) Tier einem Gehäge zuordnen" << std::endl;
                    std::cout << "2) Gehäge bearbeiten" << std::endl;
                    std::cout << "3) Beenden" << std::endl;

                    std::cin >> auswahl;

                    switch(auswahl)
                    {

                        default:
                            std::cout << "Irreguläre Eingabe" << std::endl;
                            break;

                        case 1:
                            std::cout << "Code noch nicht implementiert" << std::endl;
                            break;

                        case 2:
                            std::cout << "Code noch nicht implementiert" << std::endl;
                            break;

                        case 3:
                            auswahl = 0;
                            break;
                    }
                }  
            }



    };
}


int main() {
    local::Tiere katze;
    katze.schleife();

    return 0;
}