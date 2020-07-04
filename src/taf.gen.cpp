/************************************************************************************************
** File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/DaryaDB_precompiled_header.gen.h"

#include "../include/taf.gen.h"
#include "../include/moin.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DARYADB(taf, taf)

namespace qx {

template <>
void register_class(QxClass<taf> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("taf");
   t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pData = t.id(& taf::m_code, "code", 0);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pData = t.data(& taf::m_name, "name", 0, true, true);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pRelation = t.relationManyToOne(& taf::m_code_moin, "code_moin", 0);
   pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME", "FK__moin");
   pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   qx::QxValidatorX<taf> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

taf::taf() : m_code(0) { ; }

taf::taf(const long & id) : m_code(id) { ; }

taf::~taf() { ; }

long taf::getcode() const { return m_code; }

QString taf::getname() const { return m_name; }

taf::type_code_moin taf::getcode_moin() const { return m_code_moin; }

void taf::setcode(const long & val) { m_code = val; }

void taf::setname(const QString & val) { m_name = val; }

void taf::setcode_moin(const taf::type_code_moin & val) { m_code_moin = val; }

taf::type_code_moin taf::getcode_moin(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getcode_moin(); }
   QString sRelation = "{code} | code_moin";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   taf tmp;
   tmp.m_code = this->m_code;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_code_moin = tmp.m_code_moin; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_code_moin;
}

