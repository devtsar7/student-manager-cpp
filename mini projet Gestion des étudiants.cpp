#include <iostream>
#include <string>
#include <cassert>
#include <stdexcept>
#include <algorithm>
#include <vector>

class etudiant
{
private:
    std::string eleve;
    double note;

public:
    etudiant(std::string e, double n) : eleve(e), note(n)
    {
        if (note < 0 || note > 20)
        {
            throw std::invalid_argument("note invalid :");
        }
    }
    void seteleve(std::string &e)
    {
        eleve = e;
    }
    void setnote(double &n)
    {
        if (n < 0 || n > 20)
        {
            throw std::invalid_argument("note invalid :");
            ;
        }
        else
            note = n;
    }
    std::string geteleve() { return eleve; }
    double getnote() { return note; }

    friend void afficher(const etudiant &e1, const etudiant &e2);
};
class etudiants
{
private:
    std::vector<etudiant> eleves;

public:
    void ajouteretudiant(const etudiant &e)
    {
        eleves.push_back(e);
    }
    void suprimeretudiant(const std::string &nom)
    {
        auto it = std::remove_if(eleves.begin(), eleves.end()) [&](const &etudiant e)
        {
            return e.geteleve() == nom;
        } if (it = eleves.end()){
            std::cout<<"aucun eleve trouver avec ce nom";
        }else {
            eleves.erase(it , eleves.end())
        }
    }
    



};
