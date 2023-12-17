#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastHit)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RaycastHit);
// Type: UnityEngine::RaycastHit
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15487))
// CS Name: ::UnityEngine::RaycastHit
struct CORDL_TYPE RaycastHit : public ::bs_hook::ValueTypeWrapper<0x2c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field m_Point offset 0x0
 __declspec(property(get=__get_m_Point, put=__set_m_Point)) ::UnityEngine::Vector3  m_Point;

/// @brief Field m_Normal offset 0xc
 __declspec(property(get=__get_m_Normal, put=__set_m_Normal)) ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_FaceID offset 0x18
 __declspec(property(get=__get_m_FaceID, put=__set_m_FaceID)) uint32_t  m_FaceID;

/// @brief Field m_Distance offset 0x1c
 __declspec(property(get=__get_m_Distance, put=__set_m_Distance)) float_t  m_Distance;

/// @brief Field m_UV offset 0x20
 __declspec(property(get=__get_m_UV, put=__set_m_UV)) ::UnityEngine::Vector2  m_UV;

/// @brief Field m_Collider offset 0x28
 __declspec(property(get=__get_m_Collider, put=__set_m_Collider)) int32_t  m_Collider;

 __declspec(property(get=get_collider)) ::UnityEngine::Collider*  collider;

 __declspec(property(get=get_point, put=set_point)) ::UnityEngine::Vector3  point;

 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_distance, put=set_distance)) float_t  distance;

constexpr void __set_m_Point(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Point() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Point() const;

constexpr void __set_m_Normal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Normal() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Normal() const;

constexpr void __set_m_FaceID(uint32_t  value) ;

constexpr uint32_t& __get_m_FaceID() ;

constexpr uint32_t const& __get_m_FaceID() const;

constexpr void __set_m_Distance(float_t  value) ;

constexpr float_t& __get_m_Distance() ;

constexpr float_t const& __get_m_Distance() const;

constexpr void __set_m_UV(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_UV() ;

constexpr ::UnityEngine::Vector2 const& __get_m_UV() const;

constexpr void __set_m_Collider(int32_t  value) ;

constexpr int32_t& __get_m_Collider() ;

constexpr int32_t const& __get_m_Collider() const;

/// @brief Method get_collider addr 0x2d15b90 size 0xac virtual false final false
inline ::UnityEngine::Collider* get_collider() ;

/// @brief Method get_point addr 0x2d15c3c size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_point() ;

/// @brief Method set_point addr 0x2d15c48 size 0xc virtual false final false
inline void set_point(::UnityEngine::Vector3  value) ;

/// @brief Method get_normal addr 0x2d15c54 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method set_normal addr 0x2d15c60 size 0xc virtual false final false
inline void set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method get_distance addr 0x2d15c6c size 0x8 virtual false final false
inline float_t get_distance() ;

/// @brief Method set_distance addr 0x2d15c74 size 0x8 virtual false final false
inline void set_distance(float_t  value) ;

// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_FaceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RaycastHit(::UnityEngine::Vector3  m_Point, ::UnityEngine::Vector3  m_Normal, uint32_t  m_FaceID, float_t  m_Distance, ::UnityEngine::Vector2  m_UV, int32_t  m_Collider) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RaycastHit(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RaycastHit()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RaycastHit, 0x2c>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
