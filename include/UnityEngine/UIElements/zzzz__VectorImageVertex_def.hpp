#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorImageVertex)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VectorImageVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VectorImageVertex);
// Type: UnityEngine.UIElements::VectorImageVertex
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6804))
// CS Name: ::UnityEngine.UIElements::VectorImageVertex
struct CORDL_TYPE VectorImageVertex : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field tint offset 0xc
 __declspec(property(get=__get_tint, put=__set_tint)) ::UnityEngine::Color32  tint;

/// @brief Field uv offset 0x10
 __declspec(property(get=__get_uv, put=__set_uv)) ::UnityEngine::Vector2  uv;

/// @brief Field settingIndex offset 0x18
 __declspec(property(get=__get_settingIndex, put=__set_settingIndex)) uint32_t  settingIndex;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_tint(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_tint() ;

constexpr ::UnityEngine::Color32 const& __get_tint() const;

constexpr void __set_uv(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_uv() ;

constexpr ::UnityEngine::Vector2 const& __get_uv() const;

constexpr void __set_settingIndex(uint32_t  value) ;

constexpr uint32_t& __get_settingIndex() ;

constexpr uint32_t const& __get_settingIndex() const;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "settingIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VectorImageVertex(::UnityEngine::Vector3  position, ::UnityEngine::Color32  tint, ::UnityEngine::Vector2  uv, uint32_t  settingIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VectorImageVertex(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VectorImageVertex()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VectorImageVertex, 0x1c>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VectorImageVertex, "UnityEngine.UIElements", "VectorImageVertex");
