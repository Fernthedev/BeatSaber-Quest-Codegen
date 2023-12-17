#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexDisplacementFloatFxGroupEffectTarget)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class VertexDisplacementFloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget);
// Type: ::VertexDisplacementFloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4917))
// CS Name: ::VertexDisplacementFloatFxGroupEffectTarget*
class CORDL_TYPE VertexDisplacementFloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::GlobalNamespace::FloatFxGroupEffectTarget)]{};

/// @brief Field _displacementRanges offset 0x18
 __declspec(property(get=__get__displacementRanges, put=__set__displacementRanges)) ::UnityEngine::Vector3  _displacementRanges;

/// @brief Field _xAnimationCurve offset 0x28
 __declspec(property(get=__get__xAnimationCurve, put=__set__xAnimationCurve)) ::UnityEngine::AnimationCurve*  _xAnimationCurve;

/// @brief Field _yAnimationCurve offset 0x30
 __declspec(property(get=__get__yAnimationCurve, put=__set__yAnimationCurve)) ::UnityEngine::AnimationCurve*  _yAnimationCurve;

/// @brief Field _zAnimationCurve offset 0x38
 __declspec(property(get=__get__zAnimationCurve, put=__set__zAnimationCurve)) ::UnityEngine::AnimationCurve*  _zAnimationCurve;

/// @brief Field _displacementController offset 0x40
 __declspec(property(get=__get__displacementController, put=__set__displacementController)) ::GlobalNamespace::MaterialPropertyBlockController*  _displacementController;

/// @brief Field _renderer offset 0x48
 __declspec(property(get=__get__renderer, put=__set__renderer)) ::UnityEngine::Renderer*  _renderer;

/// @brief Field _useTestValue offset 0x50
 __declspec(property(get=__get__useTestValue, put=__set__useTestValue)) bool  _useTestValue;

/// @brief Field _testFloatValue offset 0x54
 __declspec(property(get=__get__testFloatValue, put=__set__testFloatValue)) float_t  _testFloatValue;

/// @brief Field _bounds offset 0x58
 __declspec(property(get=__get__bounds, put=__set__bounds)) ::UnityEngine::Bounds  _bounds;

constexpr void __set__displacementRanges(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__displacementRanges() ;

constexpr ::UnityEngine::Vector3 const& __get__displacementRanges() const;

constexpr void __set__xAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__xAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__xAnimationCurve() const;

constexpr void __set__yAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__yAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__yAnimationCurve() const;

constexpr void __set__zAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__zAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__zAnimationCurve() const;

constexpr void __set__displacementController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__displacementController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__displacementController() const;

constexpr void __set__renderer(::UnityEngine::Renderer*  value) ;

constexpr ::UnityEngine::Renderer* __get__renderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> __get__renderer() const;

constexpr void __set__useTestValue(bool  value) ;

constexpr bool& __get__useTestValue() ;

constexpr bool const& __get__useTestValue() const;

constexpr void __set__testFloatValue(float_t  value) ;

constexpr float_t& __get__testFloatValue() ;

constexpr float_t const& __get__testFloatValue() const;

static inline void setStaticF__vertexDisplacementRangeVectorPropertyID(int32_t  value) ;

static inline int32_t getStaticF__vertexDisplacementRangeVectorPropertyID() ;

constexpr void __set__bounds(::UnityEngine::Bounds  value) ;

constexpr ::UnityEngine::Bounds& __get__bounds() ;

constexpr ::UnityEngine::Bounds const& __get__bounds() const;

/// @brief Method OnEnable addr 0x23a7254 size 0xd4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnValidate addr 0x23a73b0 size 0x1c virtual false final false
inline void OnValidate() ;

/// @brief Method CalculateDisplacementVector addr 0x23a7328 size 0x88 virtual false final false
inline ::UnityEngine::Vector4 CalculateDisplacementVector(float_t  value) ;

/// @brief Method SetValue addr 0x23a73cc size 0xd4 virtual true final false
inline void SetValue(float_t  value) ;

/// @brief Method TriggerValue addr 0x23a74a0 size 0xd4 virtual true final false
inline void TriggerValue(float_t  value) ;

static inline ::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget* New_ctor() ;

/// @brief Method .ctor addr 0x23a7574 size 0xe4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VertexDisplacementFloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VertexDisplacementFloatFxGroupEffectTarget(VertexDisplacementFloatFxGroupEffectTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VertexDisplacementFloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VertexDisplacementFloatFxGroupEffectTarget(VertexDisplacementFloatFxGroupEffectTarget const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VertexDisplacementFloatFxGroupEffectTarget()  = default;
public:


// Fields

// Static field _vertexDisplacementRangeVectorPropertyID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget*, "", "VertexDisplacementFloatFxGroupEffectTarget");
