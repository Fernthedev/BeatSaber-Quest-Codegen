#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterSpawnEventEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterSpawnEventEffect);
// Type: ::BTSCharacterSpawnEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3973))
// CS Name: ::BTSCharacterSpawnEventEffect*
class CORDL_TYPE BTSCharacterSpawnEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kCharacterDisplayEventType value: static_cast<int32_t>(0x28)
static ::GlobalNamespace::BasicBeatmapEventType const kCharacterDisplayEventType;

/// @brief Field _animationStartAheadTime offset 0x18
 __declspec(property(get=__get__animationStartAheadTime, put=__set__animationStartAheadTime)) float_t  _animationStartAheadTime;

/// @brief Field _btsCharacterDataModel offset 0x20
 __declspec(property(get=__get__btsCharacterDataModel, put=__set__btsCharacterDataModel)) ::GlobalNamespace::BTSCharacterDataModel*  _btsCharacterDataModel;

/// @brief Field _characterWrapper offset 0x28
 __declspec(property(get=__get__characterWrapper, put=__set__characterWrapper)) ::UnityEngine::Transform*  _characterWrapper;

/// @brief Field _beatmapCallbacksController offset 0x30
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _beatmapData offset 0x38
 __declspec(property(get=__get__beatmapData, put=__set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  _beatmapData;

/// @brief Field _audioTimeSource offset 0x40
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field startCharacterAnimationEvent offset 0x48
 __declspec(property(get=__get_startCharacterAnimationEvent, put=__set_startCharacterAnimationEvent)) ::System::Action_1<::GlobalNamespace::BTSCharacter*>*  startCharacterAnimationEvent;

/// @brief Field _idsToCharacterPrefabsDictionary offset 0x50
 __declspec(property(get=__get__idsToCharacterPrefabsDictionary, put=__set__idsToCharacterPrefabsDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>*  _idsToCharacterPrefabsDictionary;

/// @brief Field _idsToCharactersDictionary offset 0x58
 __declspec(property(get=__get__idsToCharactersDictionary, put=__set__idsToCharactersDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>*  _idsToCharactersDictionary;

/// @brief Field _idsToAnimationClipsDictionary offset 0x60
 __declspec(property(get=__get__idsToAnimationClipsDictionary, put=__set__idsToAnimationClipsDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::AnimationClip*>*  _idsToAnimationClipsDictionary;

/// @brief Field _isInitialized offset 0x68
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

/// @brief Field _beatmapDataCallbackWrapper offset 0x70
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

/// @brief Field _asyncOperationHandles offset 0x78
 __declspec(property(get=__get__asyncOperationHandles, put=__set__asyncOperationHandles)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  _asyncOperationHandles;

 __declspec(property(get=get_isInitialized)) bool  isInitialized;

constexpr void __set__animationStartAheadTime(float_t  value) ;

constexpr float_t& __get__animationStartAheadTime() ;

constexpr float_t const& __get__animationStartAheadTime() const;

constexpr void __set__btsCharacterDataModel(::GlobalNamespace::BTSCharacterDataModel*  value) ;

constexpr ::GlobalNamespace::BTSCharacterDataModel* __get__btsCharacterDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterDataModel*> __get__btsCharacterDataModel() const;

constexpr void __set__characterWrapper(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__characterWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__characterWrapper() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get__beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get__beatmapData() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set_startCharacterAnimationEvent(::System::Action_1<::GlobalNamespace::BTSCharacter*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::BTSCharacter*>* __get_startCharacterAnimationEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BTSCharacter*>*> __get_startCharacterAnimationEvent() const;

constexpr void __set__idsToCharacterPrefabsDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>* __get__idsToCharacterPrefabsDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>*> __get__idsToCharacterPrefabsDictionary() const;

constexpr void __set__idsToCharactersDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>* __get__idsToCharactersDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>*> __get__idsToCharactersDictionary() const;

constexpr void __set__idsToAnimationClipsDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::AnimationClip*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::AnimationClip*>* __get__idsToAnimationClipsDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::AnimationClip*>*> __get__idsToAnimationClipsDictionary() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

constexpr void __set__asyncOperationHandles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get__asyncOperationHandles() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get__asyncOperationHandles() const;

/// @brief Method add_startCharacterAnimationEvent addr 0x221a750 size 0xb0 virtual false final false
inline void add_startCharacterAnimationEvent(::System::Action_1<::GlobalNamespace::BTSCharacter*>*  value) ;

/// @brief Method remove_startCharacterAnimationEvent addr 0x221aba0 size 0xb0 virtual false final false
inline void remove_startCharacterAnimationEvent(::System::Action_1<::GlobalNamespace::BTSCharacter*>*  value) ;

/// @brief Method get_isInitialized addr 0x221afa0 size 0x8 virtual false final false
inline bool get_isInitialized() ;

/// @brief Method Start addr 0x221afa8 size 0x5a8 virtual false final false
inline void Start() ;

/// @brief Method LoadAddressables addr 0x221b550 size 0x86c virtual false final false
inline void LoadAddressables() ;

/// @brief Method CleanupAddressables addr 0x221bf3c size 0x154 virtual false final false
inline void CleanupAddressables() ;

/// @brief Method OnDestroy addr 0x221c090 size 0x28 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x221c0b8 size 0x144 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

/// @brief Method GetCharacterWithAnimationClip addr 0x221bdcc size 0x170 virtual false final false
static inline ::System::Tuple_2<::GlobalNamespace::BTSCharacter*,::UnityEngine::AnimationClip*>* GetCharacterWithAnimationClip(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BTSCharacter*>*  charDictionary, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::AnimationClip*>*  animDictionary, int32_t  prefabId, int32_t  animationId) ;

static inline ::GlobalNamespace::BTSCharacterSpawnEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x221c204 size 0x130 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BTSCharacterSpawnEventEffect(BTSCharacterSpawnEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BTSCharacterSpawnEventEffect(BTSCharacterSpawnEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BTSCharacterSpawnEventEffect()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterSpawnEventEffect, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnEventEffect*, "", "BTSCharacterSpawnEventEffect");
