#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Mask)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Vector2Mask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Vector2Mask);
// Type: UnityEngine.ProBuilder::Vector2Mask
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12216))
// CS Name: ::UnityEngine.ProBuilder::Vector2Mask
struct CORDL_TYPE Vector2Mask : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field X offset 0x0
static constexpr uint8_t  X{static_cast<uint8_t>(0x1u)};

/// @brief Field Y offset 0x0
static constexpr uint8_t  Y{static_cast<uint8_t>(0x2u)};

/// @brief Field m_Mask offset 0x0
 __declspec(property(get=__get_m_Mask, put=__set_m_Mask)) uint8_t  m_Mask;

 __declspec(property(get=get_x)) float_t  x;

 __declspec(property(get=get_y)) float_t  y;

static inline void setStaticF_XY(::UnityEngine::ProBuilder::Vector2Mask  value) ;

static inline ::UnityEngine::ProBuilder::Vector2Mask getStaticF_XY() ;

constexpr void __set_m_Mask(uint8_t  value) ;

constexpr uint8_t& __get_m_Mask() ;

constexpr uint8_t const& __get_m_Mask() const;

/// @brief Method get_x addr 0x2b7f618 size 0x18 virtual false final false
inline float_t get_x() ;

/// @brief Method get_y addr 0x2b7f630 size 0x18 virtual false final false
inline float_t get_y() ;

/// @brief Method .ctor addr 0x2b7f648 size 0x24 virtual false final false
inline void _ctor(::UnityEngine::Vector3  v, float_t  epsilon) ;

/// @brief Method .ctor addr 0x2b7f66c size 0x8 virtual false final false
inline void _ctor(uint8_t  mask) ;

/// @brief Method op_Implicit addr 0x2b7f674 size 0x1c virtual false final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::ProBuilder::Vector2Mask  mask) ;

/// @brief Method op_Implicit addr 0x2b7f690 size 0x28 virtual false final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_Implicit___UnityEngine__ProBuilder__Vector2Mask(::UnityEngine::Vector2  v) ;

/// @brief Method op_BitwiseOr addr 0x2b7f6b8 size 0xc virtual false final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector2Mask  left, ::UnityEngine::ProBuilder::Vector2Mask  right) ;

/// @brief Method op_BitwiseAnd addr 0x2b7f6c4 size 0xc virtual false final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector2Mask  left, ::UnityEngine::ProBuilder::Vector2Mask  right) ;

/// @brief Method op_ExclusiveOr addr 0x2b7f6d0 size 0xc virtual false final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector2Mask  left, ::UnityEngine::ProBuilder::Vector2Mask  right) ;

/// @brief Method op_Multiply addr 0x2b7f6dc size 0x28 virtual false final false
static inline ::UnityEngine::Vector2 op_Multiply(::UnityEngine::ProBuilder::Vector2Mask  mask, float_t  value) ;

// Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Vector2Mask(uint8_t  m_Mask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector2Mask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector2Mask()  = default;


// Fields

// Static field XY


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Vector2Mask, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Vector2Mask, "UnityEngine.ProBuilder", "Vector2Mask");
