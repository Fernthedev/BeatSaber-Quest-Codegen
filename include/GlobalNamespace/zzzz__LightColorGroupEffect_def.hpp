#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorGroupEffect)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class __LightColorGroupEffect__InitData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IBpmController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupEffect;
}
namespace GlobalNamespace {
class __LightColorGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__LightColorGroupEffect__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4922))
// CS Name: ::LightColorGroupEffect::InitData*
class CORDL_TYPE __LightColorGroupEffect__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field groupId offset 0x10
 __declspec(property(get=__get_groupId, put=__set_groupId)) int32_t  groupId;

/// @brief Field elementId offset 0x14
 __declspec(property(get=__get_elementId, put=__set_elementId)) int32_t  elementId;

/// @brief Field lightId offset 0x18
 __declspec(property(get=__get_lightId, put=__set_lightId)) int32_t  lightId;

constexpr void __set_groupId(int32_t  value) ;

constexpr int32_t& __get_groupId() ;

constexpr int32_t const& __get_groupId() const;

constexpr void __set_elementId(int32_t  value) ;

constexpr int32_t& __get_elementId() ;

constexpr int32_t const& __get_elementId() const;

constexpr void __set_lightId(int32_t  value) ;

constexpr int32_t& __get_lightId() ;

constexpr int32_t const& __get_lightId() const;

static inline ::GlobalNamespace::__LightColorGroupEffect__InitData* New_ctor(int32_t  groupId, int32_t  elementId, int32_t  lightId) ;

/// @brief Method .ctor addr 0x23a8d44 size 0x3c virtual false final false
inline void _ctor(int32_t  groupId, int32_t  elementId, int32_t  lightId) ;

// Ctor Parameters [CppParam { name: "", ty: "__LightColorGroupEffect__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LightColorGroupEffect__InitData(__LightColorGroupEffect__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LightColorGroupEffect__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LightColorGroupEffect__InitData(__LightColorGroupEffect__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LightColorGroupEffect__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightColorGroupEffect__InitData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LightColorGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4923))
// CS Name: ::LightColorGroupEffect*
class CORDL_TYPE LightColorGroupEffect : public ::System::Object {
public:
// Declarations
using InitData = ::GlobalNamespace::__LightColorGroupEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::Object)]{};

/// @brief Field _colorManager offset 0x10
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _lightId offset 0x18
 __declspec(property(get=__get__lightId, put=__set__lightId)) int32_t  _lightId;

/// @brief Field _lightManager offset 0x20
 __declspec(property(get=__get__lightManager, put=__set__lightManager)) ::GlobalNamespace::LightWithIdManager*  _lightManager;

/// @brief Field _tweeningManager offset 0x28
 __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager)) ::Tweening::SongTimeTweeningManager*  _tweeningManager;

/// @brief Field _beatmapCallbacksController offset 0x30
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _bpmController offset 0x38
 __declspec(property(get=__get__bpmController, put=__set__bpmController)) ::GlobalNamespace::IBpmController*  _bpmController;

/// @brief Field _floatTween offset 0x40
 __declspec(property(get=__get__floatTween, put=__set__floatTween)) ::Tweening::FloatTween*  _floatTween;

