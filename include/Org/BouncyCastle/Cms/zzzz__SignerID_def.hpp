#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerID)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SignerID);
// Type: Org.BouncyCastle.Cms::SignerID
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(678))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(688))
// CS Name: ::Org.BouncyCastle.Cms::SignerID*
class CORDL_TYPE SignerID : public ::Org::BouncyCastle::X509::Store::X509CertStoreSelector {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::Org::BouncyCastle::X509::Store::X509CertStoreSelector)]{};

/// @brief Method GetHashCode addr 0x1208a04 size 0xa4 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x1208aa8 size 0x12c virtual true final false
inline bool Equals(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Cms::SignerID* New_ctor() ;

/// @brief Method .ctor addr 0x1208bd4 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SignerID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignerID(SignerID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignerID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignerID(SignerID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignerID()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SignerID, 0x88>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerID*, "Org.BouncyCastle.Cms", "SignerID");
