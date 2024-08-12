/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:56:16 by bkas              #+#    #+#             */
/*   Updated: 2024/08/12 19:31:29 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "Account.hpp"

#include <iomanip>
#include <iostream>

/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] DEFINES [v] **************************** */

#define cout std::cout
#define endl std::endl
#define setw std::setw
#define setfill std::setfill

/* **************************** [^] DEFINES [^] **************************** */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* ************************* [v] GET FUNCTIONS [v] ************************* */

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

int Account::checkAmount(void) const { return _amount; }

/* ************************* [^] GET FUNCTIONS [^] ************************* */

/* ********************** [v] DISPLAY TIME STAMP [v] ********************** */

void Account::_displayTimestamp(void) {
    time_t currentTime = time(NULL);
    struct tm *local = localtime(&currentTime);

    cout << setfill('0') << "[" << local->tm_year + 1900 << setw(2)
         << local->tm_mon + 1 << setw(2) << local->tm_mday << "_" << setw(2)
         << local->tm_hour << setw(2) << local->tm_min << setw(2)
         << local->tm_sec << "] ";
}

/* ********************** [^] DISPLAY TIME STAMP [^] ********************** */

/* ************************* [v] CONSTRUCTORS [v] ************************* */

Account::Account(void) {
    _accountIndex = 0;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::Account(int initial_deposit) {
    ++_nbAccounts;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << checkAmount()
         << ";created" << endl;
}

/* ************************* [^] CONSTRUCTORS [^] ************************* */

/* ************************* [v] MAKE DEPSIT [v] ************************* */

void Account::makeDeposit(int deposit) {
    _displayTimestamp();

    cout << "index:" << _accountIndex << ";p_amount:" << _amount
         << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += _amount;
    cout << ";amount:" << _amount;
    cout << ";nb_deposits:" << ++_nbDeposits << endl;
    _totalNbDeposits++;
}

/* ************************* [^] MAKE DEPSIT [^] ************************* */

/* ******************** [v] DISPLAY ACCOUNT INFOS [v] ******************** */

void Account::displayAccountsInfos() {
    _displayTimestamp();
    cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
         << ";deposits:" << getNbDeposits()
         << ";withdrawals:" << getNbWithdrawals() << endl;
    _totalAmount = 0;
}

/* ******************** [^] DISPLAY ACCOUNT INFOS [^] ******************** */

/* *********************** [v] DISPLAY STATUS [v] *********************** */

void Account::displayStatus(void) const {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << checkAmount()
         << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
         << endl;
}

/* *********************** [^] DISPLAY STATUS [^] *********************** */

/* ************************* [v] DESTRUCTOR [v] ************************* */

Account::~Account(void) {
    _displayTimestamp();

    cout << "index:" << _accountIndex << ";amount:" << checkAmount()
         << ";closed" << endl;
}

/* ************************* [^] DESTRUCTOR [^] ************************* */

/* ********************** [v] MAKE WITHDRAWAL [v] ********************** */

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();

    cout << "index:" << _accountIndex << ";p_amount:" << checkAmount()
         << ";withdrawal:";
    if (checkAmount() < withdrawal) {
        cout << "refused" << endl;
        _totalAmount += checkAmount();
        return false;
    }
    cout << withdrawal;
    _amount -= withdrawal;
    _totalAmount += _amount;
    cout << ";amount:" << checkAmount()
         << ";nb_withdrawals:" << ++_nbWithdrawals << endl;
    _totalNbWithdrawals++;
    return true;
}

/* ********************** [^] MAKE WITHDRAWAL [^] ********************** */
