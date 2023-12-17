#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HumanLimit)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct HumanLimit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanLimit);
// Type: UnityEngine::HumanLimit
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14850))
// CS Name: ::UnityEngine::HumanLimit
struct CORDL_TYPE HumanLimit : public ::bs_hook::ValueTypeWrapper<0x2c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field m_Min offset 0x0
 __declspec(property(get=__get_m_Min, put=__set_m_Min)) ::UnityEngine::Vector3  m_Min;

/// @brief Field m_Max offset 0xc
 __declspec(property(get=__get_m_Max, put=__set_m_Max)) ::UnityEngine::Vector3  m_Max;

/// @brief Field m_Center offset 0x18
 __declspec(property(get=__get_m_Center, put=__set_m_Center)) ::UnityEngine::Vector3  m_Center;

/// @brief Field m_AxisLength offset 0x24
 __declspec(property(get=__get_m_AxisLength, put=__set_m_AxisLength)) float_t  m_AxisLength;

/// @brief Field m_UseDefaultValues offset 0x28
 __declspec(property(get=__get_m_UseDefaultValues, put=__set_m_UseDefaultValues)) int32_t  m_UseDefaultValues;

constexpr void __set_m_Min(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Min() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Min() const;

constexpr void __set_m_Max(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Max() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Max() const;

constexpr void __set_m_Center(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Center() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Center() const;

constexpr void __set_m_AxisLength(float_t  value) ;

constexpr float_t& __get_m_AxisLength() ;

constexpr float_t const& __get_m_AxisLength() const;

constexpr void __set_m_UseDefaultValues(int32_t  value) ;

constexpr int32_t& __get_m_UseDefaultValues() ;

constexpr int32_t const& __get_m_UseDefaultValues() const;

// Ctor Parameters [CppParam { name: "m_Min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UseDefaultValues", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HumanLimit(::UnityEngine::Vector3  m_Min, ::UnityEngine::Vector3  m_Max, ::UnityEngine::Vector3  m_Center, float_t  m_AxisLength, int32_t  m_UseDefaultValues) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HumanLimit(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HumanLimit()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanLimit, 0x2c>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanLimit, "UnityEngine", "HumanLimit");
