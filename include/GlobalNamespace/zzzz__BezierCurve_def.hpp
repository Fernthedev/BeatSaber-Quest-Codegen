#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BezierCurve)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BezierCurve;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BezierCurve);
// Type: ::BezierCurve
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3992))
// CS Name: ::BezierCurve
struct CORDL_TYPE BezierCurve : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field p0 offset 0x0
 __declspec(property(get=__get_p0, put=__set_p0)) ::UnityEngine::Vector3  p0;

/// @brief Field p1 offset 0xc
 __declspec(property(get=__get_p1, put=__set_p1)) ::UnityEngine::Vector3  p1;

/// @brief Field p2 offset 0x18
 __declspec(property(get=__get_p2, put=__set_p2)) ::UnityEngine::Vector3  p2;

/// @brief Field p3 offset 0x24
 __declspec(property(get=__get_p3, put=__set_p3)) ::UnityEngine::Vector3  p3;

constexpr void __set_p0(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_p0() ;

constexpr ::UnityEngine::Vector3 const& __get_p0() const;

constexpr void __set_p1(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_p1() ;

constexpr ::UnityEngine::Vector3 const& __get_p1() const;

constexpr void __set_p2(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_p2() ;

constexpr ::UnityEngine::Vector3 const& __get_p2() const;

constexpr void __set_p3(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_p3() ;

constexpr ::UnityEngine::Vector3 const& __get_p3() const;

/// @brief Method .ctor addr 0x221dde4 size 0x30 virtual false final false
inline void _ctor(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3) ;

// Ctor Parameters [CppParam { name: "p0", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p3", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr BezierCurve(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BezierCurve(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BezierCurve()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierCurve, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierCurve, "", "BezierCurve");
