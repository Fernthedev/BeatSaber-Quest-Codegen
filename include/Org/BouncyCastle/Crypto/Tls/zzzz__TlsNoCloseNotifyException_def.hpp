#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__EndOfStreamException_def.hpp"
CORDL_MODULE_EXPORT(TlsNoCloseNotifyException)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNoCloseNotifyException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException);
// Type: Org.BouncyCastle.Crypto.Tls::TlsNoCloseNotifyException
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1312))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsNoCloseNotifyException*
class CORDL_TYPE TlsNoCloseNotifyException : public ::System::IO::EndOfStreamException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::IO::EndOfStreamException)]{};

static inline ::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException* New_ctor() ;

/// @brief Method .ctor addr 0xfaecf8 size 0x4c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsNoCloseNotifyException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsNoCloseNotifyException(TlsNoCloseNotifyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsNoCloseNotifyException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsNoCloseNotifyException(TlsNoCloseNotifyException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsNoCloseNotifyException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException*, "Org.BouncyCastle.Crypto.Tls", "TlsNoCloseNotifyException");
