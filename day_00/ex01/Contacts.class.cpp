#include "Contacts.class.hpp"

Contacts::Contacts(void)
{
}

Contacts::~Contacts(void)
{
}

void            Contacts::setFirstname(std::string firstname)
{
    _firstname = firstname;
}
void            Contacts::setLastname(std::string lastname)
{
    _lastname = lastname;
}
void            Contacts::setNickname(std::string nickname)
{
    _nickname = nickname;
}
void            Contacts::setLogin(std::string login)
{
    _login = login;
}
void            Contacts::setPostal(std::string postal)
{
    _postal = postal;
}
void            Contacts::setEmail(std::string email)
{
    _email = email;
}
void            Contacts::setPhone(std::string phone)
{
    _phone = phone;
}
void            Contacts::setBirth(std::string birth)
{
    _birth = birth;
}
void            Contacts::setMeal(std::string meal)
{
    _meal = meal;
}
void            Contacts::setUnderwear(std::string underwear)
{
    _underwear = underwear;
}
void            Contacts::setSeceret(std::string seceret)
{
    _seceret = seceret;
}

std::string            Contacts::prepareLine(std::string line)
{
    if (line.length() > 9)
        line = line.substr(0, 9) + ".";
    for (int spaces = 0; spaces < line.length() - 10; spaces++)
    {
        line += " ";
    }
    return line;
}

void            Contacts::printRow(int index)
{
    std::cout << "|"
    << prepareLine(std::to_string(index))
    << "|"
    << prepareLine(_firstname)
    << "|"
    << prepareLine(_lastname)
    << "|"
    << prepareLine(_nickname)
    << "|" << std::endl;
}

void        Contacts::displayInfo()
{
    std::cout   << std::endl
                << "Firstname: " << _firstname << std::endl
                << "Lastname: " << _lastname << std::endl
                << "Nickname: " << _nickname << std::endl
                << "Login: " << _login << std::endl
                << "Postal Address: " << _postal << std::endl
                << "Email: " << _email << std::endl
                << "Phone number: " << _phone << std::endl
                << "Birth Day: " << _birth << std::endl
                << "Favorite Meal: " << _meal << std::endl
                << "Underwear Color: " << _underwear << std:: endl
                << "Darkest Seceret: " << _seceret << std:: endl << std::endl;
}