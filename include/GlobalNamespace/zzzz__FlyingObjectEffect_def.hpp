#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingObjectEffect)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingObjectEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingObjectEffect);
// Type: ::FlyingObjectEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4852))
// CS Name: ::FlyingObjectEffect*
class CORDL_TYPE FlyingObjectEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _moveAnimationCurve offset 0x18
 __declspec(property(get=__get__moveAnimationCurve, put=__set__moveAnimationCurve)) ::UnityEngine::AnimationCurve*  _moveAnimationCurve;

/// @brief Field _shakeFrequency offset 0x20
 __declspec(property(get=__get__shakeFrequency, put=__set__shakeFrequency)) float_t  _shakeFrequency;

/// @brief Field _shakeStrength offset 0x24
 __declspec(property(get=__get__shakeStrength, put=__set__shakeStrength)) float_t  _shakeStrength;

/// @brief Field _shakeStrengthAnimationCurve offset 0x28
 __declspec(property(get=__get__shakeStrengthAnimationCurve, put=__set__shakeStrengthAnimationCurve)) ::UnityEngine::AnimationCurve*  _shakeStrengthAnimationCurve;

/// @brief Field _initialized offset 0x30
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Field _shakeRotation offset 0x34
 __declspec(property(get=__get__shakeRotation, put=__set__shakeRotation)) ::UnityEngine::Quaternion  _shakeRotation;

/// @brief Field _rotation offset 0x44
 __declspec(property(get=__get__rotation, put=__set__rotation)) ::UnityEngine::Quaternion  _rotation;

/// @brief Field _elapsedTime offset 0x54
 __declspec(property(get=__get__elapsedTime, put=__set__elapsedTime)) float_t  _elapsedTime;

/// @brief Field _startPos offset 0x58
 __declspec(property(get=__get__startPos, put=__set__startPos)) ::UnityEngine::Vector3  _startPos;

/// @brief Field _targetPos offset 0x64
 __declspec(property(get=__get__targetPos, put=__set__targetPos)) ::UnityEngine::Vector3  _targetPos;

/// @brief Field _duration offset 0x70
 __declspec(property(get=__get__duration, put=__set__duration)) float_t  _duration;

/// @brief Field _shake offset 0x74
 __declspec(property(get=__get__shake, put=__set__shake)) bool  _shake;

/// @brief Field _didFinishEvent offset 0x78
 __declspec(property(get=__get__didFinishEvent, put=__set__didFinishEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*  _didFinishEvent;

 __declspec(property(get=get_didFinishEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*  didFinishEvent;

constexpr void __set__moveAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__moveAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__moveAnimationCurve() const;

constexpr void __set__shakeFrequency(float_t  value) ;

constexpr float_t& __get__shakeFrequency() ;

constexpr float_t const& __get__shakeFrequency() const;

constexpr void __set__shakeStrength(float_t  value) ;

constexpr float_t& __get__shakeStrength() ;

constexpr float_t const& __get__shakeStrength() const;

constexpr void __set__shakeStrengthAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__shakeStrengthAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__shakeStrengthAnimationCurve() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

constexpr void __set__shakeRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__shakeRotation() ;

constexpr ::UnityEngine::Quaternion const& __get__shakeRotation() const;

constexpr void __set__rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__rotation() ;

constexpr ::UnityEngine::Quaternion const& __get__rotation() const;

constexpr void __set__elapsedTime(float_t  value) ;

constexpr float_t& __get__elapsedTime() ;

constexpr float_t const& __get__elapsedTime() const;

constexpr void __set__startPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startPos() ;

constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

constexpr void __set__targetPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__targetPos() ;

constexpr ::UnityEngine::Vector3 const& __get__targetPos() const;

constexpr void __set__duration(float_t  value) ;

constexpr float_t& __get__duration() ;

constexpr float_t const& __get__duration() const;

constexpr void __set__shake(bool  value) ;

constexpr bool& __get__shake() ;

constexpr bool const& __get__shake() const;

constexpr void __set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*  value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* __get__didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*> __get__didFinishEvent() const;

/// @brief Method get_didFinishEvent addr 0x239821c size 0x8 virtual false final false
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* get_didFinishEvent() ;

/// @brief Method InitAndPresent addr 0x2398224 size 0xe8 virtual false final false
inline void InitAndPresent(float_t  duration, ::UnityEngine::Vector3  targetPos, ::UnityEngine::Quaternion  rotation, bool  shake) ;

/// @brief Method Update addr 0x239830c size 0x3b8 virtual false final false
inline void Update() ;

/// @brief Method ManualUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ManualUpdate(float_t  t) ;

static inline ::GlobalNamespace::FlyingObjectEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23986c4 size 0xcc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingObjectEffect(FlyingObjectEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingObjectEffect(FlyingObjectEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlyingObjectEffect()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingObjectEffect, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingObjectEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingObjectEffect*, "", "FlyingObjectEffect");
