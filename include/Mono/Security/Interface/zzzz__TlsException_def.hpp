#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TlsException)
namespace Mono::Security::Interface {
class Alert;
}
namespace Mono::Security::Interface {
struct AlertDescription;
}
// Forward declare root types
namespace Mono::Security::Interface {
class TlsException;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::TlsException);
// Type: Mono.Security.Interface::TlsException
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13785))
// CS Name: ::Mono.Security.Interface::TlsException*
class CORDL_TYPE TlsException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::Exception)]{};

/// @brief Field alert offset 0x90
 __declspec(property(get=__get_alert, put=__set_alert)) ::Mono::Security::Interface::Alert*  alert;

constexpr void __set_alert(::Mono::Security::Interface::Alert*  value) ;

constexpr ::Mono::Security::Interface::Alert* __get_alert() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::Alert*> __get_alert() const;

static inline ::Mono::Security::Interface::TlsException* New_ctor(::Mono::Security::Interface::Alert*  alert, ::StringW  message) ;

/// @brief Method .ctor addr 0x24031c0 size 0x74 virtual false final false
inline void _ctor(::Mono::Security::Interface::Alert*  alert, ::StringW  message) ;

static inline ::Mono::Security::Interface::TlsException* New_ctor(::Mono::Security::Interface::AlertDescription  description, ::StringW  message) ;

/// @brief Method .ctor addr 0x2403234 size 0x7c virtual false final false
inline void _ctor(::Mono::Security::Interface::AlertDescription  description, ::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsException(TlsException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsException(TlsException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsException()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::TlsException, 0x98>, "Size mismatch!");

} // namespace end def Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::TlsException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::TlsException*, "Mono.Security.Interface", "TlsException");
