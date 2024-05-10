/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:21:04 by bkas              #+#    #+#             */
/*   Updated: 2024/05/10 11:37:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

static bool controlName(string str) {
    if (str.empty()) {
        cout << RED << "Empty Line!" << RESET << endl;
        return true;
    }
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i])) {
            cout << RED << "False Input! All characters must be alphabetic!"
                 << RESET << endl;
            return true;
        }
    }
    return false;
}

static bool controlNumber(string str) {
    if (str.empty()) {
        cout << RED << "Empty Line!" << RESET << endl;
        return true;
    }
    if (str.length() != 10) {
        cout << RED << "False Phone Number !" << RESET << endl;
        return true;
    }
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            cout << RED << "False Phone Number !" << RESET << endl;
            return true;
        }
    }
    return false;
}

static bool controlSearchIndex(string str) {
    if (str.empty()) {
        cout << RED << "Empty Line !" << RESET << endl;
        return true;
    }
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            cout << RED << "False Index !" << RESET << endl;
            return true;
        }
    }
    return false;
}

static bool controlNickname(string str) {
    if (str.empty()) {
        cout << RED << "Empty Line !" << RESET << endl;
        return true;
    }
    return false;
}

void PhoneBook::addContact() {
    string input;
    static int i = 0;
    index = i;

    do {
        cout << LIGHT_MAGENTA << "First Name: " << RESET;
        getline(cin, input);

    } while (controlName(input));
    book[i % 8].setFirstName(input);

    do {
        cout << LIGHT_CYAN << "Last Name: " << RESET;
        getline(cin, input);
    } while (controlName(input));
    book[i % 8].setLastName(input);

    do {
        cout << LIGHT_RED << "Nick Name: " << RESET;
        getline(cin, input);
    } while (controlNickname(input));
    book[i % 8].setNickName(input);

    do {
        cout << WHITE << "Phone Number must be 10 digits!! " << RESET << endl;
        cout << LIGHT_WHITE << "Phone Number: " << RESET;
        getline(cin, input);
    } while (controlNumber(input));
    book[i % 8].setPhoneNumber(input);

    do {
        cout << LIGHT_GREEN << "Darkest Secret: " << RESET;
        getline(cin, input);
    } while (controlName(input));
    book[i % 8].setDarkestSecret(input);
    cout << LIGHT_YELLOW << "User added to PhoneBook" << RESET << endl;
    i++;
}

void PhoneBook::printContactMembers(int i) {
    if (i == 0) {
        cout << "  INDEX" << "       NAME" << "     LASTNAME" << "   NICKNAME"
             << endl;
        cout << "----------*----------*----------*----------*" << endl;
    }
    cout << setw(10) << i + 1 << "|";
    if (book[i].getFirstName().length() > 10) {
        cout << book[i].getFirstName().substr(0, 9) << ".|";
    } else {
        cout << setw(10) << book[i].getFirstName() << "|";
    }
    if (book[i].getLastName().length() > 10) {
        cout << book[i].getLastName().substr(0, 9) << ".|";
    } else {
        cout << setw(10) << book[i].getLastName() << "|";
    }
    if (book[i].getNickName().length() > 10) {
        cout << book[i].getNickName().substr(0, 9) << ".|" << endl;
    } else {
        cout << setw(10) << book[i].getNickName() << "|" << endl;
    }
    cout << "----------*----------*----------*----------*" << endl;
}

void PhoneBook::printUserInformation(int i) {
    cout << LIGHT_MAGENTA << "First Name: " << RESET << book[i].getFirstName()
         << endl;
    cout << LIGHT_CYAN << "Last Name: " << RESET << book[i].getLastName()
         << endl;
    cout << LIGHT_RED << "Nick Name: " << RESET << book[i].getNickName()
         << endl;
    cout << LIGHT_WHITE << "Phone Number: " << RESET << book[i].getPhoneNumber()
         << endl;
    cout << LIGHT_GREEN << "Darkest Secret: " << RESET
         << book[i].getDarkestSecret() << endl;
}

void PhoneBook::searchContact() {
    int i = 0;
    string input;
    while (i <= index && i < 8) {
        printContactMembers(i);
        i++;
    }
    do {
        cout << YELLOW << "Select the Index: " << RESET << endl;
        getline(cin, input);
    } while (controlSearchIndex(input));
    const char *ptr = input.c_str();
    int intval = atoi(ptr);
    if (intval < 1 || intval > 8) {
        cout << RED << "Error! Wrong Index!" << RESET << endl;
    } else if (intval <= i) {
        printUserInformation(intval - 1);
    } else {
        cout << RED << "Error! Wrong Index!" << RESET << endl;
    }
}