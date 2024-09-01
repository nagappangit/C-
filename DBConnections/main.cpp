#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>

using namespace std;

void dbConnection(){
MYSQL* conn;
conn = mysql_init(0);
conn = mysql_real_connect(conn, "localhost", "root", "", "dbconnection", 0, NULL, 0);
if(conn){
    cout << "The Database is connected";
    }
    else{
        cout << "The Database is cannot be connected";
        }
}
void insertData(){
    int qstate = 0;
    stringstream ss;
    string ConnName;
    cin >> ConnName;
    ss << "INSERT INTO connections(ConnName) VALUES('" << ConnName << "')";
    string query = ss.str();
    const char* q = query.c_str();
    qstate = mysql_query(conn, q);
    if(qstate == 0){
        cout << "The Connection Name is Inserted" << endl;
    }
    else{
        cout << " The Connection Name is Cannot be Inserted" << endl;
    }
}
int main()
{
    cout << "Welcome to DataBase Connection Test" << endl;
    dbConnection();
    insertData();
    return 0;
}
