#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoUnwrapSettings)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Fill;
}
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Anchor;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Anchor;
}
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Fill;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor);
MARK_VAL_T(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill);
MARK_VAL_T(::UnityEngine::ProBuilder::AutoUnwrapSettings);
// Type: ::Anchor
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12098))
// CS Name: ::AutoUnwrapSettings::Anchor
struct CORDL_TYPE __AutoUnwrapSettings__Anchor : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AutoUnwrapSettings__Anchor_Unwrapped
enum struct ____AutoUnwrapSettings__Anchor_Unwrapped : int32_t {
__E_UpperLeft = static_cast<int32_t>(0x0),
__E_UpperCenter = static_cast<int32_t>(0x1),
__E_UpperRight = static_cast<int32_t>(0x2),
__E_MiddleLeft = static_cast<int32_t>(0x3),
__E_MiddleCenter = static_cast<int32_t>(0x4),
__E_MiddleRight = static_cast<int32_t>(0x5),
__E_LowerLeft = static_cast<int32_t>(0x6),
__E_LowerCenter = static_cast<int32_t>(0x7),
__E_LowerRight = static_cast<int32_t>(0x8),
__E_None = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field UpperLeft value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const UpperLeft;

/// @brief Field UpperCenter value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const UpperCenter;

/// @brief Field UpperRight value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const UpperRight;

/// @brief Field MiddleLeft value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const MiddleLeft;

/// @brief Field MiddleCenter value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const MiddleCenter;

/// @brief Field MiddleRight value: static_cast<int32_t>(0x5)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const MiddleRight;

/// @brief Field LowerLeft value: static_cast<int32_t>(0x6)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const LowerLeft;

/// @brief Field LowerCenter value: static_cast<int32_t>(0x7)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const LowerCenter;

/// @brief Field LowerRight value: static_cast<int32_t>(0x8)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const LowerRight;

/// @brief Field None value: static_cast<int32_t>(0x9)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const None;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AutoUnwrapSettings__Anchor_Unwrapped () const noexcept {
return std::bit_cast<____AutoUnwrapSettings__Anchor_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AutoUnwrapSettings__Anchor(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AutoUnwrapSettings__Anchor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AutoUnwrapSettings__Anchor()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: ::Fill
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12099))
// CS Name: ::AutoUnwrapSettings::Fill
struct CORDL_TYPE __AutoUnwrapSettings__Fill : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AutoUnwrapSettings__Fill_Unwrapped
enum struct ____AutoUnwrapSettings__Fill_Unwrapped : int32_t {
__E_Fit = static_cast<int32_t>(0x0),
__E_Tile = static_cast<int32_t>(0x1),
__E_Stretch = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Fit value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill const Fit;

/// @brief Field Tile value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill const Tile;

/// @brief Field Stretch value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill const Stretch;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AutoUnwrapSettings__Fill_Unwrapped () const noexcept {
return std::bit_cast<____AutoUnwrapSettings__Fill_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AutoUnwrapSettings__Fill(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AutoUnwrapSettings__Fill(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AutoUnwrapSettings__Fill()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::AutoUnwrapSettings
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12100))
// CS Name: ::UnityEngine.ProBuilder::AutoUnwrapSettings
struct CORDL_TYPE AutoUnwrapSettings : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Fill = ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill;

using Anchor = ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_UseWorldSpace offset 0x0
 __declspec(property(get=__get_m_UseWorldSpace, put=__set_m_UseWorldSpace)) bool  m_UseWorldSpace;

/// @brief Field m_FlipU offset 0x1
 __declspec(property(get=__get_m_FlipU, put=__set_m_FlipU)) bool  m_FlipU;

/// @brief Field m_FlipV offset 0x2
 __declspec(property(get=__get_m_FlipV, put=__set_m_FlipV)) bool  m_FlipV;

/// @brief Field m_SwapUV offset 0x3
 __declspec(property(get=__get_m_SwapUV, put=__set_m_SwapUV)) bool  m_SwapUV;

/// @brief Field m_Fill offset 0x4
 __declspec(property(get=__get_m_Fill, put=__set_m_Fill)) ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill  m_Fill;

/// @brief Field m_Scale offset 0x8
 __declspec(property(get=__get_m_Scale, put=__set_m_Scale)) ::UnityEngine::Vector2  m_Scale;

/// @brief Field m_Offset offset 0x10
 __declspec(property(get=__get_m_Offset, put=__set_m_Offset)) ::UnityEngine::Vector2  m_Offset;

/// @brief Field m_Rotation offset 0x18
 __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation)) float_t  m_Rotation;

/// @brief Field m_Anchor offset 0x1c
 __declspec(property(get=__get_m_Anchor, put=__set_m_Anchor)) ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor  m_Anchor;

 __declspec(property(get=get_useWorldSpace, put=set_useWorldSpace)) bool  useWorldSpace;

 __declspec(property(get=get_flipU, put=set_flipU)) bool  flipU;

 __declspec(property(get=get_flipV, put=set_flipV)) bool  flipV;

 __declspec(property(get=get_swapUV, put=set_swapUV)) bool  swapUV;

 __declspec(property(get=get_fill, put=set_fill)) ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill  fill;

 __declspec(property(get=get_scale, put=set_scale)) ::UnityEngine::Vector2  scale;

 __declspec(property(get=get_offset, put=set_offset)) ::UnityEngine::Vector2  offset;

 __declspec(property(get=get_rotation, put=set_rotation)) float_t  rotation;

 __declspec(property(get=get_anchor, put=set_anchor)) ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor  anchor;

