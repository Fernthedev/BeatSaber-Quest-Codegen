#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeInstance)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine {
struct TreeInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TreeInstance);
// Type: UnityEngine::TreeInstance
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15470))
// CS Name: ::UnityEngine::TreeInstance
struct CORDL_TYPE TreeInstance : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field widthScale offset 0xc
 __declspec(property(get=__get_widthScale, put=__set_widthScale)) float_t  widthScale;

/// @brief Field heightScale offset 0x10
 __declspec(property(get=__get_heightScale, put=__set_heightScale)) float_t  heightScale;

/// @brief Field rotation offset 0x14
 __declspec(property(get=__get_rotation, put=__set_rotation)) float_t  rotation;

/// @brief Field color offset 0x18
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color32  color;

/// @brief Field lightmapColor offset 0x1c
 __declspec(property(get=__get_lightmapColor, put=__set_lightmapColor)) ::UnityEngine::Color32  lightmapColor;

/// @brief Field prototypeIndex offset 0x20
 __declspec(property(get=__get_prototypeIndex, put=__set_prototypeIndex)) int32_t  prototypeIndex;

/// @brief Field temporaryDistance offset 0x24
 __declspec(property(get=__get_temporaryDistance, put=__set_temporaryDistance)) float_t  temporaryDistance;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_widthScale(float_t  value) ;

constexpr float_t& __get_widthScale() ;

constexpr float_t const& __get_widthScale() const;

constexpr void __set_heightScale(float_t  value) ;

constexpr float_t& __get_heightScale() ;

constexpr float_t const& __get_heightScale() const;

constexpr void __set_rotation(float_t  value) ;

constexpr float_t& __get_rotation() ;

constexpr float_t const& __get_rotation() const;

constexpr void __set_color(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_color() ;

constexpr ::UnityEngine::Color32 const& __get_color() const;

constexpr void __set_lightmapColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_lightmapColor() ;

constexpr ::UnityEngine::Color32 const& __get_lightmapColor() const;

constexpr void __set_prototypeIndex(int32_t  value) ;

constexpr int32_t& __get_prototypeIndex() ;

constexpr int32_t const& __get_prototypeIndex() const;

constexpr void __set_temporaryDistance(float_t  value) ;

constexpr float_t& __get_temporaryDistance() ;

constexpr float_t const& __get_temporaryDistance() const;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "lightmapColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "prototypeIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "temporaryDistance", ty: "float_t", modifiers: "", def_value: None }]
constexpr TreeInstance(::UnityEngine::Vector3  position, float_t  widthScale, float_t  heightScale, float_t  rotation, ::UnityEngine::Color32  color, ::UnityEngine::Color32  lightmapColor, int32_t  prototypeIndex, float_t  temporaryDistance) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TreeInstance(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TreeInstance()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TreeInstance, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TreeInstance, "UnityEngine", "TreeInstance");
