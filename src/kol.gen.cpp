/************************************************************************************************
** File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/DaryaDB_precompiled_header.gen.h"

#include "../include/kol.gen.h"
#include "../include/moin.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DARYADB(kol, kol)

namespace qx {

template <>
void register_class(QxClass<kol> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("kol");
   t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pData = t.id(& kol::m_code, "code", 0);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pData = t.data(& kol::m_name, "name", 0, true, true);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pRelation = t.relationOneToMany(& kol::m_list_of_moin, "list_of_moin", "code_kol", 0);

   qx::QxValidatorX<kol> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

kol::kol() : m_code(0) { ; }

kol::kol(const long & id) : m_code(id) { ; }

kol::~kol() { ; }

long kol::getcode() const { return m_code; }

QString kol::getname() const { return m_name; }

kol::type_list_of_moin kol::getlist_of_moin() const { return m_list_of_moin; }

kol::type_list_of_moin & kol::list_of_moin() { return m_list_of_moin; }

const kol::type_list_of_moin & kol::list_of_moin() const { return m_list_of_moin; }

void kol::setcode(const long & val) { m_code = val; }

void kol::setname(const QString & val) { m_name = val; }

void kol::setlist_of_moin(const kol::type_list_of_moin & val) { m_list_of_moin = val; }

kol::type_list_of_moin kol::getlist_of_moin(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_moin(); }
   QString sRelation = "{code} | list_of_moin";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   kol tmp;
   tmp.m_code = this->m_code;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_moin = tmp.m_list_of_moin; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_moin;
}

kol::type_list_of_moin & kol::list_of_moin(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_moin(); }
   QString sRelation = "{code} | list_of_moin";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   kol tmp;
   tmp.m_code = this->m_code;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_moin = tmp.m_list_of_moin; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_moin;
}

