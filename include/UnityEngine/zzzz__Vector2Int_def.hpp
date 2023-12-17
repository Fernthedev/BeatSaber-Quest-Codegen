#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Int)
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct Vector2Int;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector2Int);
// Type: UnityEngine::Vector2Int
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10244))
// CS Name: ::UnityEngine::Vector2Int
struct CORDL_TYPE Vector2Int : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_X offset 0x0
 __declspec(property(get=__get_m_X, put=__set_m_X)) int32_t  m_X;

/// @brief Field m_Y offset 0x4
 __declspec(property(get=__get_m_Y, put=__set_m_Y)) int32_t  m_Y;

 __declspec(property(get=get_x, put=set_x)) int32_t  x;

 __declspec(property(get=get_y, put=set_y)) int32_t  y;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Vector2Int>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

constexpr void __set_m_X(int32_t  value) ;

constexpr int32_t& __get_m_X() ;

constexpr int32_t const& __get_m_X() const;

constexpr void __set_m_Y(int32_t  value) ;

constexpr int32_t& __get_m_Y() ;

constexpr int32_t const& __get_m_Y() const;

static inline void setStaticF_s_Zero(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_s_Zero() ;

static inline void setStaticF_s_One(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_s_One() ;

static inline void setStaticF_s_Up(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_s_Up() ;

static inline void setStaticF_s_Down(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_s_Down() ;

static inline void setStaticF_s_Left(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_s_Left() ;

static inline void setStaticF_s_Right(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_s_Right() ;

/// @brief Method get_x addr 0x2cd5974 size 0x8 virtual false final false
inline int32_t get_x() ;

/// @brief Method set_x addr 0x2cd597c size 0x8 virtual false final false
inline void set_x(int32_t  value) ;

/// @brief Method get_y addr 0x2cd5984 size 0x8 virtual false final false
inline int32_t get_y() ;

/// @brief Method set_y addr 0x2cd598c size 0x8 virtual false final false
inline void set_y(int32_t  value) ;

/// @brief Method .ctor addr 0x2cd5994 size 0x8 virtual false final false
inline void _ctor(int32_t  x, int32_t  y) ;

/// @brief Method op_Implicit addr 0x2cd599c size 0x10 virtual false final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector2Int  v) ;

/// @brief Method FloorToInt addr 0x2cd59ac size 0xf8 virtual false final false
static inline ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2  v) ;

/// @brief Method op_Equality addr 0x2cd5aa4 size 0x20 virtual false final false
static inline bool op_Equality(::UnityEngine::Vector2Int  lhs, ::UnityEngine::Vector2Int  rhs) ;

/// @brief Method Equals addr 0x2cd5ac4 size 0x88 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2cd5b4c size 0x28 virtual true final true
inline bool Equals(::UnityEngine::Vector2Int  other) ;

/// @brief Method GetHashCode addr 0x2cd5b74 size 0x48 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cd5bbc size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x2cd5bc8 size 0x17c virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

// Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector2Int(int32_t  m_X, int32_t  m_Y) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector2Int(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector2Int()  = default;


// Fields

// Static field s_Zero

// Static field s_One

// Static field s_Up

// Static field s_Down

// Static field s_Left

// Static field s_Right


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector2Int, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
