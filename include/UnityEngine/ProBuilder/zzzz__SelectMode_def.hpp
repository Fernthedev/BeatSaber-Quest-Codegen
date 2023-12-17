#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectMode)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct SelectMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::SelectMode);
// Type: UnityEngine.ProBuilder::SelectMode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12153))
// CS Name: ::UnityEngine.ProBuilder::SelectMode
struct CORDL_TYPE SelectMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SelectMode_Unwrapped
enum struct __SelectMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Object = static_cast<int32_t>(0x1),
__E_Vertex = static_cast<int32_t>(0x2),
__E_Edge = static_cast<int32_t>(0x4),
__E_Face = static_cast<int32_t>(0x8),
__E_TextureFace = static_cast<int32_t>(0x10),
__E_TextureEdge = static_cast<int32_t>(0x20),
__E_TextureVertex = static_cast<int32_t>(0x40),
__E_InputTool = static_cast<int32_t>(0x80),
__E_Any = static_cast<int32_t>(0xffff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::SelectMode const None;

/// @brief Field Object value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::SelectMode const Object;

/// @brief Field Vertex value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::SelectMode const Vertex;

/// @brief Field Edge value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::SelectMode const Edge;

/// @brief Field Face value: static_cast<int32_t>(0x8)
static ::UnityEngine::ProBuilder::SelectMode const Face;

/// @brief Field TextureFace value: static_cast<int32_t>(0x10)
static ::UnityEngine::ProBuilder::SelectMode const TextureFace;

/// @brief Field TextureEdge value: static_cast<int32_t>(0x20)
static ::UnityEngine::ProBuilder::SelectMode const TextureEdge;

/// @brief Field TextureVertex value: static_cast<int32_t>(0x40)
static ::UnityEngine::ProBuilder::SelectMode const TextureVertex;

/// @brief Field InputTool value: static_cast<int32_t>(0x80)
static ::UnityEngine::ProBuilder::SelectMode const InputTool;

/// @brief Field Any value: static_cast<int32_t>(0xffff)
static ::UnityEngine::ProBuilder::SelectMode const Any;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SelectMode_Unwrapped () const noexcept {
return std::bit_cast<__SelectMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SelectMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SelectMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SelectMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectMode, "UnityEngine.ProBuilder", "SelectMode");
