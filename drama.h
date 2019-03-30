//--------------------------------drama.h------------------------------------
//Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
//Author: Johnathan Hewit
//Created: 03/04/2019
//Modified: 03/06/2019
//---------------------------------------------------------------------------
//Purpose:
//---------------------------------------------------------------------------
//Notes:
//---------------------------------------------------------------------------
#ifndef DRAMA_H
#define DRAMA_H
#include <iostream>
#include "movie.h"
using namespace std;

class Drama: public Movie
{
public:
  //Constructors
  Drama();
  Drama(istream&);
  Drama(const string&, const string&);
  ~Drama();
  //Getters
  virtual void displayHeader() const;
  virtual void displayForHistory() const;
  //Operator Overloads
  virtual bool operator==(const Merchandise&) const;
  virtual bool operator<(const Merchandise&) const;
};
#endif
