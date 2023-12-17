#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidanceTiltEvaluator)
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceTiltEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
// Type: ::BeatmapObjectAvoidanceTiltEvaluator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3958))
// CS Name: ::BeatmapObjectAvoidanceTiltEvaluator*
class CORDL_TYPE BeatmapObjectAvoidanceTiltEvaluator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field kLookAheadTime offset 0x0
static constexpr float_t  kLookAheadTime{0.2};

/// @brief Field _audioTimeSource offset 0x10
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _gravity offset 0x18
 __declspec(property(get=__get__gravity, put=__set__gravity)) ::UnityEngine::Vector2  _gravity;

/// @brief Field _normalizedGravity offset 0x20
 __declspec(property(get=__get__normalizedGravity, put=__set__normalizedGravity)) ::UnityEngine::Vector2  _normalizedGravity;

/// @brief Field _bezierSplineEvaluator offset 0x28
 __declspec(property(get=__get__bezierSplineEvaluator, put=__set__bezierSplineEvaluator)) ::GlobalNamespace::BezierSplineEvaluator*  _bezierSplineEvaluator;

/// @brief Field _currentAcceleration offset 0x30
 __declspec(property(get=__get__currentAcceleration, put=__set__currentAcceleration)) float_t  _currentAcceleration;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set__gravity(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__gravity() ;

constexpr ::UnityEngine::Vector2 const& __get__gravity() const;

constexpr void __set__normalizedGravity(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__normalizedGravity() ;

constexpr ::UnityEngine::Vector2 const& __get__normalizedGravity() const;

constexpr void __set__bezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator*  value) ;

constexpr ::GlobalNamespace::BezierSplineEvaluator* __get__bezierSplineEvaluator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> __get__bezierSplineEvaluator() const;

constexpr void __set__currentAcceleration(float_t  value) ;

constexpr float_t& __get__currentAcceleration() ;

constexpr float_t const& __get__currentAcceleration() const;

static inline ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator*  bezierSplineEvaluator, ::UnityEngine::Vector2  gravity) ;

/// @brief Method .ctor addr 0x2217308 size 0xe0 virtual false final false
inline void _ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator*  bezierSplineEvaluator, ::UnityEngine::Vector2  gravity) ;

/// @brief Method GetTiltAngle addr 0x22173e8 size 0x2cc virtual false final false
inline float_t GetTiltAngle() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapObjectAvoidanceTiltEvaluator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*, "", "BeatmapObjectAvoidanceTiltEvaluator");
