#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsFatalAlert)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsFatalAlert;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert);
// Type: Org.BouncyCastle.Crypto.Tls::TlsFatalAlert
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1307))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1309))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsFatalAlert*
class CORDL_TYPE TlsFatalAlert : public ::Org::BouncyCastle::Crypto::Tls::TlsException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Crypto::Tls::TlsException)]{};

/// @brief Field alertDescription offset 0x8c
 __declspec(property(get=__get_alertDescription, put=__set_alertDescription)) uint8_t  alertDescription;

 __declspec(property(get=get_AlertDescription)) uint8_t  AlertDescription;

constexpr void __set_alertDescription(uint8_t  value) ;

constexpr uint8_t& __get_alertDescription() ;

constexpr uint8_t const& __get_alertDescription() const;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert* New_ctor(uint8_t  alertDescription) ;

/// @brief Method .ctor addr 0xfaa180 size 0x40 virtual false final false
inline void _ctor(uint8_t  alertDescription) ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert* New_ctor(uint8_t  alertDescription, ::System::Exception*  alertCause) ;

/// @brief Method .ctor addr 0xfaa570 size 0x44 virtual false final false
inline void _ctor(uint8_t  alertDescription, ::System::Exception*  alertCause) ;

/// @brief Method get_AlertDescription addr 0xfae004 size 0x8 virtual true final false
inline uint8_t get_AlertDescription() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsFatalAlert(TlsFatalAlert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsFatalAlert(TlsFatalAlert const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsFatalAlert()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*, "Org.BouncyCastle.Crypto.Tls", "TlsFatalAlert");
