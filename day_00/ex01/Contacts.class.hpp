#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP
# include "phonebook.hpp"


class Contacts
{
    public:
        Contacts(void);
        ~Contacts(void);
        void     setFirstname(std::string);
        void     setLastname(std::string);
        void     setNickname(std::string);
        void     setlogin(std::string);
        void     setPostal(std::string);
        void     setEmail(std::string);
        void     setPhone(std::string);
        void     setBirth(std::string);
        void     setFavorite(std::string);
        void     setMeal(std::string);
        void     setUnderwear(std::string);
        void     setSeceret(std::string);

    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _login;
        std::string _postal;
        std::string _email;
        std::string _phone;
        std::string _birth;
        std::string _favorite;
        std::string _meal;
        std::string _underwear;
        std::string _seceret;
};

#endif