/************************************************************************************************
** File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/DaryaDB_precompiled_header.gen.h"

#include "../include/moin.gen.h"
#include "../include/kol.gen.h"
#include "../include/taf.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DARYADB(moin, moin)

namespace qx {

template <>
void register_class(QxClass<moin> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("moin");
   t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pData = t.id(& moin::m_code, "code", 0);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pData = t.data(& moin::m_name, "name", 0, true, true);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pRelation = t.relationManyToOne(& moin::m_code_kol, "code_kol", 0);
   pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME", "FK__kol");
   pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
   pRelation = t.relationOneToMany(& moin::m_list_of_taf, "list_of_taf", "code_moin", 0);

   qx::QxValidatorX<moin> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

moin::moin() : m_code(0) { ; }

moin::moin(const long & id) : m_code(id) { ; }

moin::~moin() { ; }

long moin::getcode() const { return m_code; }

QString moin::getname() const { return m_name; }

moin::type_code_kol moin::getcode_kol() const { return m_code_kol; }

moin::type_list_of_taf moin::getlist_of_taf() const { return m_list_of_taf; }

moin::type_list_of_taf & moin::list_of_taf() { return m_list_of_taf; }

const moin::type_list_of_taf & moin::list_of_taf() const { return m_list_of_taf; }

void moin::setcode(const long & val) { m_code = val; }

void moin::setname(const QString & val) { m_name = val; }

void moin::setcode_kol(const moin::type_code_kol & val) { m_code_kol = val; }

void moin::setlist_of_taf(const moin::type_list_of_taf & val) { m_list_of_taf = val; }

moin::type_code_kol moin::getcode_kol(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getcode_kol(); }
   QString sRelation = "{code} | code_kol";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   moin tmp;
   tmp.m_code = this->m_code;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_code_kol = tmp.m_code_kol; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_code_kol;
}

moin::type_list_of_taf moin::getlist_of_taf(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_taf(); }
   QString sRelation = "{code} | list_of_taf";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   moin tmp;
   tmp.m_code = this->m_code;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_taf = tmp.m_list_of_taf; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_taf;
}

moin::type_list_of_taf & moin::list_of_taf(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_taf(); }
   QString sRelation = "{code} | list_of_taf";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   moin tmp;
   tmp.m_code = this->m_code;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_taf = tmp.m_list_of_taf; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_taf;
}

