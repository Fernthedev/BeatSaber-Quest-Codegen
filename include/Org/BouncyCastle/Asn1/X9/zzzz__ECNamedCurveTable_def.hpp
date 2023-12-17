#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ECNamedCurveTable)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class ECNamedCurveTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
// Type: Org.BouncyCastle.Asn1.X9::ECNamedCurveTable
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(414))
// CS Name: ::Org.BouncyCastle.Asn1.X9::ECNamedCurveTable*
class CORDL_TYPE ECNamedCurveTable : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetByName addr 0x11a8ba0 size 0x19c virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW  name) ;

/// @brief Method GetName addr 0x11a8d3c size 0x19c virtual false final false
static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetOid addr 0x11a8ed8 size 0x19c virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW  name) ;

/// @brief Method GetByOid addr 0x11a9074 size 0x168 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method get_Names addr 0x11a91dc size 0x204 virtual false final false
static inline ::System::Collections::IEnumerable* get_Names() ;

static inline ::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable* New_ctor() ;

/// @brief Method .ctor addr 0x11a93e0 size 0x1008 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECNamedCurveTable(ECNamedCurveTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECNamedCurveTable(ECNamedCurveTable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECNamedCurveTable()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable*, "Org.BouncyCastle.Asn1.X9", "ECNamedCurveTable");
