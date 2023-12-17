#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ObstacleSaberSparkleEffectManager)
namespace GlobalNamespace {
class ObstacleSaberSparkleEffect;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSparkleEffectManager);
// Type: ::ObstacleSaberSparkleEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4896))
// CS Name: ::ObstacleSaberSparkleEffectManager*
class CORDL_TYPE ObstacleSaberSparkleEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _obstacleSaberSparkleEffectPrefab offset 0x18
 __declspec(property(get=__get__obstacleSaberSparkleEffectPrefab, put=__set__obstacleSaberSparkleEffectPrefab)) ::GlobalNamespace::ObstacleSaberSparkleEffect*  _obstacleSaberSparkleEffectPrefab;

/// @brief Field _rumblePreset offset 0x20
 __declspec(property(get=__get__rumblePreset, put=__set__rumblePreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  _rumblePreset;

/// @brief Field _beatmapObjectManager offset 0x28
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _saberManager offset 0x30
 __declspec(property(get=__get__saberManager, put=__set__saberManager)) ::GlobalNamespace::SaberManager*  _saberManager;

/// @brief Field _hapticFeedbackManager offset 0x38
 __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager)) ::GlobalNamespace::HapticFeedbackManager*  _hapticFeedbackManager;

/// @brief Field _colorManager offset 0x40
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field sparkleEffectDidStartEvent offset 0x48
 __declspec(property(get=__get_sparkleEffectDidStartEvent, put=__set_sparkleEffectDidStartEvent)) ::System::Action_1<::GlobalNamespace::SaberType>*  sparkleEffectDidStartEvent;

/// @brief Field sparkleEffectDidEndEvent offset 0x50
 __declspec(property(get=__get_sparkleEffectDidEndEvent, put=__set_sparkleEffectDidEndEvent)) ::System::Action_1<::GlobalNamespace::SaberType>*  sparkleEffectDidEndEvent;

/// @brief Field _sabers offset 0x58
 __declspec(property(get=__get__sabers, put=__set__sabers)) ::ArrayW<::GlobalNamespace::Saber*,::Array<::GlobalNamespace::Saber*>*>  _sabers;

/// @brief Field _effects offset 0x60
 __declspec(property(get=__get__effects, put=__set__effects)) ::ArrayW<::GlobalNamespace::ObstacleSaberSparkleEffect*,::Array<::GlobalNamespace::ObstacleSaberSparkleEffect*>*>  _effects;

