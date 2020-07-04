/************************************************************************************************
** File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _DARYADB_TAF_H_
#define _DARYADB_TAF_H_

class moin;

class DARYADB_EXPORT taf
{

   QX_REGISTER_FRIEND_CLASS(taf)

public:

   typedef std::shared_ptr<moin> type_code_moin;

protected:

   long m_code;
   QString m_name;
   type_code_moin m_code_moin;

public:

   taf();
   taf(const long & id);
   virtual ~taf();

   long getcode() const;
   QString getname() const;
   type_code_moin getcode_moin() const;

   void setcode(const long & val);
   void setname(const QString & val);
   void setcode_moin(const type_code_moin & val);

   type_code_moin getcode_moin(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_code_moin(bool key = false) { Q_UNUSED(key); return "code_moin"; }

public:

   static QString column_code(bool key = false) { Q_UNUSED(key); return "code"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }

public:

   static QString table_name(bool key = false) { Q_UNUSED(key); return "taf"; }

};

typedef std::shared_ptr<taf> taf_ptr;
typedef qx::QxCollection<long, taf_ptr> list_of_taf;
typedef std::shared_ptr<list_of_taf> list_of_taf_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DARYADB(taf, qx::trait::no_base_class_defined, 0, taf)

#include "../include/moin.gen.h"

#include "../custom/include/taf.h"

#endif // _DARYADB_TAF_H_
