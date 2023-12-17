#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NtlmSettings)
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class NtlmSettings;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::NtlmSettings);
// Type: Mono.Security.Protocol.Ntlm::NtlmSettings
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13768))
// CS Name: ::Mono.Security.Protocol.Ntlm::NtlmSettings*
class CORDL_TYPE NtlmSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_defaultAuthLevel(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  value) ;

static inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel getStaticF_defaultAuthLevel() ;

/// @brief Method get_DefaultAuthLevel addr 0x2401374 size 0x58 virtual false final false
static inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel() ;

// Ctor Parameters [CppParam { name: "", ty: "NtlmSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NtlmSettings(NtlmSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NtlmSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NtlmSettings(NtlmSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NtlmSettings()  = default;
public:


// Fields

// Static field defaultAuthLevel


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::NtlmSettings, 0x10>, "Size mismatch!");

} // namespace end def Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::NtlmSettings);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::NtlmSettings*, "Mono.Security.Protocol.Ntlm", "NtlmSettings");