/// @brief Field _effectsTransforms offset 0x68
 __declspec(property(get=__get__effectsTransforms, put=__set__effectsTransforms)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  _effectsTransforms;

/// @brief Field _isSystemActive offset 0x70
 __declspec(property(get=__get__isSystemActive, put=__set__isSystemActive)) ::ArrayW<bool,::Array<bool>*>  _isSystemActive;

/// @brief Field _wasSystemActive offset 0x78
 __declspec(property(get=__get__wasSystemActive, put=__set__wasSystemActive)) ::ArrayW<bool,::Array<bool>*>  _wasSystemActive;

/// @brief Field _burnMarkPositions offset 0x80
 __declspec(property(get=__get__burnMarkPositions, put=__set__burnMarkPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _burnMarkPositions;

constexpr void __set__obstacleSaberSparkleEffectPrefab(::GlobalNamespace::ObstacleSaberSparkleEffect*  value) ;

constexpr ::GlobalNamespace::ObstacleSaberSparkleEffect* __get__obstacleSaberSparkleEffectPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleSaberSparkleEffect*> __get__obstacleSaberSparkleEffectPrefab() const;

constexpr void __set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get__rumblePreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get__rumblePreset() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager*  value) ;

constexpr ::GlobalNamespace::SaberManager* __get__saberManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> __get__saberManager() const;

constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager*  value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager* __get__hapticFeedbackManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> __get__hapticFeedbackManager() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::SaberType>* __get_sparkleEffectDidStartEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SaberType>*> __get_sparkleEffectDidStartEvent() const;

constexpr void __set_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::SaberType>* __get_sparkleEffectDidEndEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SaberType>*> __get_sparkleEffectDidEndEvent() const;

constexpr void __set__sabers(::ArrayW<::GlobalNamespace::Saber*,::Array<::GlobalNamespace::Saber*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::Saber*,::Array<::GlobalNamespace::Saber*>*>& __get__sabers() ;

constexpr ::ArrayW<::GlobalNamespace::Saber*,::Array<::GlobalNamespace::Saber*>*> const& __get__sabers() const;

constexpr void __set__effects(::ArrayW<::GlobalNamespace::ObstacleSaberSparkleEffect*,::Array<::GlobalNamespace::ObstacleSaberSparkleEffect*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::ObstacleSaberSparkleEffect*,::Array<::GlobalNamespace::ObstacleSaberSparkleEffect*>*>& __get__effects() ;

constexpr ::ArrayW<::GlobalNamespace::ObstacleSaberSparkleEffect*,::Array<::GlobalNamespace::ObstacleSaberSparkleEffect*>*> const& __get__effects() const;

constexpr void __set__effectsTransforms(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get__effectsTransforms() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get__effectsTransforms() const;

constexpr void __set__isSystemActive(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr ::ArrayW<bool,::Array<bool>*>& __get__isSystemActive() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __get__isSystemActive() const;

constexpr void __set__wasSystemActive(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr ::ArrayW<bool,::Array<bool>*>& __get__wasSystemActive() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __get__wasSystemActive() const;

constexpr void __set__burnMarkPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get__burnMarkPositions() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get__burnMarkPositions() const;

/// @brief Method add_sparkleEffectDidStartEvent addr 0x23a3d08 size 0xb0 virtual false final false
inline void add_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>*  value) ;

/// @brief Method remove_sparkleEffectDidStartEvent addr 0x23a3db8 size 0xb0 virtual false final false
inline void remove_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>*  value) ;

/// @brief Method add_sparkleEffectDidEndEvent addr 0x23a3e68 size 0xb0 virtual false final false
inline void add_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>*  value) ;

/// @brief Method remove_sparkleEffectDidEndEvent addr 0x23a3f18 size 0xb0 virtual false final false
inline void remove_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>*  value) ;

/// @brief Method Start addr 0x23a3fc8 size 0x2ac virtual false final false
inline void Start() ;

/// @brief Method OnDisable addr 0x23a4370 size 0xa4 virtual false final false
inline void OnDisable() ;

/// @brief Method Update addr 0x23a4414 size 0x60c virtual false final false
inline void Update() ;

/// @brief Method GetEffectRotation addr 0x23a4ca8 size 0x124 virtual false final false
inline ::UnityEngine::Quaternion GetEffectRotation(::UnityEngine::Vector3  pos, ::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds) ;

/// @brief Method BurnMarkPosForSaberType addr 0x23a4f00 size 0x8c virtual false final false
inline ::UnityEngine::Vector3 BurnMarkPosForSaberType(::GlobalNamespace::SaberType  saberType) ;

/// @brief Method GetBurnMarkPos addr 0x23a4a20 size 0x288 virtual false final false
inline bool GetBurnMarkPos(::UnityEngine::Bounds  bounds, ::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  bladeBottomPos, ::UnityEngine::Vector3  bladeTopPos, ByRef<::UnityEngine::Vector3>  burnMarkPos) ;

static inline ::GlobalNamespace::ObstacleSaberSparkleEffectManager* New_ctor() ;

/// @brief Method .ctor addr 0x23a4f8c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleSaberSparkleEffectManager(ObstacleSaberSparkleEffectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleSaberSparkleEffectManager(ObstacleSaberSparkleEffectManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObstacleSaberSparkleEffectManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSparkleEffectManager, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffectManager*, "", "ObstacleSaberSparkleEffectManager");
