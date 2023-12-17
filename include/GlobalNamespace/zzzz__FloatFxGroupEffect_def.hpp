#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxGroupEffect)
namespace Tweening {
class SongTimeTweeningManager;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
namespace GlobalNamespace {
class __FloatFxGroupEffect__InitData;
}
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffect;
}
namespace GlobalNamespace {
class __FloatFxGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__FloatFxGroupEffect__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4907))
// CS Name: ::FloatFxGroupEffect::InitData*
class CORDL_TYPE __FloatFxGroupEffect__InitData : public ::System::Object {
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

/// @brief Field target offset 0x18
 __declspec(property(get=__get_target, put=__set_target)) ::GlobalNamespace::FloatFxGroupEffectTarget*  target;

constexpr void __set_groupId(int32_t  value) ;

constexpr int32_t& __get_groupId() ;

constexpr int32_t const& __get_groupId() const;

constexpr void __set_elementId(int32_t  value) ;

constexpr int32_t& __get_elementId() ;

constexpr int32_t const& __get_elementId() const;

constexpr void __set_target(::GlobalNamespace::FloatFxGroupEffectTarget*  value) ;

constexpr ::GlobalNamespace::FloatFxGroupEffectTarget* __get_target() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> __get_target() const;

static inline ::GlobalNamespace::__FloatFxGroupEffect__InitData* New_ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::FloatFxGroupEffectTarget*  target) ;

/// @brief Method .ctor addr 0x23a5f94 size 0x3c virtual false final false
inline void _ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::FloatFxGroupEffectTarget*  target) ;

// Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffect__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FloatFxGroupEffect__InitData(__FloatFxGroupEffect__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffect__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FloatFxGroupEffect__InitData(__FloatFxGroupEffect__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FloatFxGroupEffect__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FloatFxGroupEffect__InitData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FloatFxGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4908))
// CS Name: ::FloatFxGroupEffect*
class CORDL_TYPE FloatFxGroupEffect : public ::System::Object {
public:
// Declarations
using InitData = ::GlobalNamespace::__FloatFxGroupEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _tweeningManager offset 0x10
 __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager)) ::Tweening::SongTimeTweeningManager*  _tweeningManager;

/// @brief Field _beatmapCallbacksController offset 0x18
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _floatTween offset 0x20
 __declspec(property(get=__get__floatTween, put=__set__floatTween)) ::Tweening::FloatTween*  _floatTween;

/// @brief Field _floatFxBeatmapEventCallbackWrapper offset 0x28
 __declspec(property(get=__get__floatFxBeatmapEventCallbackWrapper, put=__set__floatFxBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _floatFxBeatmapEventCallbackWrapper;

/// @brief Field _target offset 0x30
 __declspec(property(get=__get__target, put=__set__target)) ::GlobalNamespace::FloatFxGroupEffectTarget*  _target;

constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager*  value) ;

constexpr ::Tweening::SongTimeTweeningManager* __get__tweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> __get__tweeningManager() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__floatTween(::Tweening::FloatTween*  value) ;

constexpr ::Tweening::FloatTween* __get__floatTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> __get__floatTween() const;

constexpr void __set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__floatFxBeatmapEventCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__floatFxBeatmapEventCallbackWrapper() const;

constexpr void __set__target(::GlobalNamespace::FloatFxGroupEffectTarget*  value) ;

constexpr ::GlobalNamespace::FloatFxGroupEffectTarget* __get__target() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> __get__target() const;

static inline ::GlobalNamespace::FloatFxGroupEffect* New_ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController) ;

/// @brief Method .ctor addr 0x23a62bc size 0x1dc virtual false final false
inline void _ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController) ;

/// @brief Method Cleanup addr 0x23a6118 size 0x9c virtual false final false
inline void Cleanup() ;

/// @brief Method HandleFloatFxBeatmapEventCallback addr 0x23a6498 size 0x118 virtual false final false
inline void HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData*  currentEvent) ;

/// @brief Method SetValue addr 0x23a65b0 size 0x20 virtual false final false
inline void SetValue(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxGroupEffect(FloatFxGroupEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxGroupEffect(FloatFxGroupEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatFxGroupEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffect, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffect*, "", "FloatFxGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__FloatFxGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FloatFxGroupEffect__InitData*, "", "FloatFxGroupEffect/InitData");
