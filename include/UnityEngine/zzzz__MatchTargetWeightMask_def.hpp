#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MatchTargetWeightMask)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct MatchTargetWeightMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MatchTargetWeightMask);
// Type: UnityEngine::MatchTargetWeightMask
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14881))
// CS Name: ::UnityEngine::MatchTargetWeightMask
struct CORDL_TYPE MatchTargetWeightMask : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_PositionXYZWeight offset 0x0
 __declspec(property(get=__get_m_PositionXYZWeight, put=__set_m_PositionXYZWeight)) ::UnityEngine::Vector3  m_PositionXYZWeight;

/// @brief Field m_RotationWeight offset 0xc
 __declspec(property(get=__get_m_RotationWeight, put=__set_m_RotationWeight)) float_t  m_RotationWeight;

constexpr void __set_m_PositionXYZWeight(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_PositionXYZWeight() ;

constexpr ::UnityEngine::Vector3 const& __get_m_PositionXYZWeight() const;

constexpr void __set_m_RotationWeight(float_t  value) ;

constexpr float_t& __get_m_RotationWeight() ;

constexpr float_t const& __get_m_RotationWeight() const;

// Ctor Parameters [CppParam { name: "m_PositionXYZWeight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_RotationWeight", ty: "float_t", modifiers: "", def_value: None }]
constexpr MatchTargetWeightMask(::UnityEngine::Vector3  m_PositionXYZWeight, float_t  m_RotationWeight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MatchTargetWeightMask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MatchTargetWeightMask()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MatchTargetWeightMask, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MatchTargetWeightMask, "UnityEngine", "MatchTargetWeightMask");
