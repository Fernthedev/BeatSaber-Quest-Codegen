#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerStringBase)
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerStringBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerStringBase);
// Type: Org.BouncyCastle.Asn1::DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(33))
// CS Name: ::Org.BouncyCastle.Asn1::DerStringBase*
class CORDL_TYPE DerStringBase : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::Org::BouncyCastle::Asn1::Asn1Object)]{};

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1String"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1String*() noexcept;

static inline ::Org::BouncyCastle::Asn1::DerStringBase* New_ctor() ;

/// @brief Method .ctor addr 0xe6a5e4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method GetString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW GetString() ;

/// @brief Method ToString addr 0xe6a5ec size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method Asn1GetHashCode addr 0xe6a5f8 size 0x24 virtual true final false
inline int32_t Asn1GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "DerStringBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerStringBase(DerStringBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerStringBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerStringBase(DerStringBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DerStringBase()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerStringBase, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerStringBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerStringBase*, "Org.BouncyCastle.Asn1", "DerStringBase");
