#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CubicBezierHelper)
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CubicBezierHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CubicBezierHelper);
// Type: ::CubicBezierHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14342))
// CS Name: ::CubicBezierHelper*
class CORDL_TYPE CubicBezierHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method EvaluateCurve addr 0x20efa8c size 0x90 virtual false final false
static inline ::UnityEngine::Vector3 EvaluateCurve(ByRef<::UnityEngine::Vector3>  a1, ByRef<::UnityEngine::Vector3>  c1, ByRef<::UnityEngine::Vector3>  c2, ByRef<::UnityEngine::Vector3>  a2, float_t  t) ;

/// @brief Method EvaluateCurveDerivative addr 0x20efb1c size 0x90 virtual false final false
static inline ::UnityEngine::Vector3 EvaluateCurveDerivative(ByRef<::UnityEngine::Vector3>  a1, ByRef<::UnityEngine::Vector3>  c1, ByRef<::UnityEngine::Vector3>  c2, ByRef<::UnityEngine::Vector3>  a2, float_t  t) ;

/// @brief Method EvaluateCurveSecondDerivative addr 0x20efbac size 0x84 virtual false final false
static inline ::UnityEngine::Vector3 EvaluateCurveSecondDerivative(ByRef<::UnityEngine::Vector3>  a1, ByRef<::UnityEngine::Vector3>  c1, ByRef<::UnityEngine::Vector3>  c2, ByRef<::UnityEngine::Vector3>  a2, float_t  t) ;

/// @brief Method Normal addr 0x20efc30 size 0x168 virtual false final false
static inline ::UnityEngine::Vector3 Normal(ByRef<::UnityEngine::Vector3>  a1, ByRef<::UnityEngine::Vector3>  c1, ByRef<::UnityEngine::Vector3>  c2, ByRef<::UnityEngine::Vector3>  a2, float_t  t) ;

/// @brief Method SplitCurve addr 0x20efd98 size 0x4d4 virtual false final false
static inline void SplitCurve(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  t) ;

/// @brief Method EstimateCurveLength addr 0x20f026c size 0x250 virtual false final false
static inline float_t EstimateCurveLength(ByRef<::UnityEngine::Vector3>  p0, ByRef<::UnityEngine::Vector3>  p1, ByRef<::UnityEngine::Vector3>  p2, ByRef<::UnityEngine::Vector3>  p3) ;

// Ctor Parameters [CppParam { name: "", ty: "CubicBezierHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CubicBezierHelper(CubicBezierHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CubicBezierHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CubicBezierHelper(CubicBezierHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CubicBezierHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubicBezierHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CubicBezierHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubicBezierHelper*, "", "CubicBezierHelper");
