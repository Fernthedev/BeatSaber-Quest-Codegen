#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusRichPresencePlatformHandler)
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusRichPresencePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusRichPresencePlatformHandler);
// Type: ::OculusRichPresencePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4672))
// CS Name: ::OculusRichPresencePlatformHandler*
class CORDL_TYPE OculusRichPresencePlatformHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::GlobalNamespace::IRichPresencePlatformHandler"
constexpr operator  ::GlobalNamespace::IRichPresencePlatformHandler*() noexcept;

/// @brief Method SetPresence addr 0x23738c4 size 0x308 virtual true final true
inline void SetPresence(::GlobalNamespace::IRichPresenceData*  richPresenceData) ;

/// @brief Method Clear addr 0x2373bcc size 0x9c virtual true final true
inline void Clear() ;

static inline ::GlobalNamespace::OculusRichPresencePlatformHandler* New_ctor() ;

/// @brief Method .ctor addr 0x2373c68 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusRichPresencePlatformHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusRichPresencePlatformHandler(OculusRichPresencePlatformHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusRichPresencePlatformHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusRichPresencePlatformHandler(OculusRichPresencePlatformHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusRichPresencePlatformHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusRichPresencePlatformHandler, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusRichPresencePlatformHandler*, "", "OculusRichPresencePlatformHandler");
