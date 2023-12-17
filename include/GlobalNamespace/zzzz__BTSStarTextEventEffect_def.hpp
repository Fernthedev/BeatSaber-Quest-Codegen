#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BTSStarTextEventEffect)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StarTextSprite;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StartTextPosition;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEventEffect;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StarTextSprite;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StartTextPosition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite);
MARK_REF_PTR_T(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition);
// Type: ::StarTextSprite
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3983))
// CS Name: ::BTSStarTextEventEffect::StarTextSprite*
class CORDL_TYPE __BTSStarTextEventEffect__StarTextSprite : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _id offset 0x10
 __declspec(property(get=__get__id, put=__set__id)) int32_t  _id;

/// @brief Field _starTextSprite offset 0x18
 __declspec(property(get=__get__starTextSprite, put=__set__starTextSprite)) ::UnityEngine::Sprite*  _starTextSprite;

/// @brief Field _animationLength offset 0x20
 __declspec(property(get=__get__animationLength, put=__set__animationLength)) float_t  _animationLength;

 __declspec(property(get=get_id)) int32_t  id;

 __declspec(property(get=get_starTextSprite)) ::UnityEngine::Sprite*  starTextSprite;

 __declspec(property(get=get_animationLength)) float_t  animationLength;

constexpr void __set__id(int32_t  value) ;

constexpr int32_t& __get__id() ;

constexpr int32_t const& __get__id() const;

constexpr void __set__starTextSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__starTextSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__starTextSprite() const;

constexpr void __set__animationLength(float_t  value) ;

constexpr float_t& __get__animationLength() ;

constexpr float_t const& __get__animationLength() const;

/// @brief Method get_id addr 0x221dc64 size 0x8 virtual false final false
inline int32_t get_id() ;

/// @brief Method get_starTextSprite addr 0x221dc6c size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_starTextSprite() ;

/// @brief Method get_animationLength addr 0x221dc74 size 0x8 virtual false final false
inline float_t get_animationLength() ;

static inline ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite* New_ctor() ;

/// @brief Method .ctor addr 0x221dc7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StarTextSprite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BTSStarTextEventEffect__StarTextSprite(__BTSStarTextEventEffect__StarTextSprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StarTextSprite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BTSStarTextEventEffect__StarTextSprite(__BTSStarTextEventEffect__StarTextSprite const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BTSStarTextEventEffect__StarTextSprite()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::StartTextPosition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3984))
// CS Name: ::BTSStarTextEventEffect::StartTextPosition*
class CORDL_TYPE __BTSStarTextEventEffect__StartTextPosition : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _id offset 0x10
 __declspec(property(get=__get__id, put=__set__id)) int32_t  _id;

/// @brief Field _transform offset 0x18
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

 __declspec(property(get=get_id)) int32_t  id;

 __declspec(property(get=get_transform)) ::UnityEngine::Transform*  transform;

constexpr void __set__id(int32_t  value) ;

constexpr int32_t& __get__id() ;

constexpr int32_t const& __get__id() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

/// @brief Method get_id addr 0x221dc84 size 0x8 virtual false final false
inline int32_t get_id() ;

/// @brief Method get_transform addr 0x221dc8c size 0x8 virtual false final false
inline ::UnityEngine::Transform* get_transform() ;

static inline ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition* New_ctor() ;

/// @brief Method .ctor addr 0x221dc94 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StartTextPosition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BTSStarTextEventEffect__StartTextPosition(__BTSStarTextEventEffect__StartTextPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StartTextPosition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BTSStarTextEventEffect__StartTextPosition(__BTSStarTextEventEffect__StartTextPosition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BTSStarTextEventEffect__StartTextPosition()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BTSStarTextEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3985))
// CS Name: ::BTSStarTextEventEffect*
class CORDL_TYPE BTSStarTextEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StartTextPosition = ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition;

using StarTextSprite = ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kStarTextAppearEventType value: static_cast<int32_t>(0x29)
static ::GlobalNamespace::BasicBeatmapEventType const kStarTextAppearEventType;

/// @brief Field _starTextSprites offset 0x18
 __declspec(property(get=__get__starTextSprites, put=__set__starTextSprites)) ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*>  _starTextSprites;

/// @brief Field _startTextPositions offset 0x20
 __declspec(property(get=__get__startTextPositions, put=__set__startTextPositions)) ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*>  _startTextPositions;

/// @brief Field _beatmapCallbacksController offset 0x28
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _audioTimeSource offset 0x30
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field startStarTextAnimationEvent offset 0x38
 __declspec(property(get=__get_startStarTextAnimationEvent, put=__set_startStarTextAnimationEvent)) ::System::Action_3<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t>*  startStarTextAnimationEvent;

/// @brief Field _beatmapDataCallbackWrapper offset 0x40
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

/// @brief Field _idsToStarTextSpriteDictionary offset 0x48
 __declspec(property(get=__get__idsToStarTextSpriteDictionary, put=__set__idsToStarTextSpriteDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*  _idsToStarTextSpriteDictionary;

/// @brief Field _idsToStarTextPositionDictionary offset 0x50
 __declspec(property(get=__get__idsToStarTextPositionDictionary, put=__set__idsToStarTextPositionDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Transform*>*  _idsToStarTextPositionDictionary;

constexpr void __set__starTextSprites(::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*>& __get__starTextSprites() ;

constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> const& __get__starTextSprites() const;

constexpr void __set__startTextPositions(::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*>& __get__startTextPositions() ;

constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*,::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*> const& __get__startTextPositions() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t>*  value) ;

constexpr ::System::Action_3<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t>* __get_startStarTextAnimationEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t>*> __get_startStarTextAnimationEvent() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

constexpr void __set__idsToStarTextSpriteDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>* __get__idsToStarTextSpriteDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> __get__idsToStarTextSpriteDictionary() const;

constexpr void __set__idsToStarTextPositionDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Transform*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Transform*>* __get__idsToStarTextPositionDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Transform*>*> __get__idsToStarTextPositionDictionary() const;

/// @brief Method add_startStarTextAnimationEvent addr 0x221d360 size 0xb0 virtual false final false
inline void add_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t>*  value) ;

/// @brief Method remove_startStarTextAnimationEvent addr 0x221d498 size 0xb0 virtual false final false
inline void remove_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t>*  value) ;

/// @brief Method Start addr 0x221d7c4 size 0x1ec virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x221d9b0 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x221d9cc size 0x1d8 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

static inline ::GlobalNamespace::BTSStarTextEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x221dba4 size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BTSStarTextEventEffect(BTSStarTextEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BTSStarTextEventEffect(BTSStarTextEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BTSStarTextEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEventEffect, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEventEffect*, "", "BTSStarTextEventEffect");
NEED_NO_BOX(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, "", "BTSStarTextEventEffect/StarTextSprite");
NEED_NO_BOX(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, "", "BTSStarTextEventEffect/StartTextPosition");
