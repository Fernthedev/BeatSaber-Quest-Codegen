#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(RenderSettings)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class RenderSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RenderSettings);
// Type: UnityEngine::RenderSettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10087))
// CS Name: ::UnityEngine::RenderSettings*
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Object)]{};

/// @brief Method get_fogColor addr 0x2cb68c8 size 0x48 virtual false final false
static inline ::UnityEngine::Color get_fogColor() ;

/// @brief Method set_fogColor addr 0x2cb694c size 0x44 virtual false final false
static inline void set_fogColor(::UnityEngine::Color  value) ;

/// @brief Method get_fogColor_Injected addr 0x2cb6910 size 0x3c virtual false final false
static inline void get_fogColor_Injected(ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method set_fogColor_Injected addr 0x2cb6990 size 0x3c virtual false final false
static inline void set_fogColor_Injected(ByRef<::UnityEngine::Color>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderSettings(RenderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderSettings(RenderSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RenderSettings()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderSettings, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RenderSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
