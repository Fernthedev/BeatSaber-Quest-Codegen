#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__CryptoException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MaxBytesExceededException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class MaxBytesExceededException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::MaxBytesExceededException);
// Type: Org.BouncyCastle.Crypto::MaxBytesExceededException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1351))
// CS Name: ::Org.BouncyCastle.Crypto::MaxBytesExceededException*
class CORDL_TYPE MaxBytesExceededException : public ::Org::BouncyCastle::Crypto::CryptoException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Crypto::CryptoException)]{};

static inline ::Org::BouncyCastle::Crypto::MaxBytesExceededException* New_ctor() ;

/// @brief Method .ctor addr 0xfc599c size 0x4 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::MaxBytesExceededException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0xfc59a0 size 0x4 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Crypto::MaxBytesExceededException* New_ctor(::StringW  message, ::System::Exception*  e) ;

/// @brief Method .ctor addr 0xfc59a4 size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "MaxBytesExceededException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaxBytesExceededException(MaxBytesExceededException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaxBytesExceededException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaxBytesExceededException(MaxBytesExceededException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaxBytesExceededException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::MaxBytesExceededException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::MaxBytesExceededException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::MaxBytesExceededException*, "Org.BouncyCastle.Crypto", "MaxBytesExceededException");
