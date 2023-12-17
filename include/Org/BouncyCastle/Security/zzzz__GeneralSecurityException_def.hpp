#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GeneralSecurityException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class GeneralSecurityException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::GeneralSecurityException);
// Type: Org.BouncyCastle.Security::GeneralSecurityException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1717))
// CS Name: ::Org.BouncyCastle.Security::GeneralSecurityException*
class CORDL_TYPE GeneralSecurityException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor() ;

/// @brief Method .ctor addr 0x10f3e74 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x10f3ecc size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::GeneralSecurityException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x10f3f34 size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneralSecurityException(GeneralSecurityException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneralSecurityException(GeneralSecurityException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GeneralSecurityException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::GeneralSecurityException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::GeneralSecurityException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::GeneralSecurityException*, "Org.BouncyCastle.Security", "GeneralSecurityException");
