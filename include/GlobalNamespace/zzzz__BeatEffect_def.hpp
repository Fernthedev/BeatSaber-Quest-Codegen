#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatEffect)
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class __BeatEffect__Pool;
}
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class __BeatEffect__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatEffect);
MARK_REF_PTR_T(::GlobalNamespace::__BeatEffect__Pool);
// Type: ::BeatEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4837))
// CS Name: ::BeatEffect*
class CORDL_TYPE BeatEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::__BeatEffect__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _spriteRenderer offset 0x18
 __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer)) ::UnityEngine::SpriteRenderer*  _spriteRenderer;

/// @brief Field _spriteTransform offset 0x20
 __declspec(property(get=__get__spriteTransform, put=__set__spriteTransform)) ::UnityEngine::Transform*  _spriteTransform;

/// @brief Field _tubeBloomPrePassLight offset 0x28
 __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight)) ::GlobalNamespace::TubeBloomPrePassLight*  _tubeBloomPrePassLight;

/// @brief Field _lightIntensityCurve offset 0x30
 __declspec(property(get=__get__lightIntensityCurve, put=__set__lightIntensityCurve)) ::UnityEngine::AnimationCurve*  _lightIntensityCurve;

/// @brief Field _spriteXScaleCurve offset 0x38
 __declspec(property(get=__get__spriteXScaleCurve, put=__set__spriteXScaleCurve)) ::UnityEngine::AnimationCurve*  _spriteXScaleCurve;

/// @brief Field _spriteYScaleCurve offset 0x40
 __declspec(property(get=__get__spriteYScaleCurve, put=__set__spriteYScaleCurve)) ::UnityEngine::AnimationCurve*  _spriteYScaleCurve;

/// @brief Field _transparencyCurve offset 0x48
 __declspec(property(get=__get__transparencyCurve, put=__set__transparencyCurve)) ::UnityEngine::AnimationCurve*  _transparencyCurve;

/// @brief Field _didFinishEvent offset 0x50
 __declspec(property(get=__get__didFinishEvent, put=__set__didFinishEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>*  _didFinishEvent;

/// @brief Field _animationDuration offset 0x58
 __declspec(property(get=__get__animationDuration, put=__set__animationDuration)) float_t  _animationDuration;

/// @brief Field _elapsedTime offset 0x5c
 __declspec(property(get=__get__elapsedTime, put=__set__elapsedTime)) float_t  _elapsedTime;

/// @brief Field _color offset 0x60
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

 __declspec(property(get=get_didFinishEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>*  didFinishEvent;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__spriteRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__spriteRenderer() const;

constexpr void __set__spriteTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__spriteTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__spriteTransform() const;

constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__tubeBloomPrePassLight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__tubeBloomPrePassLight() const;

constexpr void __set__lightIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__lightIntensityCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__lightIntensityCurve() const;

constexpr void __set__spriteXScaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__spriteXScaleCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__spriteXScaleCurve() const;

constexpr void __set__spriteYScaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__spriteYScaleCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__spriteYScaleCurve() const;

constexpr void __set__transparencyCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__transparencyCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__transparencyCurve() const;

constexpr void __set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>*  value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* __get__didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>*> __get__didFinishEvent() const;

constexpr void __set__animationDuration(float_t  value) ;

constexpr float_t& __get__animationDuration() ;

constexpr float_t const& __get__animationDuration() const;

constexpr void __set__elapsedTime(float_t  value) ;

constexpr float_t& __get__elapsedTime() ;

constexpr float_t const& __get__elapsedTime() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

/// @brief Method get_didFinishEvent addr 0x23962d0 size 0x8 virtual false final false
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent*>* get_didFinishEvent() ;

/// @brief Method Init addr 0x23962d8 size 0xb8 virtual false final false
inline void Init(::UnityEngine::Color  color, float_t  animationDuration, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method ManualUpdate addr 0x2396390 size 0x2dc virtual false final false
inline void ManualUpdate(float_t  deltaTime) ;

static inline ::GlobalNamespace::BeatEffect* New_ctor() ;

/// @brief Method .ctor addr 0x239666c size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatEffect(BeatEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatEffect(BeatEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatEffect()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatEffect, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2808 }), TypeDefinitionIndex(TypeDefinitionIndex(4837))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4836))
// CS Name: ::BeatEffect::Pool*
class CORDL_TYPE __BeatEffect__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BeatEffect*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::BeatEffect*>)]{};

static inline ::GlobalNamespace::__BeatEffect__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x23966e8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatEffect__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatEffect__Pool(__BeatEffect__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatEffect__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatEffect__Pool(__BeatEffect__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatEffect__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatEffect__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffect*, "", "BeatEffect");
NEED_NO_BOX(::GlobalNamespace::__BeatEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatEffect__Pool*, "", "BeatEffect/Pool");
