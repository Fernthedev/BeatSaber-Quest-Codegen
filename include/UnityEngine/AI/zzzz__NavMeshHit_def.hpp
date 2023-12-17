#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshHit)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshHit);
// Type: UnityEngine.AI::NavMeshHit
namespace UnityEngine::AI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16116))
// CS Name: ::UnityEngine.AI::NavMeshHit
struct CORDL_TYPE NavMeshHit : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_Position offset 0x0
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Normal offset 0xc
 __declspec(property(get=__get_m_Normal, put=__set_m_Normal)) ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_Distance offset 0x18
 __declspec(property(get=__get_m_Distance, put=__set_m_Distance)) float_t  m_Distance;

/// @brief Field m_Mask offset 0x1c
 __declspec(property(get=__get_m_Mask, put=__set_m_Mask)) int32_t  m_Mask;

/// @brief Field m_Hit offset 0x20
 __declspec(property(get=__get_m_Hit, put=__set_m_Hit)) int32_t  m_Hit;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

constexpr void __set_m_Position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Position() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

constexpr void __set_m_Normal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Normal() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Normal() const;

constexpr void __set_m_Distance(float_t  value) ;

constexpr float_t& __get_m_Distance() ;

constexpr float_t const& __get_m_Distance() const;

constexpr void __set_m_Mask(int32_t  value) ;

constexpr int32_t& __get_m_Mask() ;

constexpr int32_t const& __get_m_Mask() const;

constexpr void __set_m_Hit(int32_t  value) ;

constexpr int32_t& __get_m_Hit() ;

constexpr int32_t const& __get_m_Hit() const;

/// @brief Method get_position addr 0x2c7d8e0 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_position() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Hit", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NavMeshHit(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Normal, float_t  m_Distance, int32_t  m_Mask, int32_t  m_Hit) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NavMeshHit(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NavMeshHit()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMeshHit, 0x24>, "Size mismatch!");

} // namespace end def UnityEngine::AI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshHit, "UnityEngine.AI", "NavMeshHit");
