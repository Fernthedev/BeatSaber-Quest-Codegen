#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTweenBehaviour)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class __CustomTweenBehaviour____c;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
namespace GlobalNamespace {
class __CustomTweenBehaviour____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomTweenBehaviour);
MARK_REF_PTR_T(::GlobalNamespace::__CustomTweenBehaviour____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6011))
// CS Name: ::CustomTweenBehaviour::<>c*
class CORDL_TYPE __CustomTweenBehaviour____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__CustomTweenBehaviour____c*  value) ;

static inline ::GlobalNamespace::__CustomTweenBehaviour____c* getStaticF___9() ;

static inline void setStaticF___9__21_0(::System::Func_2<int32_t,float_t>*  value) ;

static inline ::System::Func_2<int32_t,float_t>* getStaticF___9__21_0() ;

static inline ::GlobalNamespace::__CustomTweenBehaviour____c* New_ctor() ;

/// @brief Method .ctor addr 0x2316224 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <OnBehaviourPlay>b__21_0 addr 0x231622c size 0x8 virtual false final false
inline float_t _OnBehaviourPlay_b__21_0(int32_t  i) ;

// Ctor Parameters [CppParam { name: "", ty: "__CustomTweenBehaviour____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CustomTweenBehaviour____c(__CustomTweenBehaviour____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CustomTweenBehaviour____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CustomTweenBehaviour____c(__CustomTweenBehaviour____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CustomTweenBehaviour____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__21_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CustomTweenBehaviour____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CustomTweenBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6012))
// CS Name: ::CustomTweenBehaviour*
class CORDL_TYPE CustomTweenBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__CustomTweenBehaviour____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field _transforms offset 0x10
 __declspec(property(get=__get__transforms, put=__set__transforms)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  _transforms;

/// @brief Field startLocationCurrentPosition offset 0x18
 __declspec(property(get=__get_startLocationCurrentPosition, put=__set_startLocationCurrentPosition)) bool  startLocationCurrentPosition;

/// @brief Field startLocalPos offset 0x1c
 __declspec(property(get=__get_startLocalPos, put=__set_startLocalPos)) ::UnityEngine::Vector3  startLocalPos;

/// @brief Field endLocalPos offset 0x28
 __declspec(property(get=__get_endLocalPos, put=__set_endLocalPos)) ::UnityEngine::Vector3  endLocalPos;

/// @brief Field easeType offset 0x34
 __declspec(property(get=__get_easeType, put=__set_easeType)) ::GlobalNamespace::EaseType  easeType;

/// @brief Field endXRelativeToSelfRotation offset 0x38
 __declspec(property(get=__get_endXRelativeToSelfRotation, put=__set_endXRelativeToSelfRotation)) bool  endXRelativeToSelfRotation;

/// @brief Field elementDelay offset 0x3c
 __declspec(property(get=__get_elementDelay, put=__set_elementDelay)) float_t  elementDelay;

/// @brief Field _lockX offset 0x40
 __declspec(property(get=__get__lockX, put=__set__lockX)) bool  _lockX;

/// @brief Field _lockY offset 0x41
 __declspec(property(get=__get__lockY, put=__set__lockY)) bool  _lockY;

/// @brief Field _lockZ offset 0x42
 __declspec(property(get=__get__lockZ, put=__set__lockZ)) bool  _lockZ;

/// @brief Field _randomizeOrder offset 0x43
 __declspec(property(get=__get__randomizeOrder, put=__set__randomizeOrder)) bool  _randomizeOrder;

/// @brief Field _randomizedMinDurationMultiplier offset 0x44
 __declspec(property(get=__get__randomizedMinDurationMultiplier, put=__set__randomizedMinDurationMultiplier)) float_t  _randomizedMinDurationMultiplier;

/// @brief Field _duration offset 0x48
 __declspec(property(get=__get__duration, put=__set__duration)) float_t  _duration;

/// @brief Field _perItemDuration offset 0x4c
 __declspec(property(get=__get__perItemDuration, put=__set__perItemDuration)) float_t  _perItemDuration;

/// @brief Field _originalLocalPos offset 0x50
 __declspec(property(get=__get__originalLocalPos, put=__set__originalLocalPos)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _originalLocalPos;

/// @brief Field _initialized offset 0x58
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Field _randomizedOrder offset 0x60
 __declspec(property(get=__get__randomizedOrder, put=__set__randomizedOrder)) ::ArrayW<int32_t,::Array<int32_t>*>  _randomizedOrder;

/// @brief Field _randomizedDuration offset 0x68
 __declspec(property(get=__get__randomizedDuration, put=__set__randomizedDuration)) ::ArrayW<float_t,::Array<float_t>*>  _randomizedDuration;

constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get__transforms() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get__transforms() const;

constexpr void __set_startLocationCurrentPosition(bool  value) ;

constexpr bool& __get_startLocationCurrentPosition() ;

constexpr bool const& __get_startLocationCurrentPosition() const;

constexpr void __set_startLocalPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_startLocalPos() ;

constexpr ::UnityEngine::Vector3 const& __get_startLocalPos() const;

constexpr void __set_endLocalPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_endLocalPos() ;

constexpr ::UnityEngine::Vector3 const& __get_endLocalPos() const;

constexpr void __set_easeType(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get_easeType() ;

constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

constexpr void __set_endXRelativeToSelfRotation(bool  value) ;

constexpr bool& __get_endXRelativeToSelfRotation() ;

constexpr bool const& __get_endXRelativeToSelfRotation() const;

constexpr void __set_elementDelay(float_t  value) ;

constexpr float_t& __get_elementDelay() ;

constexpr float_t const& __get_elementDelay() const;

constexpr void __set__lockX(bool  value) ;

constexpr bool& __get__lockX() ;

constexpr bool const& __get__lockX() const;

constexpr void __set__lockY(bool  value) ;

constexpr bool& __get__lockY() ;

constexpr bool const& __get__lockY() const;

constexpr void __set__lockZ(bool  value) ;

constexpr bool& __get__lockZ() ;

constexpr bool const& __get__lockZ() const;

constexpr void __set__randomizeOrder(bool  value) ;

constexpr bool& __get__randomizeOrder() ;

constexpr bool const& __get__randomizeOrder() const;

constexpr void __set__randomizedMinDurationMultiplier(float_t  value) ;

constexpr float_t& __get__randomizedMinDurationMultiplier() ;

constexpr float_t const& __get__randomizedMinDurationMultiplier() const;

constexpr void __set__duration(float_t  value) ;

constexpr float_t& __get__duration() ;

constexpr float_t const& __get__duration() const;

constexpr void __set__perItemDuration(float_t  value) ;

constexpr float_t& __get__perItemDuration() ;

constexpr float_t const& __get__perItemDuration() const;

constexpr void __set__originalLocalPos(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get__originalLocalPos() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get__originalLocalPos() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

constexpr void __set__randomizedOrder(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__randomizedOrder() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__randomizedOrder() const;

constexpr void __set__randomizedDuration(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__randomizedDuration() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__randomizedDuration() const;

/// @brief Method OnGraphStart addr 0x231599c size 0x13c virtual true final false
inline void OnGraphStart(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method ProcessFrame addr 0x2315ad8 size 0x3e0 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method OnPlayableDestroy addr 0x2315eb8 size 0x104 virtual true final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method OnBehaviourPlay addr 0x2315fbc size 0x1ec virtual true final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

static inline ::GlobalNamespace::CustomTweenBehaviour* New_ctor() ;

/// @brief Method .ctor addr 0x23161a8 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomTweenBehaviour(CustomTweenBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomTweenBehaviour(CustomTweenBehaviour const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomTweenBehaviour()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomTweenBehaviour, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomTweenBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTweenBehaviour*, "", "CustomTweenBehaviour");
NEED_NO_BOX(::GlobalNamespace::__CustomTweenBehaviour____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CustomTweenBehaviour____c*, "", "CustomTweenBehaviour/<>c");
