## BankAccount Class

Make a BankAccount class with the following attributes & methods

### Attributes

* name
* acct_number
* phone
* balance
* rate

### Methods

* deposit
* withdraw
* balance

## Savings Class

Create an Savings class that inherits from `BankAccount` with the following attributes & actions

### Attributes

* minimum_balance
* withdraw_limit

### Actions

* When `balance` drops below `minimum_balance`, the users gets a warning
* When `withdraw` is greater than `withdraw_limit`, it dis-allows the withdraw.

## Checking Class

Create an Checking class that inherits from `BankAccount` with the following attributes & actions

### Attributes

* overdraft_fee

### Actions

* When `balance` drops below 0, the users gets an additional overdraft_fee withdrawn from account.

## Interface

Finally create a menu (with functions) that allow open new bank accounts, put money in, take money out, and print totals.

## Name

Name your quiz: `CIS2013_Week13_Quiz1`