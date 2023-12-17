#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CredentialCache)
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class NetworkCredential;
}
// Forward declare root types
namespace System::Net {
class CredentialCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CredentialCache);
// Type: System.Net::CredentialCache
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9059))
// CS Name: ::System.Net::CredentialCache*
class CORDL_TYPE CredentialCache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method get_DefaultCredentials addr 0x299b568 size 0x58 virtual false final false
static inline ::System::Net::ICredentials* get_DefaultCredentials() ;

/// @brief Method get_DefaultNetworkCredentials addr 0x299b5c0 size 0x58 virtual false final false
static inline ::System::Net::NetworkCredential* get_DefaultNetworkCredentials() ;

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CredentialCache(CredentialCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CredentialCache(CredentialCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CredentialCache()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CredentialCache, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::CredentialCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CredentialCache*, "System.Net", "CredentialCache");
