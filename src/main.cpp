#include <iostream>
#include "request/request.hpp"

using namespace std;

using Board = char[9][9];

struct Position
{
  Board board;
};

void parse_sfen(string sfen)
{
  cout << sfen.length() << endl;
  for (size_t i = 0; i < sfen.length(); i++)
  {
    cout << sfen[i] << endl;
  }
}

int main(void)
{
  try
  {
    cout << "start" << endl;
    request::GetTest().wait();
    cout << "done!" << endl;
  }
  catch (const std::exception &e)
  {
    printf("Error exception:%s\n", e.what());
  }

  // sqlite3 *db;
  // int result = sqlite3_open("test.db", &db);
  // if (result != SQLITE_OK)
  // {
  //   cout << "failed to open DB" << endl;
  //   return 1;
  // }
  // cout << "DB opened!" << endl;

  // char *err;
  // sqlite3_exec(
  //     db, "CREATE TABLE matches COLUMNS id INTEGER PRIMARY KEY;", [](void *a, int b, char **c, char **d)
  //     {
  //       cout << "ooo!!!" << endl;
  //       return 0;
  //     },
  //     nullptr, &err);

  // sqlite3_close(db);
  // cout << "DB closed!" << endl;

  string s;
  cin >> s;

  parse_sfen(s);

  return 0;
}
