#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPoint)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPoint);
// Type: UnityEngine::ContactPoint
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15498))
// CS Name: ::UnityEngine::ContactPoint
struct CORDL_TYPE ContactPoint : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_Point offset 0x0
 __declspec(property(get=__get_m_Point, put=__set_m_Point)) ::UnityEngine::Vector3  m_Point;

/// @brief Field m_Normal offset 0xc
 __declspec(property(get=__get_m_Normal, put=__set_m_Normal)) ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_ThisColliderInstanceID offset 0x18
 __declspec(property(get=__get_m_ThisColliderInstanceID, put=__set_m_ThisColliderInstanceID)) int32_t  m_ThisColliderInstanceID;

/// @brief Field m_OtherColliderInstanceID offset 0x1c
 __declspec(property(get=__get_m_OtherColliderInstanceID, put=__set_m_OtherColliderInstanceID)) int32_t  m_OtherColliderInstanceID;

/// @brief Field m_Separation offset 0x20
 __declspec(property(get=__get_m_Separation, put=__set_m_Separation)) float_t  m_Separation;

constexpr void __set_m_Point(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Point() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Point() const;

constexpr void __set_m_Normal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Normal() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Normal() const;

constexpr void __set_m_ThisColliderInstanceID(int32_t  value) ;

constexpr int32_t& __get_m_ThisColliderInstanceID() ;

constexpr int32_t const& __get_m_ThisColliderInstanceID() const;

constexpr void __set_m_OtherColliderInstanceID(int32_t  value) ;

constexpr int32_t& __get_m_OtherColliderInstanceID() ;

constexpr int32_t const& __get_m_OtherColliderInstanceID() const;

constexpr void __set_m_Separation(float_t  value) ;

constexpr float_t& __get_m_Separation() ;

constexpr float_t const& __get_m_Separation() const;

// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_ThisColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None }]
constexpr ContactPoint(::UnityEngine::Vector3  m_Point, ::UnityEngine::Vector3  m_Normal, int32_t  m_ThisColliderInstanceID, int32_t  m_OtherColliderInstanceID, float_t  m_Separation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ContactPoint(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ContactPoint()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactPoint, 0x24>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPoint, "UnityEngine", "ContactPoint");
