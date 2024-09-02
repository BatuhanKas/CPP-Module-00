/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:12:35 by bkas              #+#    #+#             */
/*   Updated: 2024/09/02 05:35:14 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/PhoneBook.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    PhoneBook inpObj;
    string input;

    while (42) {
        cout << BLUE << "Please enter a value (ADD, SEARCH, EXIT)" << RESET
             << endl;
        if (getline(cin, input)) {
            if (input == "EXIT") {
                break;
            } else if (input == "ADD") {
                inpObj.addContact();
            } else if (input == "SEARCH") {
                inpObj.searchContact();
            } else {
                cout << RED << "Wrong Input!" << RESET << endl;
            }
        } else if (cin.eof()) {
            break;
        }
    }
}

/* ****************************** [^] MAIN [^] ****************************** */