/// @brief Field _lightColorBeatmapEventCallbackWrapper offset 0x48
 __declspec(property(get=__get__lightColorBeatmapEventCallbackWrapper, put=__set__lightColorBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _lightColorBeatmapEventCallbackWrapper;

/// @brief Field _fromColor offset 0x50
 __declspec(property(get=__get__fromColor, put=__set__fromColor)) ::UnityEngine::Color  _fromColor;

/// @brief Field _toColor offset 0x60
 __declspec(property(get=__get__toColor, put=__set__toColor)) ::UnityEngine::Color  _toColor;

/// @brief Field _alternativeFromColor offset 0x70
 __declspec(property(get=__get__alternativeFromColor, put=__set__alternativeFromColor)) ::UnityEngine::Color  _alternativeFromColor;

/// @brief Field _alternativeToColor offset 0x80
 __declspec(property(get=__get__alternativeToColor, put=__set__alternativeToColor)) ::UnityEngine::Color  _alternativeToColor;

/// @brief Field _fromStrobeFrequency offset 0x90
 __declspec(property(get=__get__fromStrobeFrequency, put=__set__fromStrobeFrequency)) float_t  _fromStrobeFrequency;

/// @brief Field _toStrobeFrequency offset 0x94
 __declspec(property(get=__get__toStrobeFrequency, put=__set__toStrobeFrequency)) float_t  _toStrobeFrequency;

/// @brief Field _fromStrobeBrightness offset 0x98
 __declspec(property(get=__get__fromStrobeBrightness, put=__set__fromStrobeBrightness)) float_t  _fromStrobeBrightness;

/// @brief Field _toStrobeBrightness offset 0x9c
 __declspec(property(get=__get__toStrobeBrightness, put=__set__toStrobeBrightness)) float_t  _toStrobeBrightness;

/// @brief Field _strobeFade offset 0xa0
 __declspec(property(get=__get__strobeFade, put=__set__strobeFade)) bool  _strobeFade;

/// @brief Field _usingBoostColors offset 0xa1
 __declspec(property(get=__get__usingBoostColors, put=__set__usingBoostColors)) bool  _usingBoostColors;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__lightId(int32_t  value) ;

constexpr int32_t& __get__lightId() ;

constexpr int32_t const& __get__lightId() const;

constexpr void __set__lightManager(::GlobalNamespace::LightWithIdManager*  value) ;

constexpr ::GlobalNamespace::LightWithIdManager* __get__lightManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> __get__lightManager() const;

constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager*  value) ;

constexpr ::Tweening::SongTimeTweeningManager* __get__tweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> __get__tweeningManager() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__bpmController(::GlobalNamespace::IBpmController*  value) ;

constexpr ::GlobalNamespace::IBpmController* __get__bpmController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBpmController*> __get__bpmController() const;

constexpr void __set__floatTween(::Tweening::FloatTween*  value) ;

constexpr ::Tweening::FloatTween* __get__floatTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> __get__floatTween() const;

constexpr void __set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__lightColorBeatmapEventCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__lightColorBeatmapEventCallbackWrapper() const;

constexpr void __set__fromColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__fromColor() ;

constexpr ::UnityEngine::Color const& __get__fromColor() const;

constexpr void __set__toColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__toColor() ;

constexpr ::UnityEngine::Color const& __get__toColor() const;

constexpr void __set__alternativeFromColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__alternativeFromColor() ;

constexpr ::UnityEngine::Color const& __get__alternativeFromColor() const;

constexpr void __set__alternativeToColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__alternativeToColor() ;

constexpr ::UnityEngine::Color const& __get__alternativeToColor() const;

constexpr void __set__fromStrobeFrequency(float_t  value) ;

constexpr float_t& __get__fromStrobeFrequency() ;

constexpr float_t const& __get__fromStrobeFrequency() const;

constexpr void __set__toStrobeFrequency(float_t  value) ;

constexpr float_t& __get__toStrobeFrequency() ;

constexpr float_t const& __get__toStrobeFrequency() const;

constexpr void __set__fromStrobeBrightness(float_t  value) ;

constexpr float_t& __get__fromStrobeBrightness() ;

constexpr float_t const& __get__fromStrobeBrightness() const;

constexpr void __set__toStrobeBrightness(float_t  value) ;

constexpr float_t& __get__toStrobeBrightness() ;

constexpr float_t const& __get__toStrobeBrightness() const;

constexpr void __set__strobeFade(bool  value) ;

constexpr bool& __get__strobeFade() ;

constexpr bool const& __get__strobeFade() const;

constexpr void __set__usingBoostColors(bool  value) ;

constexpr bool& __get__usingBoostColors() ;

constexpr bool const& __get__usingBoostColors() const;

static inline ::GlobalNamespace::LightColorGroupEffect* New_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData*  initData, ::GlobalNamespace::LightWithIdManager*  lightManager, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IBpmController*  bpmController) ;

/// @brief Method .ctor addr 0x23a8070 size 0x35c virtual false final false
inline void _ctor(::GlobalNamespace::__LightColorGroupEffect__InitData*  initData, ::GlobalNamespace::LightWithIdManager*  lightManager, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IBpmController*  bpmController) ;

/// @brief Method Cleanup addr 0x23a83cc size 0x9c virtual false final false
inline void Cleanup() ;

/// @brief Method HandleColorChangeBeatmapEvent addr 0x23a8468 size 0x480 virtual false final false
inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData*  currentEventData) ;

/// @brief Method UseBoostColors addr 0x23a8a0c size 0x180 virtual false final false
inline void UseBoostColors(bool  useBoostColors) ;

/// @brief Method GetColor addr 0x23a8b8c size 0x34 virtual true final false
inline ::UnityEngine::Color GetColor(::GlobalNamespace::EnvironmentColorType  colorType, bool  colorBoost, float_t  brightness) ;

/// @brief Method SetData addr 0x23a8bc0 size 0x184 virtual false final false
inline void SetData(::UnityEngine::Color  fromColor, ::UnityEngine::Color  toColor, ::UnityEngine::Color  alternativeFromColor, ::UnityEngine::Color  alternativeToColor, float_t  fromStrobeBeatFrequency, float_t  toStrobeBeatFrequency, float_t  fromStrobeBrightness, float_t  toStrobeBrightness, bool  strobeFade) ;

/// @brief Method SetColor addr 0x23a88e8 size 0x124 virtual false final false
inline void SetColor(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightColorGroupEffect(LightColorGroupEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightColorGroupEffect(LightColorGroupEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightColorGroupEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroupEffect, 0xa8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupEffect*, "", "LightColorGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__LightColorGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightColorGroupEffect__InitData*, "", "LightColorGroupEffect/InitData");
