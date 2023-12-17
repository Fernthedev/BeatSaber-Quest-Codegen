#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EncryptionException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class EncryptionException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::EncryptionException);
// Type: Org.BouncyCastle.Security::EncryptionException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1679))
// CS Name: ::Org.BouncyCastle.Security::EncryptionException*
class CORDL_TYPE EncryptionException : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::IO::IOException)]{};

static inline ::Org::BouncyCastle::Security::EncryptionException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x10cfe04 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::EncryptionException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x10cfe0c size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptionException(EncryptionException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptionException(EncryptionException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EncryptionException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::EncryptionException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::EncryptionException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::EncryptionException*, "Org.BouncyCastle.Security", "EncryptionException");
