#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class KeyException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::KeyException);
// Type: Org.BouncyCastle.Security::KeyException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1748))
// CS Name: ::Org.BouncyCastle.Security::KeyException*
class CORDL_TYPE KeyException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Security::GeneralSecurityException)]{};

static inline ::Org::BouncyCastle::Security::KeyException* New_ctor() ;

/// @brief Method .ctor addr 0x112ee6c size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Security::KeyException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x112ee74 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::KeyException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x112ee7c size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "KeyException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyException(KeyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyException(KeyException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::KeyException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::KeyException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::KeyException*, "Org.BouncyCastle.Security", "KeyException");
