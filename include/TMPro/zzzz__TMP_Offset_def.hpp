#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Offset)
namespace System {
class Object;
}
// Forward declare root types
namespace TMPro {
struct TMP_Offset;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_Offset);
// Type: TMPro::TMP_Offset
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12330))
// CS Name: ::TMPro::TMP_Offset
struct CORDL_TYPE TMP_Offset : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Left offset 0x0
 __declspec(property(get=__get_m_Left, put=__set_m_Left)) float_t  m_Left;

/// @brief Field m_Right offset 0x4
 __declspec(property(get=__get_m_Right, put=__set_m_Right)) float_t  m_Right;

/// @brief Field m_Top offset 0x8
 __declspec(property(get=__get_m_Top, put=__set_m_Top)) float_t  m_Top;

/// @brief Field m_Bottom offset 0xc
 __declspec(property(get=__get_m_Bottom, put=__set_m_Bottom)) float_t  m_Bottom;

 __declspec(property(get=get_left, put=set_left)) float_t  left;

 __declspec(property(get=get_right, put=set_right)) float_t  right;

 __declspec(property(get=get_top, put=set_top)) float_t  top;

 __declspec(property(get=get_bottom, put=set_bottom)) float_t  bottom;

 __declspec(property(get=get_horizontal, put=set_horizontal)) float_t  horizontal;

 __declspec(property(get=get_vertical, put=set_vertical)) float_t  vertical;

constexpr void __set_m_Left(float_t  value) ;

constexpr float_t& __get_m_Left() ;

constexpr float_t const& __get_m_Left() const;

constexpr void __set_m_Right(float_t  value) ;

constexpr float_t& __get_m_Right() ;

constexpr float_t const& __get_m_Right() const;

constexpr void __set_m_Top(float_t  value) ;

constexpr float_t& __get_m_Top() ;

constexpr float_t const& __get_m_Top() const;

constexpr void __set_m_Bottom(float_t  value) ;

constexpr float_t& __get_m_Bottom() ;

constexpr float_t const& __get_m_Bottom() const;

static inline void setStaticF_k_ZeroOffset(::TMPro::TMP_Offset  value) ;

static inline ::TMPro::TMP_Offset getStaticF_k_ZeroOffset() ;

/// @brief Method get_left addr 0x2c0186c size 0x8 virtual false final false
inline float_t get_left() ;

/// @brief Method set_left addr 0x2c01874 size 0x8 virtual false final false
inline void set_left(float_t  value) ;

/// @brief Method get_right addr 0x2c0187c size 0x8 virtual false final false
inline float_t get_right() ;

/// @brief Method set_right addr 0x2c01884 size 0x8 virtual false final false
inline void set_right(float_t  value) ;

/// @brief Method get_top addr 0x2c0188c size 0x8 virtual false final false
inline float_t get_top() ;

/// @brief Method set_top addr 0x2c01894 size 0x8 virtual false final false
inline void set_top(float_t  value) ;

/// @brief Method get_bottom addr 0x2c0189c size 0x8 virtual false final false
inline float_t get_bottom() ;

/// @brief Method set_bottom addr 0x2c018a4 size 0x8 virtual false final false
inline void set_bottom(float_t  value) ;

/// @brief Method get_horizontal addr 0x2c018ac size 0x8 virtual false final false
inline float_t get_horizontal() ;

/// @brief Method set_horizontal addr 0x2c018b4 size 0x8 virtual false final false
inline void set_horizontal(float_t  value) ;

/// @brief Method get_vertical addr 0x2c018bc size 0x8 virtual false final false
inline float_t get_vertical() ;

/// @brief Method set_vertical addr 0x2c018c4 size 0x8 virtual false final false
inline void set_vertical(float_t  value) ;

/// @brief Method get_zero addr 0x2c018cc size 0x5c virtual false final false
static inline ::TMPro::TMP_Offset get_zero() ;

/// @brief Method .ctor addr 0x2c01928 size 0xc virtual false final false
inline void _ctor(float_t  left, float_t  right, float_t  top, float_t  bottom) ;

/// @brief Method .ctor addr 0x2c01934 size 0xc virtual false final false
inline void _ctor(float_t  horizontal, float_t  vertical) ;

/// @brief Method op_Equality addr 0x2c01940 size 0x30 virtual false final false
static inline bool op_Equality(::TMPro::TMP_Offset  lhs, ::TMPro::TMP_Offset  rhs) ;

/// @brief Method op_Inequality addr 0x2c01970 size 0xb8 virtual false final false
static inline bool op_Inequality(::TMPro::TMP_Offset  lhs, ::TMPro::TMP_Offset  rhs) ;

/// @brief Method op_Multiply addr 0x2c01a28 size 0x14 virtual false final false
static inline ::TMPro::TMP_Offset op_Multiply(::TMPro::TMP_Offset  a, float_t  b) ;

/// @brief Method GetHashCode addr 0x2c01a3c size 0x64 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2c01aa0 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2c01b18 size 0xa8 virtual false final false
inline bool Equals(::TMPro::TMP_Offset  other) ;

// Ctor Parameters [CppParam { name: "m_Left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Bottom", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMP_Offset(float_t  m_Left, float_t  m_Right, float_t  m_Top, float_t  m_Bottom) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_Offset(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_Offset()  = default;


// Fields

// Static field k_ZeroOffset


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Offset, 0x10>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Offset, "TMPro", "TMP_Offset");
