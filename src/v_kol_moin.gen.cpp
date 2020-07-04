/************************************************************************************************
** File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/DaryaDB_precompiled_header.gen.h"

#include "../include/v_kol_moin.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DARYADB(v_kol_moin, v_kol_moin)

namespace qx {

template <>
void register_class(QxClass<v_kol_moin> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("v_kol_moin");
   t.setDaoReadOnly(true);
   t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   pData = t.data(& v_kol_moin::m_code, "code", 0, true, true);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
   pData = t.data(& v_kol_moin::m_name, "name", 0, true, true);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
   pData = t.data(& v_kol_moin::m_moin_code, "moin_code", 0, true, true);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
   pData = t.data(& v_kol_moin::m_moin_name, "moin_name", 0, true, true);
   pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

   qx::QxValidatorX<v_kol_moin> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

v_kol_moin::v_kol_moin() : m_qx_ee_no_id(0), m_code(0), m_moin_code(0) { ; }

v_kol_moin::v_kol_moin(const long & id) : m_qx_ee_no_id(id), m_code(0), m_moin_code(0) { ; }

v_kol_moin::~v_kol_moin() { ; }

long v_kol_moin::getcode() const { return m_code; }

QString v_kol_moin::getname() const { return m_name; }

long v_kol_moin::getmoin_code() const { return m_moin_code; }

QString v_kol_moin::getmoin_name() const { return m_moin_name; }

void v_kol_moin::setcode(const long & val) { m_code = val; }

void v_kol_moin::setname(const QString & val) { m_name = val; }

void v_kol_moin::setmoin_code(const long & val) { m_moin_code = val; }

void v_kol_moin::setmoin_name(const QString & val) { m_moin_name = val; }

