#include<iostream>
#include<string>
#include<vector>
#include<map>

namespace open
{

    struct Gehaege{
            protected:

                std::map<std::string, int> zoo{ {"Giraffe", 10}, {"Löwen", 8}, {"Zebras", 20}, {"Affen", 35}, {"Pferde", 3} };

            public:

                void ausgabe()
                {
                    std::cout << std::endl;
                    for(auto zaehler : zoo) std::cout << "Gehäge der: " << zaehler.first << ";  " << "Anzahl der Tiere: " << zaehler.second << std::endl;
                    std::cout << std::endl;
                }

                Gehaege tier_zuordnen(open::Gehaege neu_zoo){

                    std::string auswahL;

                    std::cout << "Geben Sie den Namen des Gehäges ein in das Sie das neue Tier stecken wollen" << std::endl;

                    std::cin >> auswahL;

                    int keintreffer = 0;

                        for (auto& zaehler : neu_zoo.zoo){
                            if(auswahL == zaehler.first){
                                zaehler.second = zaehler.second + 1;  
                            }
                            else keintreffer++;
                        }
                    if(keintreffer == zoo.size()) std::cout << "Das Eingegebene Gehäge gibt es nicht!" << std::endl;

                    return neu_zoo;
                }
                
    };

    struct Gehaegeoptionen
    {
        private:

            int anzahl;
            std::map<std::string, int> gehäge_anztier;
            int groesse;

            open::Gehaege zuordnen(open::Gehaege zo){
                zo.ausgabe();
                zo = zo.tier_zuordnen(zo);
                return zo;
            };


        public:

            open::Gehaege optionen(open::Gehaege zo)
            {
                int auswahl;

                while(auswahl != 0)
                {
                    std::cout << std::endl;
                    std::cout << "***********Optionen***********" << std::endl;
                    std::cout << "1) Tier einem Gehäge zuordnen " << std::endl;
                    std::cout << "2) Gehäge bearbeiten          " << std::endl;
                    std::cout << "3) Gehäge ausgeben            " << std::endl;
                    std::cout << "4) Beenden                    " << std::endl;
                    std::cout << std::endl;

                    std::cin >> auswahl;

                    switch(auswahl)
                    {

                        default:
                            std::cout << "Irreguläre Eingabe" << std::endl;
                            break;

                        case 1:
                            zo = zuordnen(zo);
                            break;

                        case 2:
                            std::cout << "Code noch nicht implementiert" << std::endl;
                            break;

                        case 3:
                            zo.ausgabe();
                            break;

                        case 4:
                            auswahl = 0;
                            break;
                    }
                } 

                return zo; 
            }

    };
}

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

            open::Gehaege gehaege(open::Gehaege zo){
                open::Gehaegeoptionen neuesgehäge;
                neuesgehäge.optionen(zo);
                return zo;
            }

        public:

            int auswahl;

            void schleife(open::Gehaege zo)
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
                            zo = gehaege(zo);
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


int main() {
    local::Tiere katze;
    open::Gehaege zo;
    katze.schleife(zo);

    return 0;
}