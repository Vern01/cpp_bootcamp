#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP
# include "phonebook.hpp"


class Contacts
{
    public:
        Contacts(void);
        ~Contacts(void);
        void     getFirstname(void) const;
        void     setFirstname(std::string);

    private:
        std::string _firstname;
};

#endif