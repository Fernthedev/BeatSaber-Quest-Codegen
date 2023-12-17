#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastHit2D)
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RaycastHit2D);
// Type: UnityEngine::RaycastHit2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15934))
// CS Name: ::UnityEngine::RaycastHit2D
struct CORDL_TYPE RaycastHit2D : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_Centroid offset 0x0
 __declspec(property(get=__get_m_Centroid, put=__set_m_Centroid)) ::UnityEngine::Vector2  m_Centroid;

/// @brief Field m_Point offset 0x8
 __declspec(property(get=__get_m_Point, put=__set_m_Point)) ::UnityEngine::Vector2  m_Point;

/// @brief Field m_Normal offset 0x10
 __declspec(property(get=__get_m_Normal, put=__set_m_Normal)) ::UnityEngine::Vector2  m_Normal;

/// @brief Field m_Distance offset 0x18
 __declspec(property(get=__get_m_Distance, put=__set_m_Distance)) float_t  m_Distance;

/// @brief Field m_Fraction offset 0x1c
 __declspec(property(get=__get_m_Fraction, put=__set_m_Fraction)) float_t  m_Fraction;

/// @brief Field m_Collider offset 0x20
 __declspec(property(get=__get_m_Collider, put=__set_m_Collider)) int32_t  m_Collider;

 __declspec(property(get=get_point)) ::UnityEngine::Vector2  point;

 __declspec(property(get=get_normal)) ::UnityEngine::Vector2  normal;

 __declspec(property(get=get_distance)) float_t  distance;

 __declspec(property(get=get_fraction)) float_t  fraction;

 __declspec(property(get=get_collider)) ::UnityEngine::Collider2D*  collider;

constexpr void __set_m_Centroid(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Centroid() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Centroid() const;

constexpr void __set_m_Point(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Point() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Point() const;

constexpr void __set_m_Normal(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Normal() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Normal() const;

constexpr void __set_m_Distance(float_t  value) ;

constexpr float_t& __get_m_Distance() ;

constexpr float_t const& __get_m_Distance() const;

constexpr void __set_m_Fraction(float_t  value) ;

constexpr float_t& __get_m_Fraction() ;

constexpr float_t const& __get_m_Fraction() const;

constexpr void __set_m_Collider(int32_t  value) ;

constexpr int32_t& __get_m_Collider() ;

constexpr int32_t const& __get_m_Collider() const;

/// @brief Method get_point addr 0x2d13340 size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_point() ;

/// @brief Method get_normal addr 0x2d13348 size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_normal() ;

/// @brief Method get_distance addr 0x2d13350 size 0x8 virtual false final false
inline float_t get_distance() ;

/// @brief Method get_fraction addr 0x2d13358 size 0x8 virtual false final false
inline float_t get_fraction() ;

/// @brief Method get_collider addr 0x2d13360 size 0xac virtual false final false
inline ::UnityEngine::Collider2D* get_collider() ;

// Ctor Parameters [CppParam { name: "m_Centroid", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Fraction", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RaycastHit2D(::UnityEngine::Vector2  m_Centroid, ::UnityEngine::Vector2  m_Point, ::UnityEngine::Vector2  m_Normal, float_t  m_Distance, float_t  m_Fraction, int32_t  m_Collider) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RaycastHit2D(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RaycastHit2D()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RaycastHit2D, 0x24>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit2D, "UnityEngine", "RaycastHit2D");
