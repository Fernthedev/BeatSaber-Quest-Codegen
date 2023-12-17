#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__KeyException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidKeyException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class InvalidKeyException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::InvalidKeyException);
// Type: Org.BouncyCastle.Security::InvalidKeyException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1749))
// CS Name: ::Org.BouncyCastle.Security::InvalidKeyException*
class CORDL_TYPE InvalidKeyException : public ::Org::BouncyCastle::Security::KeyException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Security::KeyException)]{};

static inline ::Org::BouncyCastle::Security::InvalidKeyException* New_ctor() ;

/// @brief Method .ctor addr 0x112ee84 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Security::InvalidKeyException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x112ee8c size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::InvalidKeyException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x112ee94 size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidKeyException(InvalidKeyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidKeyException(InvalidKeyException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvalidKeyException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::InvalidKeyException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::InvalidKeyException*, "Org.BouncyCastle.Security", "InvalidKeyException");
