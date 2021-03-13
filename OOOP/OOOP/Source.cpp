#include <mysql.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
using namespace std;
int qstate;

//class calculathor() {};
/*class adminwrk(){
	
};*/
//class usrwrk(){};
/*void adminfunc() {
	int ch;
	cout << " Welcome Admin! " << endl;
	cout << "Let's choose what you want to do today!" << endl;
	cout << " 1. List all the entries " << endl;
	cout << " 2. Check the program of an individual user " << endl;
	cout << " 3. Generate Bill" << endl;
	cout << " 4. Exit" << endl;

	cin >> ch;
	switch (ch) {
	case 1:

	case 2:
	case 3://billgen();

	case 4:exit(0);
	}
}create a class for bill calculation
*/
class calculations {
public:
	string inp() {
		string s;
		cin >> s;
		return s;
	}
	string calc(string bf, string wt) {
		stringstream b(bf);
		stringstream w(wt);
		int x = 0, y = 0; // x is bf and y is wt
		b >> x;
		w >> y;
		y *= 2;
		int mcal = 0;
		if (x > 20) {
			y = y - (25 * y / 100);
		}
		mcal = y * 15;
		string mcl = to_string(mcal);
		return mcl;
	}
	void dtpln(string s,string mcl) {
		stringstream m(mcl);
		int mcal = 0;
		m >> mcal;
		if (s == "BLK") {
			cout << "Your Calorie Intake Until Change of plans is " << mcal+300 << endl;
			cout << "Your Diet Plan is" << endl;
			int p, f, c;
			mcal += 300;
			p = mcal / 5;
			f = mcal / 4;
			c = mcal - (p + f);
			printf("   ***   ***          BBBB      UU    UU    LL           KK   KK     \n");
			printf("   ***   ***          B    B    UU    UU    LL           KK  KK           \n");
			printf("   ***   ***          BBBBB     UU    UU    LL           KKKK        \n");
			printf("   *********          B    B    UU    UU    LL           KK  KK     \n");
			printf("    *  *  *           BBBBB      UUUUUU     LLLLLLLL     KK    KK  	\n\n\n");
			cout << "Macros :" << endl;
			cout << "Protein Intake :" << p << endl;
			cout << "Fat's Intake :" << f << endl;
			cout << "Carbohydrate Intake :" << c << endl;
			cout << "Diet to be Followed on a Daily Basis :" << endl;
			cout << "Oat Meal" << endl;
			cout << "Spinach Omlette" << endl;
			cout << "Fish and Sweet Potato" << endl;
			cout << "Rice Cake's with Greek Yogurt as Snacks" << endl;
			cout << "Paneer Bhurji with Spinack and Carrot Salad" << endl;
		}
		else {
			cout << "Your Calorie Intake Until Change of plans is " << mcal - 300 << endl;
			cout << "Your Diet Plan is" << endl;
			int p, f, c;
			mcal -= 300;
			p = mcal / 4;
			f = mcal / 3;
			c = mcal - (p + f);
			printf("            $$         CCCCCC    UU    UU   TTTTTTTTT    \n");
			printf("           $$         CC         UU    UU      TT   \n");
			printf("          $$          CC         UU    UU      TT       \n");
			printf("         $$           CC         UU    UU      TT     \n");
			printf("        $$             CCCCCC     UUUUUU       TT      \n");
			cout << "Macros :" << endl;
			cout << "Protein Intake :" << p << endl;
			cout << "Fat's Intake :" << f << endl;
			cout << "Carbohydrate Intake :" << c << endl;
			cout << "Diet to be Followed on a Daily Basis :" << endl;
			cout << "Oat Meal" << endl;
			cout << "Egg Bhurji" << endl;
			cout << "Fried Brown Rice" << endl;
			cout << "Rice Cake's with Greek Yogurt as Snacks" << endl;
			cout << "Paneer Bhurji" << endl;
		}
	}
};
	int main()
	{

		calculations obj;
		int n;
		do {
			system("CLS");
			printf("\n\t\t\t\t                                            WELCOME TO THE:\n\n\n");
			printf("\t\t\t\t        BBBB\t\t\t\t\t  BBBB\n");
			printf("\t\t\t\t        B    B\t\t\t\t\t  B    B\n");
			printf("\t\t\t\t        B   B\t\tFFFFFF\t\t\t  B   B\t\t\t\t     \n");
			printf("\t\t\t\t        BBB\t\tF\tOOO\tRRRR\t  BBB\t    U     U   LL      K  K     \n");
			printf("\t\t\t\t        B    B\t\tFFFF  O     O\tR   R\t  B    B    U     U   LL      KKK\t     \n");
			printf("\t\t\t\t        B      B\tF     O     O\tRRRR\t  B     B   U     U   LL      K  K\t        \n");
			printf("\t\t\t\t        B       B\tF\tOOO\tR   R\t  B       B   UUU     LLLLL   K    K      \n");
			printf("\t\t\t\t        B      B\t\t\t\t  B      B\n");
			printf("\t\t\t\t        BBBBBB\t\t\t\t\t  BBBBBB\n");
			printf("\t\t\t\t\t\t\t\t \t  Athletic Fitness System \n");
			MYSQL* conn;
			MYSQL_ROW row;
			MYSQL_RES* res;
			conn = mysql_init(0);
			conn = mysql_real_connect(conn, "localhost", "root", "227965", "users", 3306, NULL, 0);

			if (conn) {
				printf("Successful connection to database!\n");
				string usrnm;
				string pwd;
				cout << "\t\t\t\t\t\t Please select from the following from options" << endl;
				cout << "\t\t\t\t\t\t    1. Sign Up to the Fitness System" << endl;
				cout << "\t\t\t\t\t\t    2. Sign In to the Fitness System" << endl;
				cout << "\t\t\t\t\t\t       3. Exit The Application" << endl;
				cout << "\t\t\t\t\t\t          Enter Your Choice: ";
				cin >> n;
				switch (n) {
				case 2:
				{
					printf("\t\t\t\t\t\t Enter User name :");
					cin >> usrnm;
					printf("\t\t\t\t\t\t Enter Passcode :");
					cin >> pwd;
					string query1 = "SELECT * from usernamepwd where `username`= '" + usrnm + "' and `userpwd` = '" + pwd + "' ";
					const char* q1 = query1.c_str();
					qstate = mysql_query(conn, q1);
					if (!qstate)
					{
						res = mysql_store_result(conn);
						while (row = mysql_fetch_row(res)) {
							// cout << row[1] << row[2] << endl;
							// usrnm == row[1] ? cout << 1 : cout << 0;
							// pwd == row[2] ? cout << 1 : cout << 0;
							if (usrnm == row[1] && pwd == row[2]) {
								cout << "User Exists, Login Successful" << endl;
								system("CLS");
								if (usrnm == "Admin") {
									int ch;
									cout << "\t\t\t\t\t\t Welcome Admin! " << endl;
									do {
										cout << endl;
										printf("                      MM    MM     EEEEEEEE     NN     NN     UU    UU\n");
										printf("                      MMM  MMM     EE           NN NN  NN     UU    UU\n");
										printf("                      MM MM MM     EEEEE        NN  NN NN     UU    UU\n");
										printf("                      MM    MM     EE           NN   NNNN     UU    UU\n");
										printf("                      MM    MM     EEEEEEEE     NN     NN    	UUUU \n\n\n");
										cout << "\t\t\t\t\t\tLet's choose what you want to do today!" << endl;
										cout << "\t\t\t\t\t\t     1. List all the entries " << endl;
										cout << "\t\t\t\t\t\t2. Check the program of an individual user " << endl;
										cout << "\t\t\t\t\t\t         3. Generate Bill" << endl;
										cout << "\t\t\t\t\t\t         4. Remove a User" << endl;
										cout << "\t\t\t\t\t\t      5. Transaction Details" << endl;
										cout << "\t\t\t\t\t\t           6. Logout" << endl;
										cout << "\t\t\t\t\t\t        Enter your choice:";
										cin >> ch;
										switch (ch) {
										case 1: {
											string query = "SELECT * FROM usernamepwd";
											const char* q = query.c_str();
											qstate = mysql_query(conn, q);
											cout << endl;
											printf("   *********                LL           IIIIIIII     SSSSSSSSS     TTTTTTTT\n");
											printf("    *******                 LL              II        SS               TT\n");
											printf("     *****                  LL              II        SSSSSSSSS        TT\n");
											printf("      ***                   LL              II               SS        TT\n");
											printf("       *                    LLLLLLLL     IIIIIIII     SSSSSSSSS    TT \n\n\n");
											if (!qstate)
											{
												printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", "ID", "Name", "Phone", "Address", "Current Workout Plan", "Current Weight", "Body Fat Percentage", "Bill Due(INR)");
												printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												res = mysql_store_result(conn);
												int count = 0;
												while (row = mysql_fetch_row(res))
												{
													if (count > 0)
														printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", row[0], row[1], row[3], row[4], row[8], row[7], row[6], row[5]);
													count++;
												}
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 2: {
											string id;
											cout << endl;
											printf("               @@@@@@@\n");
											printf("             @@      @@\n");
											printf("           @@        @@          $$$$$$$$$   $$$$$$$$      $$$       $$$$$$$   $$$$$$$$   $$    $$\n");
											printf("           @@       @@           $$          $$           $$ $$      $$   $$   $$         $$    $$\n");
											printf("            @@@@@@@              $$$$$$$$$   $$$$$$      $$$$$$$     $$$$$$$   $$         $$$$$$$$\n");
											printf("             @ @                        $$   $$         $$     $$    $$ $$     $$         $$    $$\n");
											printf("            @ @                  $$$$$$$$$   $$$$$$$$  $$       $$   $$   $$   $$$$$$$$   $$    $$\n");
											printf("           @ @\n");
											printf("          @@@                                                                 \n\n");
											cout << "Please Enter the ID of the User you want Details of: ";
											cin >> id;
											string query = "SELECT * FROM usernamepwd where `UserID` = '" + id + "' ";
											const char* q = query.c_str();
											qstate = mysql_query(conn, q);
											if (!qstate)
											{
												printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", "ID", "Name", "Phone", "Address", "Current Workout Plan", "Current Weight", "Body Fat Percentage", "Bill Due(INR)");
												printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												res = mysql_store_result(conn);
												while (row = mysql_fetch_row(res))
												{
													printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", row[0], row[1], row[3], row[4], row[8], row[7], row[6], row[5]);
												}
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 3: {
											cout << endl;
											printf("   *********          BBBB      IIIIIIII   LL           LL           SSSSSSSSS     \n");
											printf("   ***   ***          B    B       II      LL           LL           SS            \n");
											printf("   ***   ***          BBBBB        II      LL           LL           SSSSSSSSS     \n");
											printf("   *********          B    B       II      LL           LL                  SS     \n");
											printf("    *  *  *           BBBBB     IIIIIIII   LLLLLLLL     LLLLLLLL     SSSSSSSSS    	\n\n\n");
											string query = "SELECT * FROM usernamepwd";
											const char* q = query.c_str();
											qstate = mysql_query(conn, q);
											if (!qstate)
											{
												printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", "ID", "Name", "Phone", "Address", "Current Workout Plan", "Current Weight", "Body Fat Percentage", "Bill Due(INR)");
												printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												res = mysql_store_result(conn);
												int count = 0;
												while (row = mysql_fetch_row(res))
												{
													if (count > 0)
														printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", row[0], row[1], row[3], row[4], row[8], row[7], row[6], row[5]);
													count++;
												}
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}

											cout << "\nFrom The List of Users Just Enter the User ID of who payed the bill ";
											string id, billamt;
											cin >> id;
											string query97 = "SELECT * FROM usernamepwd where `UserID` = '" + id + "' ";
											const char* q97 = query97.c_str();
											qstate = mysql_query(conn, q97);
											if (!qstate)
											{
												res = mysql_store_result(conn);
												while (row = mysql_fetch_row(res))
												{
													billamt = row[5];
												}
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											string query99 = "UPDATE usernamepwd SET bill = 0 WHERE `UserID` = '" + id + "' ";
											const char* q99 = query99.c_str();
											qstate = mysql_query(conn, q99);
											if (!qstate)
											{
												printf("\n Amount Rs. %s collected Successfully from user ID : %s", billamt, id);
												string query98 = "INSERT INTO transac (userid,amountpaid) VALUES ('" + id + "','" + billamt + "')";
												const char* q98 = query98.c_str();
												qstate = mysql_query(conn, q98);
												if (!qstate)
													cout << "\n Transaction done successfully\n" << endl;
												else cout << "Quey failed: " << mysql_error(conn) << endl;
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 4: {/*removing a user*/
											string query = "SELECT * FROM usernamepwd";
											const char* q = query.c_str();
											qstate = mysql_query(conn, q);
											if (!qstate)
											{
												res = mysql_store_result(conn);
												int count = 0;
												printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", "ID", "Name", "Phone", "Address", "Current Workout Plan", "Current Weight", "Body Fat Percentage", "Bill Due(INR)");
												printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												while (row = mysql_fetch_row(res))
												{
													if (count > 0)
														printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", row[0], row[1], row[3], row[4], row[8], row[7], row[6], row[5]);
													count++;
												}
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											cout << "\nPlease enter the id of the user to be removed from the above list";
											string id, urnm;
											cin >> id;
											char c;
											string query95 = "SELECT * FROM usernamepwd where `UserID` = '" + id + "' ";
											const char* q95 = query95.c_str();
											qstate = mysql_query(conn, q95);
											if (!qstate)
											{
												res = mysql_store_result(conn);
												while (row = mysql_fetch_row(res))
												{
													urnm = row[1];
												}
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											printf(" Are you sure you want to remove %s (Y/N)?", urnm);
											cin >> c;
											if (c == 'y' || c == 'Y') {
												string query96 = "DELETE FROM usernamepwd where UserID= '" + id + "' ";
												const char* q96 = query96.c_str();
												qstate = mysql_query(conn, q96);
												if (!qstate) {
													cout << "User " << urnm << " with User ID " << id << " has been removed";
												}
												else cout << "Query failed: " << mysql_error(conn) << endl;
											}
											else cout << "There were no Changes made" << endl;
											break;
										}
										case 5: {/*check all transaction details*/
											int trch;
											cout << endl;
											printf("               @@@@@@@\n");
											printf("             @@      @@\n");
											printf("           @@        @@          $$$$$$$$$   $$$$$$$$      $$$       $$$$$$$   $$$$$$$$   $$    $$\n");
											printf("           @@       @@           $$          $$           $$ $$      $$   $$   $$         $$    $$\n");
											printf("            @@@@@@@              $$$$$$$$$   $$$$$$      $$$$$$$     $$$$$$$   $$         $$$$$$$$\n");
											printf("             @ @                        $$   $$         $$     $$    $$ $$     $$         $$    $$\n");
											printf("            @ @                  $$$$$$$$$   $$$$$$$$  $$       $$   $$   $$   $$$$$$$$   $$    $$\n");
											printf("           @ @\n");
											printf("          @@@                                                                 \n\n");
											cout << "\t\t\t\t\t\t           Please Make a choice" << endl;
											cout << "\t\t\t\t\t\t         1. Check all transcations " << endl;
											cout << "\t\t\t\t\t\t2. Check transactions of a particualar user" << endl;
											cout << "\t\t\t\t\t\t               Make a choice: ";
											cin >> trch;
											switch (trch) {
											case 1: {
												string query = "SELECT * FROM transac";
												const char* q = query.c_str();
												qstate = mysql_query(conn, q);
												if (!qstate)
												{
													printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("%15s%13s%15s%25s\n", "Transaction ID", "User ID", "Amount Paid", "Date Of Payment");
													printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													res = mysql_store_result(conn);
													while (row = mysql_fetch_row(res))
													{
														printf("%15s%13s%15s%25s\n", row[0], row[1], row[2], row[3]);
													}
												}
												else
												{
													cout << "Query failed: " << mysql_error(conn) << endl;
												}
												break;
											}
											case 2: {
												string srch;
												string query94 = "SELECT * FROM usernamepwd";
												const char* q94 = query94.c_str();
												qstate = mysql_query(conn, q94);
												if (!qstate)
												{
													res = mysql_store_result(conn);
													int count = 0;
													printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", "ID", "Name", "Phone", "Address", "Current Workout Plan", "Current Weight", "Body Fat Percentage", "Bill Due(INR)");
													printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													while (row = mysql_fetch_row(res))
													{
														if (count > 0)
															printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", row[0], row[1], row[3], row[4], row[8], row[7], row[6], row[5]);
														count++;
													}
												}
												else
												{
													cout << "Query failed: " << mysql_error(conn) << endl;
												}
												cout << "\t\t\tEnter the user id of whose transaction details you want to search :" << endl;
												cin >> srch;
												string query93 = "SELECT * FROM transac where userid = '" + srch + "'";
												const char* q93 = query93.c_str();
												qstate = mysql_query(conn, q93);
												if (!qstate)
												{
													res = mysql_store_result(conn);
													int count = 0;
													printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("%15s%13s%15s%25s\n", "Transaction ID", "User ID", "Amount Paid", "Date Of Payment");
													printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													while (row = mysql_fetch_row(res))
													{
														printf("%15s%13s%15s%25s\n", row[0], row[1], row[2], row[3]);
													}
												}
												else
												{
													cout << "Query failed: " << mysql_error(conn) << endl;
												}
												break;
											}
											default: {
												cout << "Valid option not entered";
											}
											}
											break;
										}//one more to be added i.e search transaction by id probably one more switch inside
										case 6: { }
										default: {
											cout << "Logging Out" << endl;
										}
										}
									} while (ch != 6);
								}
								else {
									//string query1 = "SELECT * from usernamepwd where `username`= '" + usrnm + "' and `userpwd` = '" + pwd + "' ";
									//const char* q1 = query1.c_str();
									//qstate = mysql_query(conn, q1);
									int ch;
									cout << " Welcome " << row[1] << endl;
									string bull = row[6];
									string uid;
									uid = row[0];
									cout << bull;
									string wrktype = row[8];
									do {
										cout << endl;
										printf("                      MM    MM     EEEEEEEE     NN     NN     UU    UU\n");
										printf("                      MMM  MMM     EE           NN NN  NN     UU    UU\n");
										printf("                      MM MM MM     EEEEE        NN  NN NN     UU    UU\n");
										printf("                      MM    MM     EE           NN   NNNN     UU    UU\n");
										printf("                      MM    MM     EEEEEEEE     NN     NN	UUUU \n\n\n");
										cout << "\t\t\t\t\t Let's choose what you want to do today!" << endl;
										cout << "\t\t\t\t\t        1. Check your profile " << endl;
										cout << "\t\t\t\t\t    2. Display your Workout Plan " << endl;
										cout << "\t\t\t\t\t          3. Check Diet" << endl;
										cout << "\t\t\t\t\t   4. Change your Workout Plans" << endl;
										cout << "\t\t\t\t\t5. Change Details pertaining to Body" << endl;
										cout << "\t\t\t\t\t            6. Logout" << endl;
										cout << "\t\t\t\t\t         Make your choice: ";
										cin >> ch;
										//if (bull == "0") {

										//}

										switch (ch) {
										case 1:// print name, emailid, phone number, current workout plan, user id,current weight and body fat percentage
										{
											string query90 = " SELECT * FROM usernamepwd where `UserID` = '" + uid + "' ";
											const char* q90 = query90.c_str();
											qstate = mysql_query(conn, q90);
											if (!qstate)
											{
												res = mysql_store_result(conn);
												printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", "ID", "Name", "Phone", "Address", "Current Workout Plan", "Current Weight", "Body Fat Percentage", "Bill Due(INR)");
												printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												while (row = mysql_fetch_row(res))
													printf("%15s%13s%12s%15s%30s%25s%30s%17s\n", row[0], row[1], row[3], row[4], row[8], row[7], row[6], row[5]);
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 2:
										{
											string query89 = " SELECT * FROM usernamepwd where `UserID` = '" + uid + "' ";
											const char* q89 = query89.c_str();
											qstate = mysql_query(conn, q89);
											if (!qstate)
											{
												res = mysql_store_result(conn);
												while (row = mysql_fetch_row(res)) {
													if (row[8] == "BLK") {
														cout << endl;
														cout << endl;
														printf("   ***   ***          BBBB      UU    UU    LL           KK   KK     \n");
														printf("   ***   ***          B    B    UU    UU    LL           KK  KK           \n");
														printf("   ***   ***          BBBBB     UU    UU    LL           KKKK        \n");
														printf("   *********          B    B    UU    UU    LL           KK  KK     \n");
														printf("    *  *  *           BBBBB      UUUUUU     LLLLLLLL     KK    KK  	\n\n\n");
														cout << "Monday: Legs" << endl;
														cout << "Tuesday: Chest/Abs/Cardio" << endl;
														cout << "Wednesday: Back/Forearms/Cardio" << endl;
														cout << "Thursday: Active Recovery" << endl;
														cout << "Friday: Shoulders/Abs/Cardio" << endl;
														cout << "Saturday: Biceps/Triceps/Cardio" << endl;
														cout << "Sunday : Active Recovery" << endl;
													}
													else {
														cout << endl;
														printf("            $$         CCCCCC    UU    UU   TTTTTTTTT    \n");
														printf("           $$         CC         UU    UU      TT   \n");
														printf("          $$          CC         UU    UU      TT       \n");
														printf("         $$           CC         UU    UU      TT     \n");
														printf("        $$             CCCCCC     UUUUUU       TT      \n");
														cout << "Monday: Legs" << endl;
														cout << "Tuesday: Chest & Abs" << endl;
														cout << "Wednesday: Shpulder & Cardio" << endl;
														cout << "Thursday: High Intesity Training" << endl;
														cout << "Friday: Core and Kick Boxing" << endl;
														cout << "Saturday: Back & Cardio" << endl;
														cout << "Sunday : Arms (Bicep/Tricep/Forearm)" << endl;
													}
												}

											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 3:
										{
											cout << endl;
											printf("   *********          DDDD      IIIIIIII   EEEEEEE   TTTTTTTT\n");
											printf("   ***   ***          D   D        II      EE           TT   \n");
											printf("   ***   ***          D    D       II      EEEEE        TT    \n");
											printf("   *********          D   D        II      EE           TT \n");
											printf("    *  *  *           DDDD      IIIIIIII   EEEEEEE	    TT\n\n\n");
											string query88 = " SELECT * FROM usernamepwd where `UserID` = '" + uid + "' ";
											const char* q88 = query88.c_str();
											qstate = mysql_query(conn, q88);
											if (!qstate)
											{
												res = mysql_store_result(conn);
												while (row = mysql_fetch_row(res))
													obj.dtpln(row[8], row[11]);
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 4:
										{

											if (wrktype == "BLK") wrktype = "CUT";
											else wrktype = "BLK";
											string query87 = "UPDATE usernamepwd set wrktype='" + wrktype + "' where UserID='" + uid + "'";
											const char* q87 = query87.c_str();
											qstate = mysql_query(conn, q87);
											if (!qstate)
											{
												cout << " Changed Workout Plan Successful" << endl;
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 5:
										{
											string wt, bf;
											cout << " Enter Body Weight: ";
											wt = obj.inp();
											cout << " Enter Body Fat Percentage: ";
											bf = obj.inp();
											string query86 = "UPDATE usernamepwd set bodyfat='" + bf + "',weight='" + wt + "' where UserID='" + uid + "'";
											const char* q86 = query86.c_str();
											qstate = mysql_query(conn, q86);
											if (!qstate)
											{
												cout << " Data Updated Successful" << endl;
											}
											else
											{
												cout << "Query failed: " << mysql_error(conn) << endl;
											}
											break;
										}
										case 6:
										default: {
											cout << "Logging Out";
										}
										}
									} while (ch != 6);
								}
							}

							else {
								cout << "Login Unsuccessful" << endl;
							}
						}

					}
					else
					{
						cout << "Query failed: (No Match found) " << mysql_error(conn) << endl;
					}
					break;
				}
				case 1: {
					string phno, address;
					cout << "\t\t\t\t\tPlease Enter the Required details" << endl;
					cout << "\t\t\t\t\t     Enter UserName :";
					usrnm = obj.inp();
					cout << "\t\t\t\t\t     Enter Password :";
					pwd = obj.inp();
					cout << "\t\t\t\t\t  Enter Phone Number :";
					phno = obj.inp();
					cout << "\t\t\t\t\t     Enter Address :";
					address = obj.inp();
					cout << " Hey!, Looks like we need some more details " << endl;
					string bf, wt, wrktype, dob;
					cout << " Enter your Date of Birth in the following format YYYY-MM-DD :";
					dob = obj.inp();
					cout << " Enter Body Weight: ";
					wt = obj.inp();
					cout << " Enter Body Fat Percentage: ";
					bf = obj.inp();
					cout << " Enter Workout Type: \n 1.Bulk\n 2.Cut\n Make a choice:";
					int wrkch;
					cin >> wrkch;
					if (wrkch == 1) wrktype = "BLK";
					else if (wrkch == 2) wrktype = "CUT";
					string mcal = obj.calc(bf, wt);
					string query = " INSERT INTO usernamepwd (username,userpwd,userphno,useraddress,bodyfat,dob,weight,wrktype) VALUES ('" + usrnm + "','" + pwd + "','" + phno + "','" + address + "','" + bf + "','" + dob + "','" + wt + "','" + wrktype + "')";
					const char* q = query.c_str();
					qstate = mysql_query(conn, q);
					if (!qstate)
					{
						cout << "User Created Successfully" << endl;
					}
					else
					{
						cout << "Query failed: " << mysql_error(conn) << endl;
					}
				}
				case 3: exit(0);
				default: cout << "Invalid Choice" << endl;
				}
			}
			else {
				printf("Connection to database has failed!\n");
			}
		}while (n != 3);
		return 0;
	}

/*
//string query = "SELECT * FROM usernamepwd";
//const char* q = query.c_str();
//qstate = mysql_query(conn, q);
if (!qstate)
{
	res = mysql_store_result(conn);

	while (row = mysql_fetch_row(res))
	{
		printf("ID: %s, Name: %s, Phone: %s, Address:%s\n", row[0], row[1], row[3], row[4]);
	}
}
else
{
	cout << "Query failed: " << mysql_error(conn) << endl;
}
*/