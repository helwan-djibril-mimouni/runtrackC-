#include <iostream>
#include <string>
#include <vector>

struct Vol {
    std::string destination;
    int tempsDeVol;
};

int main() {
    std::vector<Vol*> vols;

    char choix;
    do {
        std::cout << "\nMenu : " << std::endl;
        std::cout << "1. Ajouter une destination" << std::endl;
        std::cout << "2. Supprimer une destination" << std::endl;
        std::cout << "3. Afficher les destinations" << std::endl;
        std::cout << "4. Modifier une destination" << std::endl;
        std::cout << "5. Quitter" << std::endl;
        std::cout << "Votre choix : ";
        std::cin >> choix;

        switch (choix) {
            case '1': {
                Vol* vol = new Vol;

                std::cout << "Destination : ";
                std::cin >> vol->destination;

                std::cout << "Temps de vol depuis Marseille : ";
                std::cin >> vol->tempsDeVol;

                vols.push_back(vol);
                break;
            }
            case '2': {
                if (!vols.empty()) {
                    std::cout << "Indice de la destination à supprimer : ";
                    size_t indice;
                    std::cin >> indice;

                    if (indice >= 0 && indice < vols.size()) {
                        delete vols[indice];
                        vols.erase(vols.begin() + indice); 
                    } else {
                        std::cout << "Indice invalide." << std::endl;
                    }
                } else {std::cout << "Aucune destination à supprimer." << std::endl;
                }
                break;
            }
            case '3': {
                std::cout << "Destinations :" << std::endl;
                for (size_t i = 0; i < vols.size(); ++i) {
                    std::cout << "Destination " << i + 1 << " : " << vols[i]->destination << ", Temps de vol : " << vols[i]->tempsDeVol << std::endl;
                }
                break;
            }
            case '4': {
                if (!vols.empty()) {
                    std::cout << "Indice de la destination a modifier : ";
                    size_t indice;
                    std::cin >> indice;
                    indice --;
                    if (indice < vols.size()) {
                        std::cout << "Nouvelle destination : ";
                        std::cin >> vols[indice]->destination;
                        std::cout << "Nouveau temps de vol depuis Marseille : ";
                        std::cin >> vols[indice]->tempsDeVol;
                    } else {
                        std::cout << "Indice invalide." << std::endl;
                    }
                } else {
                    std::cout << "Aucune destination à modifier." << std::endl;
                }
                break;
            }
            case '5': {
                break;
            }
            default: {
                std::cout << "Choix invalide." << std::endl;
                break;
            }
        }
    } while (choix != '5');

    for (size_t i = 0; i < vols.size(); ++i) {
        delete vols[i];
    }

    return 0;
}