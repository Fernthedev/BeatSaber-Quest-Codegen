#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GameObjectSwitchEventEffect)
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectSwitchEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameObjectSwitchEventEffect);
// Type: ::GameObjectSwitchEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4900))
// CS Name: ::GameObjectSwitchEventEffect*
class CORDL_TYPE GameObjectSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _deactivateOnBoostObjects offset 0x18
 __declspec(property(get=__get__deactivateOnBoostObjects, put=__set__deactivateOnBoostObjects)) ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  _deactivateOnBoostObjects;

/// @brief Field _activateOnBoostObjects offset 0x20
 __declspec(property(get=__get__activateOnBoostObjects, put=__set__activateOnBoostObjects)) ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  _activateOnBoostObjects;

/// @brief Field _beatmapCallbacksController offset 0x28
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _beatmapDataCallbackWrapper offset 0x30
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__deactivateOnBoostObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& __get__deactivateOnBoostObjects() ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& __get__deactivateOnBoostObjects() const;

constexpr void __set__activateOnBoostObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& __get__activateOnBoostObjects() ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& __get__activateOnBoostObjects() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23a5478 size 0xa8 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23a5520 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23a553c size 0x18 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData*  basicBeatmapEventData) ;

/// @brief Method ToggleObjects addr 0x23a5554 size 0xc4 virtual false final false
inline void ToggleObjects(bool  isBoostOn) ;

static inline ::GlobalNamespace::GameObjectSwitchEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23a5618 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSwitchEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectSwitchEventEffect(GameObjectSwitchEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSwitchEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectSwitchEventEffect(GameObjectSwitchEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameObjectSwitchEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameObjectSwitchEventEffect, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameObjectSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectSwitchEventEffect*, "", "GameObjectSwitchEventEffect");
