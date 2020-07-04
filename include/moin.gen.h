/************************************************************************************************
** File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _DARYADB_MOIN_H_
#define _DARYADB_MOIN_H_

class kol;
class taf;

class DARYADB_EXPORT moin
{

   QX_REGISTER_FRIEND_CLASS(moin)

public:

   typedef std::shared_ptr<kol> type_code_kol;
   typedef qx::QxCollection<long, std::shared_ptr<taf> > type_list_of_taf;

protected:

   long m_code;
   QString m_name;
   type_code_kol m_code_kol;
   type_list_of_taf m_list_of_taf;

public:

   moin();
   moin(const long & id);
   virtual ~moin();

   long getcode() const;
   QString getname() const;
   type_code_kol getcode_kol() const;
   type_list_of_taf getlist_of_taf() const;
   type_list_of_taf & list_of_taf();
   const type_list_of_taf & list_of_taf() const;

   void setcode(const long & val);
   void setname(const QString & val);
   void setcode_kol(const type_code_kol & val);
   void setlist_of_taf(const type_list_of_taf & val);

   type_code_kol getcode_kol(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_taf getlist_of_taf(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_taf & list_of_taf(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_code_kol(bool key = false) { Q_UNUSED(key); return "code_kol"; }
   static QString relation_list_of_taf(bool key = false) { Q_UNUSED(key); return "list_of_taf"; }

public:

   static QString column_code(bool key = false) { Q_UNUSED(key); return "code"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }

public:

   static QString table_name(bool key = false) { Q_UNUSED(key); return "moin"; }

};

typedef std::shared_ptr<moin> moin_ptr;
typedef qx::QxCollection<long, moin_ptr> list_of_moin;
typedef std::shared_ptr<list_of_moin> list_of_moin_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DARYADB(moin, qx::trait::no_base_class_defined, 0, moin)

#include "../include/kol.gen.h"
#include "../include/taf.gen.h"

#include "../custom/include/moin.h"

#endif // _DARYADB_MOIN_H_
