#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(QCStatement)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class QCStatement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::QCStatement
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(331))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::QCStatement*
class CORDL_TYPE QCStatement : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field qcStatementId offset 0x10
 __declspec(property(get=__get_qcStatementId, put=__set_qcStatementId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  qcStatementId;

/// @brief Field qcStatementInfo offset 0x18
 __declspec(property(get=__get_qcStatementInfo, put=__set_qcStatementInfo)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  qcStatementInfo;

 __declspec(property(get=get_StatementId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  StatementId;

 __declspec(property(get=get_StatementInfo)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  StatementInfo;

constexpr void __set_qcStatementId(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_qcStatementId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_qcStatementId() const;

constexpr void __set_qcStatementInfo(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_qcStatementInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_qcStatementInfo() const;

/// @brief Method GetInstance addr 0x1081594 size 0x168 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x10816fc size 0xc4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  qcStatementId) ;

/// @brief Method .ctor addr 0x10817c0 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  qcStatementId) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  qcStatementId, ::Org::BouncyCastle::Asn1::Asn1Encodable*  qcStatementInfo) ;

/// @brief Method .ctor addr 0x10817e8 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  qcStatementId, ::Org::BouncyCastle::Asn1::Asn1Encodable*  qcStatementInfo) ;

/// @brief Method get_StatementId addr 0x1081814 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_StatementId() ;

/// @brief Method get_StatementInfo addr 0x108181c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_StatementInfo() ;

/// @brief Method ToAsn1Object addr 0x1081824 size 0x148 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "QCStatement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QCStatement(QCStatement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QCStatement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QCStatement(QCStatement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QCStatement()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement*, "Org.BouncyCastle.Asn1.X509.Qualified", "QCStatement");
