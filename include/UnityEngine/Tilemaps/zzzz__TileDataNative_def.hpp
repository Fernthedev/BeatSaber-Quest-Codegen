#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileDataNative)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Tilemaps {
struct TileFlags;
}
namespace UnityEngine::Tilemaps {
struct __Tile__ColliderType;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileDataNative;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileDataNative);
// Type: UnityEngine.Tilemaps::TileDataNative
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15942))
// CS Name: ::UnityEngine.Tilemaps::TileDataNative
struct CORDL_TYPE TileDataNative : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_Sprite offset 0x0
 __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite)) int32_t  m_Sprite;

/// @brief Field m_Color offset 0x4
 __declspec(property(get=__get_m_Color, put=__set_m_Color)) ::UnityEngine::Color  m_Color;

/// @brief Field m_Transform offset 0x14
 __declspec(property(get=__get_m_Transform, put=__set_m_Transform)) ::UnityEngine::Matrix4x4  m_Transform;

/// @brief Field m_GameObject offset 0x54
 __declspec(property(get=__get_m_GameObject, put=__set_m_GameObject)) int32_t  m_GameObject;

/// @brief Field m_Flags offset 0x58
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) ::UnityEngine::Tilemaps::TileFlags  m_Flags;

/// @brief Field m_ColliderType offset 0x5c
 __declspec(property(get=__get_m_ColliderType, put=__set_m_ColliderType)) ::UnityEngine::Tilemaps::__Tile__ColliderType  m_ColliderType;

constexpr void __set_m_Sprite(int32_t  value) ;

constexpr int32_t& __get_m_Sprite() ;

constexpr int32_t const& __get_m_Sprite() const;

constexpr void __set_m_Color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_Color() ;

constexpr ::UnityEngine::Color const& __get_m_Color() const;

constexpr void __set_m_Transform(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_m_Transform() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_m_Transform() const;

constexpr void __set_m_GameObject(int32_t  value) ;

constexpr int32_t& __get_m_GameObject() ;

constexpr int32_t const& __get_m_GameObject() const;

constexpr void __set_m_Flags(::UnityEngine::Tilemaps::TileFlags  value) ;

constexpr ::UnityEngine::Tilemaps::TileFlags& __get_m_Flags() ;

constexpr ::UnityEngine::Tilemaps::TileFlags const& __get_m_Flags() const;

constexpr void __set_m_ColliderType(::UnityEngine::Tilemaps::__Tile__ColliderType  value) ;

constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType& __get_m_ColliderType() ;

constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType const& __get_m_ColliderType() const;

// Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: None }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::__Tile__ColliderType", modifiers: "", def_value: None }]
constexpr TileDataNative(int32_t  m_Sprite, ::UnityEngine::Color  m_Color, ::UnityEngine::Matrix4x4  m_Transform, int32_t  m_GameObject, ::UnityEngine::Tilemaps::TileFlags  m_Flags, ::UnityEngine::Tilemaps::__Tile__ColliderType  m_ColliderType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TileDataNative(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TileDataNative()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileDataNative, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileDataNative, "UnityEngine.Tilemaps", "TileDataNative");
