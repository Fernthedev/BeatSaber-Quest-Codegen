#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SaberTypeExtensions)
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberTypeExtensions);
// Type: ::SaberTypeExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15037))
// CS Name: ::SaberTypeExtensions*
class CORDL_TYPE SaberTypeExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method MatchesColorType addr 0x12a3f90 size 0x28 virtual false final false
static inline bool MatchesColorType(::GlobalNamespace::SaberType  saberType, ::GlobalNamespace::ColorType  colorType) ;

/// @brief Method Node addr 0x12a6714 size 0x10 virtual false final false
static inline ::UnityEngine::XR::XRNode Node(::GlobalNamespace::SaberType  saberType) ;

/// @brief Method MainSaber addr 0x12a6724 size 0xc virtual false final false
static inline ::GlobalNamespace::SaberType MainSaber(bool  leftHanded) ;

/// @brief Method ToSaberType addr 0x12a6730 size 0x88 virtual false final false
static inline ::GlobalNamespace::SaberType ToSaberType(::GlobalNamespace::ColorType  colorType) ;

// Ctor Parameters [CppParam { name: "", ty: "SaberTypeExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberTypeExtensions(SaberTypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberTypeExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberTypeExtensions(SaberTypeExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberTypeExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTypeExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTypeExtensions*, "", "SaberTypeExtensions");
