#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameEntryConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509DefaultEntryConverter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509DefaultEntryConverter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter);
// Type: Org.BouncyCastle.Asn1.X509::X509DefaultEntryConverter
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(403))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(404))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509DefaultEntryConverter*
class CORDL_TYPE X509DefaultEntryConverter : public ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter)]{};

/// @brief Method GetConvertedValue addr 0x119d8bc size 0x398 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::StringW  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter* New_ctor() ;

/// @brief Method .ctor addr 0x119dc54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509DefaultEntryConverter(X509DefaultEntryConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509DefaultEntryConverter(X509DefaultEntryConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509DefaultEntryConverter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*, "Org.BouncyCastle.Asn1.X509", "X509DefaultEntryConverter");