constexpr void __set_m_UseWorldSpace(bool  value) ;

constexpr bool& __get_m_UseWorldSpace() ;

constexpr bool const& __get_m_UseWorldSpace() const;

constexpr void __set_m_FlipU(bool  value) ;

constexpr bool& __get_m_FlipU() ;

constexpr bool const& __get_m_FlipU() const;

constexpr void __set_m_FlipV(bool  value) ;

constexpr bool& __get_m_FlipV() ;

constexpr bool const& __get_m_FlipV() const;

constexpr void __set_m_SwapUV(bool  value) ;

constexpr bool& __get_m_SwapUV() ;

constexpr bool const& __get_m_SwapUV() const;

constexpr void __set_m_Fill(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill  value) ;

constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill& __get_m_Fill() ;

constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill const& __get_m_Fill() const;

constexpr void __set_m_Scale(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Scale() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Scale() const;

constexpr void __set_m_Offset(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Offset() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Offset() const;

constexpr void __set_m_Rotation(float_t  value) ;

constexpr float_t& __get_m_Rotation() ;

constexpr float_t const& __get_m_Rotation() const;

constexpr void __set_m_Anchor(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor  value) ;

constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor& __get_m_Anchor() ;

constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const& __get_m_Anchor() const;

/// @brief Method get_defaultAutoUnwrapSettings addr 0x2b36bbc size 0x18 virtual false final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings() ;

/// @brief Method get_useWorldSpace addr 0x2b36bec size 0x8 virtual false final false
inline bool get_useWorldSpace() ;

/// @brief Method set_useWorldSpace addr 0x2b36bf4 size 0xc virtual false final false
inline void set_useWorldSpace(bool  value) ;

/// @brief Method get_flipU addr 0x2b36c00 size 0x8 virtual false final false
inline bool get_flipU() ;

/// @brief Method set_flipU addr 0x2b36c08 size 0xc virtual false final false
inline void set_flipU(bool  value) ;

/// @brief Method get_flipV addr 0x2b36c14 size 0x8 virtual false final false
inline bool get_flipV() ;

/// @brief Method set_flipV addr 0x2b36c1c size 0xc virtual false final false
inline void set_flipV(bool  value) ;

/// @brief Method get_swapUV addr 0x2b36c28 size 0x8 virtual false final false
inline bool get_swapUV() ;

/// @brief Method set_swapUV addr 0x2b36c30 size 0xc virtual false final false
inline void set_swapUV(bool  value) ;

/// @brief Method get_fill addr 0x2b36c3c size 0x8 virtual false final false
inline ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill get_fill() ;

/// @brief Method set_fill addr 0x2b36c44 size 0x8 virtual false final false
inline void set_fill(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill  value) ;

/// @brief Method get_scale addr 0x2b36c4c size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_scale() ;

/// @brief Method set_scale addr 0x2b36c54 size 0x8 virtual false final false
inline void set_scale(::UnityEngine::Vector2  value) ;

/// @brief Method get_offset addr 0x2b36c5c size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_offset() ;

/// @brief Method set_offset addr 0x2b36c64 size 0x8 virtual false final false
inline void set_offset(::UnityEngine::Vector2  value) ;

/// @brief Method get_rotation addr 0x2b36c6c size 0x8 virtual false final false
inline float_t get_rotation() ;

/// @brief Method set_rotation addr 0x2b36c74 size 0x8 virtual false final false
inline void set_rotation(float_t  value) ;

/// @brief Method get_anchor addr 0x2b36c7c size 0x8 virtual false final false
inline ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor get_anchor() ;

/// @brief Method set_anchor addr 0x2b36c84 size 0x8 virtual false final false
inline void set_anchor(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor  value) ;

/// @brief Method .ctor addr 0x2b36c8c size 0x5c virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::AutoUnwrapSettings  unwrapSettings) ;

/// @brief Method get_tile addr 0x2b36ce8 size 0x18 virtual false final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_tile() ;

/// @brief Method get_fit addr 0x2b36d00 size 0x18 virtual false final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_fit() ;

/// @brief Method get_stretch addr 0x2b36d18 size 0x18 virtual false final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch() ;

/// @brief Method Reset addr 0x2b36bd4 size 0x18 virtual false final false
inline void Reset() ;

/// @brief Method ToString addr 0x2b36d30 size 0x54c virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_UseWorldSpace", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FlipU", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FlipV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SwapUV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Fill", ty: "::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill", modifiers: "", def_value: None }, CppParam { name: "m_Scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Anchor", ty: "::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor", modifiers: "", def_value: None }]
constexpr AutoUnwrapSettings(bool  m_UseWorldSpace, bool  m_FlipU, bool  m_FlipV, bool  m_SwapUV, ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill  m_Fill, ::UnityEngine::Vector2  m_Scale, ::UnityEngine::Vector2  m_Offset, float_t  m_Rotation, ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor  m_Anchor) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AutoUnwrapSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AutoUnwrapSettings()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::AutoUnwrapSettings, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");
