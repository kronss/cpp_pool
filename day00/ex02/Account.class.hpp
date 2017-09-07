// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //
class Account {


public:

	typedef Accountt;

	static intgetNbAccounts( void );
	static intgetTotalAmount( void );
	static intgetNbDeposits( void );
	static intgetNbWithdrawals( void );
	static voiddisplayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	voidmakeDeposit( int deposit );
	boolmakeWithdrawal( int withdrawal );
	intcheckAmount( void ) const;
	voiddisplayStatus( void ) const;


private:

	static int_nbAccounts;
	static int_totalAmount;
	static int_totalNbDeposits;
	static int_totalNbWithdrawals;

	static void_displayTimestamp( void );

	int_accountIndex;
	int_amount;
	int_nbDeposits;
	int_nbWithdrawals;

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// My boss is a dick                                                          //
// ************************************************************************** //
