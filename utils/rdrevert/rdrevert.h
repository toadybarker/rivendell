// rdrevert.h
//
// Revert the Rivendell database schema to an earlier version.
//
//   (C) Copyright 2016 Fred Gleason <fredg@paravelsystems.com>
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef RDREVERT_H
#define RDREVERT_H

#include <map>

#include <qobject.h>

#include <rdconfig.h>
#include <rddb.h>

#define RDREVERT_BASE_SCHEMA 242
#define RDREVERT_USAGE "[options]\n"

class MainObject : public QObject
{
 public:
  MainObject(QObject *parent=0,const char *name=0);

 private:
  void Revert(int schema) const;
  void Revert243() const;
  void Revert244() const;
  void Revert245() const;
  void Revert246() const;
  void Revert247() const;
  void Revert248() const;
  void Revert249() const;
  void Revert250() const;
  void Revert251() const;
  void Revert252() const;
  void Revert253() const;
  void Revert254() const;
  int GetVersion() const;
  void SetVersion(int schema) const;
  int MapSchema(const QString &ver);
  RDConfig *rev_config;
  QSqlDatabase *rev_db;
};


#endif  // RDREVERT_H