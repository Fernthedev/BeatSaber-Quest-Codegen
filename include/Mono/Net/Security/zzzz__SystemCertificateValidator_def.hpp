#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemCertificateValidator)
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyUsageFlags;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
// Forward declare root types
namespace Mono::Net::Security {
class SystemCertificateValidator;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::SystemCertificateValidator);
// Type: Mono.Net.Security::SystemCertificateValidator
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8846))
// CS Name: ::Mono.Net.Security::SystemCertificateValidator*
class CORDL_TYPE SystemCertificateValidator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_is_macosx(bool  value) ;

static inline bool getStaticF_is_macosx() ;

static inline void setStaticF_s_flags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  value) ;

static inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags getStaticF_s_flags() ;

/// @brief Method NeedsChain addr 0x2820cb8 size 0x8 virtual false final false
static inline bool NeedsChain(::Mono::Security::Interface::MonoTlsSettings*  settings) ;

// Ctor Parameters [CppParam { name: "", ty: "SystemCertificateValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemCertificateValidator(SystemCertificateValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemCertificateValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemCertificateValidator(SystemCertificateValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SystemCertificateValidator()  = default;
public:


// Fields

// Static field is_macosx

// Static field s_flags


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::SystemCertificateValidator, 0x10>, "Size mismatch!");

} // namespace end def Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::SystemCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::SystemCertificateValidator*, "Mono.Net.Security", "SystemCertificateValidator");
