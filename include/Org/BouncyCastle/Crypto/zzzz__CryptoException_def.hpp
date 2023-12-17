#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CryptoException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class CryptoException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::CryptoException);
// Type: Org.BouncyCastle.Crypto::CryptoException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1347))
// CS Name: ::Org.BouncyCastle.Crypto::CryptoException*
class CORDL_TYPE CryptoException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::Crypto::CryptoException* New_ctor() ;

/// @brief Method .ctor addr 0xfc5858 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::CryptoException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0xfc58b0 size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Crypto::CryptoException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0xfc5918 size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "CryptoException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoException(CryptoException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoException(CryptoException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CryptoException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::CryptoException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::CryptoException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::CryptoException*, "Org.BouncyCastle.Crypto", "CryptoException");
