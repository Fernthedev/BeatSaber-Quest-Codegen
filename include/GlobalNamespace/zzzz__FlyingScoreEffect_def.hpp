#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingScoreEffect)
namespace UnityEngine {
class SpriteRenderer;
}
namespace TMPro {
class TextMeshPro;
}
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingScoreEffect;
}
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreEffect);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingScoreEffect__Pool);
// Type: ::FlyingScoreEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4852))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4854))
// CS Name: ::FlyingScoreEffect*
class CORDL_TYPE FlyingScoreEffect : public ::GlobalNamespace::FlyingObjectEffect {
public:
// Declarations
using Pool = ::GlobalNamespace::__FlyingScoreEffect__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::GlobalNamespace::FlyingObjectEffect)]{};

/// @brief Field _fadeAnimationCurve offset 0x80
 __declspec(property(get=__get__fadeAnimationCurve, put=__set__fadeAnimationCurve)) ::UnityEngine::AnimationCurve*  _fadeAnimationCurve;

/// @brief Field _maxCutDistanceScoreIndicator offset 0x88
 __declspec(property(get=__get__maxCutDistanceScoreIndicator, put=__set__maxCutDistanceScoreIndicator)) ::UnityEngine::SpriteRenderer*  _maxCutDistanceScoreIndicator;

/// @brief Field _text offset 0x90
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshPro*  _text;

/// @brief Field _color offset 0x98
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _colorAMultiplier offset 0xa8
 __declspec(property(get=__get__colorAMultiplier, put=__set__colorAMultiplier)) float_t  _colorAMultiplier;

/// @brief Field _registeredToCallbacks offset 0xac
 __declspec(property(get=__get__registeredToCallbacks, put=__set__registeredToCallbacks)) bool  _registeredToCallbacks;

/// @brief Field _cutScoreBuffer offset 0xb0
 __declspec(property(get=__get__cutScoreBuffer, put=__set__cutScoreBuffer)) ::GlobalNamespace::IReadonlyCutScoreBuffer*  _cutScoreBuffer;

/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
constexpr operator  ::GlobalNamespace::ICutScoreBufferDidChangeReceiver*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr operator  ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept;

constexpr void __set__fadeAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__fadeAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__fadeAnimationCurve() const;

constexpr void __set__maxCutDistanceScoreIndicator(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__maxCutDistanceScoreIndicator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__maxCutDistanceScoreIndicator() const;

constexpr void __set__text(::TMPro::TextMeshPro*  value) ;

constexpr ::TMPro::TextMeshPro* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> __get__text() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__colorAMultiplier(float_t  value) ;

constexpr float_t& __get__colorAMultiplier() ;

constexpr float_t const& __get__colorAMultiplier() const;

constexpr void __set__registeredToCallbacks(bool  value) ;

constexpr bool& __get__registeredToCallbacks() ;

constexpr bool const& __get__registeredToCallbacks() const;

constexpr void __set__cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer*  value) ;

constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* __get__cutScoreBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyCutScoreBuffer*> __get__cutScoreBuffer() const;

/// @brief Method InitAndPresent addr 0x2398790 size 0x4e4 virtual false final false
inline void InitAndPresent(::GlobalNamespace::IReadonlyCutScoreBuffer*  cutScoreBuffer, float_t  duration, ::UnityEngine::Vector3  targetPos, ::UnityEngine::Color  color) ;

/// @brief Method ManualUpdate addr 0x2398cfc size 0x88 virtual true final false
inline void ManualUpdate(float_t  t) ;

/// @brief Method HandleCutScoreBufferDidChange addr 0x2398d84 size 0x4c virtual true final true
inline void HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer*  cutScoreBuffer) ;

/// @brief Method RefreshScore addr 0x2398c74 size 0x88 virtual false final false
inline void RefreshScore(int32_t  score, int32_t  maxPossibleCutScore) ;

/// @brief Method HandleCutScoreBufferDidFinish addr 0x2398dd0 size 0x4 virtual true final true
inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer*  cutScoreBuffer) ;

/// @brief Method UnregisterCallbacksIfNeeded addr 0x2398dd4 size 0x128 virtual false final false
inline void UnregisterCallbacksIfNeeded() ;

static inline ::GlobalNamespace::FlyingScoreEffect* New_ctor() ;

/// @brief Method .ctor addr 0x2398efc size 0x30 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingScoreEffect(FlyingScoreEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingScoreEffect(FlyingScoreEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlyingScoreEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreEffect, 0xb8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4854)), TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2811 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4853))
// CS Name: ::FlyingScoreEffect::Pool*
class CORDL_TYPE __FlyingScoreEffect__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::FlyingScoreEffect*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::FlyingScoreEffect*>)]{};

/// @brief Method OnDespawned addr 0x2398f2c size 0x60 virtual true final false
inline void OnDespawned(::GlobalNamespace::FlyingScoreEffect*  item) ;

static inline ::GlobalNamespace::__FlyingScoreEffect__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x2398f8c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreEffect__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlyingScoreEffect__Pool(__FlyingScoreEffect__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreEffect__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlyingScoreEffect__Pool(__FlyingScoreEffect__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlyingScoreEffect__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreEffect__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingScoreEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreEffect*, "", "FlyingScoreEffect");
NEED_NO_BOX(::GlobalNamespace::__FlyingScoreEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreEffect__Pool*, "", "FlyingScoreEffect/Pool");
