/************************************************************************************************
** File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _DARYADB_KOL_H_
#define _DARYADB_KOL_H_

class moin;

class DARYADB_EXPORT kol
{

   QX_REGISTER_FRIEND_CLASS(kol)

public:

   typedef qx::QxCollection<long, std::shared_ptr<moin> > type_list_of_moin;

protected:

   long m_code;
   QString m_name;
   type_list_of_moin m_list_of_moin;

public:

   kol();
   kol(const long & id);
   virtual ~kol();

   long getcode() const;
   QString getname() const;
   type_list_of_moin getlist_of_moin() const;
   type_list_of_moin & list_of_moin();
   const type_list_of_moin & list_of_moin() const;

   void setcode(const long & val);
   void setname(const QString & val);
   void setlist_of_moin(const type_list_of_moin & val);

   type_list_of_moin getlist_of_moin(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_moin & list_of_moin(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_moin(bool key = false) { Q_UNUSED(key); return "list_of_moin"; }

public:

   static QString column_code(bool key = false) { Q_UNUSED(key); return "code"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }

public:

   static QString table_name(bool key = false) { Q_UNUSED(key); return "kol"; }

};

typedef std::shared_ptr<kol> kol_ptr;
typedef qx::QxCollection<long, kol_ptr> list_of_kol;
typedef std::shared_ptr<list_of_kol> list_of_kol_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DARYADB(kol, qx::trait::no_base_class_defined, 0, kol)

#include "../include/moin.gen.h"

#include "../custom/include/kol.h"

#endif // _DARYADB_KOL_H_
