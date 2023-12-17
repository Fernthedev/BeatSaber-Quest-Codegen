#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TileChangeData)
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileChangeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileChangeData);
// Type: UnityEngine.Tilemaps::TileChangeData
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15943))
// CS Name: ::UnityEngine.Tilemaps::TileChangeData
struct CORDL_TYPE TileChangeData : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field m_Position offset 0x0
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector3Int  m_Position;

/// @brief Field m_TileAsset offset 0x10
 __declspec(property(get=__get_m_TileAsset, put=__set_m_TileAsset)) ::UnityEngine::Object*  m_TileAsset;

/// @brief Field m_Color offset 0x18
 __declspec(property(get=__get_m_Color, put=__set_m_Color)) ::UnityEngine::Color  m_Color;

/// @brief Field m_Transform offset 0x28
 __declspec(property(get=__get_m_Transform, put=__set_m_Transform)) ::UnityEngine::Matrix4x4  m_Transform;

constexpr void __set_m_Position(::UnityEngine::Vector3Int  value) ;

constexpr ::UnityEngine::Vector3Int& __get_m_Position() ;

constexpr ::UnityEngine::Vector3Int const& __get_m_Position() const;

constexpr void __set_m_TileAsset(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get_m_TileAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get_m_TileAsset() const;

constexpr void __set_m_Color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_Color() ;

constexpr ::UnityEngine::Color const& __get_m_Color() const;

constexpr void __set_m_Transform(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_m_Transform() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_m_Transform() const;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_TileAsset", ty: "::UnityEngine::Object*", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
constexpr TileChangeData(::UnityEngine::Vector3Int  m_Position, ::UnityEngine::Object*  m_TileAsset, ::UnityEngine::Color  m_Color, ::UnityEngine::Matrix4x4  m_Transform) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TileChangeData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TileChangeData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileChangeData, 0x68>, "Size mismatch!");

} // namespace end def UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileChangeData, "UnityEngine.Tilemaps", "TileChangeData");
