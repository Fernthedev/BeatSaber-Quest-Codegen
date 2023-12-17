#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierPoint)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
struct BezierTangentDirection;
}
namespace UnityEngine::ProBuilder {
struct BezierTangentMode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::BezierPoint);
// Type: UnityEngine.ProBuilder::BezierPoint
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12103))
// CS Name: ::UnityEngine.ProBuilder::BezierPoint
struct CORDL_TYPE BezierPoint : public ::bs_hook::ValueTypeWrapper<0x34> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field tangentIn offset 0xc
 __declspec(property(get=__get_tangentIn, put=__set_tangentIn)) ::UnityEngine::Vector3  tangentIn;

/// @brief Field tangentOut offset 0x18
 __declspec(property(get=__get_tangentOut, put=__set_tangentOut)) ::UnityEngine::Vector3  tangentOut;

/// @brief Field rotation offset 0x24
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_tangentIn(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_tangentIn() ;

constexpr ::UnityEngine::Vector3 const& __get_tangentIn() const;

constexpr void __set_tangentOut(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_tangentOut() ;

constexpr ::UnityEngine::Vector3 const& __get_tangentOut() const;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

/// @brief Method .ctor addr 0x2b3727c size 0x28 virtual false final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  tangentIn, ::UnityEngine::Vector3  tangentOut, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method EnforceTangentMode addr 0x2b372a4 size 0x318 virtual false final false
inline void EnforceTangentMode(::UnityEngine::ProBuilder::BezierTangentDirection  master, ::UnityEngine::ProBuilder::BezierTangentMode  mode) ;

/// @brief Method SetPosition addr 0x2b375bc size 0x50 virtual false final false
inline void SetPosition(::UnityEngine::Vector3  position) ;

/// @brief Method SetTangentIn addr 0x2b3760c size 0x14 virtual false final false
inline void SetTangentIn(::UnityEngine::Vector3  tangent, ::UnityEngine::ProBuilder::BezierTangentMode  mode) ;

/// @brief Method SetTangentOut addr 0x2b37620 size 0x14 virtual false final false
inline void SetTangentOut(::UnityEngine::Vector3  tangent, ::UnityEngine::ProBuilder::BezierTangentMode  mode) ;

/// @brief Method QuadraticPosition addr 0x2b37634 size 0x60 virtual false final false
static inline ::UnityEngine::Vector3 QuadraticPosition(::UnityEngine::ProBuilder::BezierPoint  a, ::UnityEngine::ProBuilder::BezierPoint  b, float_t  t) ;

/// @brief Method CubicPosition addr 0x2b37694 size 0xa0 virtual false final false
static inline ::UnityEngine::Vector3 CubicPosition(::UnityEngine::ProBuilder::BezierPoint  a, ::UnityEngine::ProBuilder::BezierPoint  b, float_t  t) ;

/// @brief Method GetLookDirection addr 0x2b37734 size 0x9f8 virtual false final false
static inline ::UnityEngine::Vector3 GetLookDirection(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*  points, int32_t  index, int32_t  previous, int32_t  next) ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangentIn", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangentOut", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr BezierPoint(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  tangentIn, ::UnityEngine::Vector3  tangentOut, ::UnityEngine::Quaternion  rotation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BezierPoint(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x34>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BezierPoint()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BezierPoint, 0x34>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BezierPoint, "UnityEngine.ProBuilder", "BezierPoint");
