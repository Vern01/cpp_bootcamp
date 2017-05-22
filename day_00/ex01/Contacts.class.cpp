#include "Contacts.class.hpp"

Contacts::Contacts(void)
{
}

Contacts::~Contacts(void)
{
}

void            Contacts::setFirstname(std::string firstname)
{
    if (firstname.length() > 9)
        firstname = firstname.substr(0, 9) + ".";
    _firstname = firstname;
}
void            Contacts::setLastname(std::string lastname)
{
    if (lastname.length() > 9)
        lastname = lastname.substr(0, 9) + ".";
    _lastname = lastname;
}
void            Contacts::setNickname(std::string nickname)
{
    if (nickname.length() > 9)
        nickname = nickname.substr(0, 9) + ".";
    _nickname = nickname;
}
void            Contacts::setLogin(std::string login)
{
    if (login.length() > 9)
        login = login.substr(0, 9) + ".";
    _login = login;
}
void            Contacts::setPostal(std::string postal)
{
    if (postal.length() > 9)
        postal = postal.substr(0, 9) + ".";
    _postal = postal;
}
void            Contacts::setEmail(std::string email)
{
    if (email.length() > 9)
        email = email.substr(0, 9) + ".";
    _email = email;
}
void            Contacts::setPhone(std::string phone)
{
    if (phone.length() > 9)
        phone = phone.substr(0, 9) + ".";
    _phone = phone;
}
void            Contacts::setBirth(std::string birth)
{
    if (birth.length() > 9)
        birth = birth.substr(0, 9) + ".";
    _birth = birth;
}
void            Contacts::setMeal(std::string meal)
{
    if (meal.length() > 9)
        meal = meal
        .substr(0, 9) + ".";
    _meal = meal;
}
void            Contacts::setUnderwear(std::string underwear)
{
    if (underwear.length() > 9)
        underwear = underwear.substr(0, 9) + ".";
    _underwear = underwear;
}
void            Contacts::setSeceret(std::string seceret)
{
    if (seceret.length() > 9)
        seceret = seceret.substr(0, 9) + ".";
    _seceret = seceret;
}

void            Contacts::printTable(int index, Contacts *contacts)
{

}