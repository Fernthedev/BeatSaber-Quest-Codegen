#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WhiteColorOrAlphaGroupEffect)
namespace GlobalNamespace {
class IBpmController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class __LightColorGroupEffect__InitData;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class WhiteColorOrAlphaGroupEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WhiteColorOrAlphaGroupEffect);
// Type: ::WhiteColorOrAlphaGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4923))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4926))
// CS Name: ::WhiteColorOrAlphaGroupEffect*
class CORDL_TYPE WhiteColorOrAlphaGroupEffect : public ::GlobalNamespace::LightColorGroupEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::GlobalNamespace::LightColorGroupEffect)]{};

/// @brief Field _defaultColor offset 0xa4
 __declspec(property(get=__get__defaultColor, put=__set__defaultColor)) ::UnityEngine::Color  _defaultColor;

constexpr void __set__defaultColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__defaultColor() ;

constexpr ::UnityEngine::Color const& __get__defaultColor() const;

static inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffect* New_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData*  initData, ::UnityEngine::Color  defaultColor, ::GlobalNamespace::LightWithIdManager*  lightManager, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IBpmController*  bpmController) ;

/// @brief Method .ctor addr 0x23a9364 size 0x3c virtual false final false
inline void _ctor(::GlobalNamespace::__LightColorGroupEffect__InitData*  initData, ::UnityEngine::Color  defaultColor, ::GlobalNamespace::LightWithIdManager*  lightManager, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IBpmController*  bpmController) ;

/// @brief Method GetColor addr 0x23a93a0 size 0x4c virtual true final false
inline ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType  colorType, bool  colorBoost, float_t  brightness) ;

// Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WhiteColorOrAlphaGroupEffect(WhiteColorOrAlphaGroupEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhiteColorOrAlphaGroupEffect(WhiteColorOrAlphaGroupEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WhiteColorOrAlphaGroupEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WhiteColorOrAlphaGroupEffect, 0xb8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WhiteColorOrAlphaGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WhiteColorOrAlphaGroupEffect*, "", "WhiteColorOrAlphaGroupEffect");
