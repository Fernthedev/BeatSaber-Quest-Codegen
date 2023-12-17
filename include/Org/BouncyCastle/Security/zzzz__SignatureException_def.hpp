#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignatureException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SignatureException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::SignatureException);
// Type: Org.BouncyCastle.Security::SignatureException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1758))
// CS Name: ::Org.BouncyCastle.Security::SignatureException*
class CORDL_TYPE SignatureException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Security::GeneralSecurityException)]{};

static inline ::Org::BouncyCastle::Security::SignatureException* New_ctor() ;

/// @brief Method .ctor addr 0x1140fcc size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Security::SignatureException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x1140fd4 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::SignatureException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x1140fdc size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "SignatureException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignatureException(SignatureException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignatureException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignatureException(SignatureException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignatureException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::SignatureException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::SignatureException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::SignatureException*, "Org.BouncyCastle.Security", "SignatureException");
