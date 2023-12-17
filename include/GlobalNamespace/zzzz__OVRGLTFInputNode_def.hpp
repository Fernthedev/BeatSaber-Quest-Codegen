#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFInputNode)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFInputNode);
// Type: ::OVRGLTFInputNode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7554))
// CS Name: ::OVRGLTFInputNode
struct CORDL_TYPE OVRGLTFInputNode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRGLTFInputNode_Unwrapped
enum struct __OVRGLTFInputNode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Button_A_X = static_cast<int32_t>(0x1),
__E_Button_B_Y = static_cast<int32_t>(0x2),
__E_Button_Oculus_Menu = static_cast<int32_t>(0x3),
__E_Trigger_Grip = static_cast<int32_t>(0x4),
__E_Trigger_Front = static_cast<int32_t>(0x5),
__E_ThumbStick = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::OVRGLTFInputNode const None;

/// @brief Field Button_A_X value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::OVRGLTFInputNode const Button_A_X;

/// @brief Field Button_B_Y value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::OVRGLTFInputNode const Button_B_Y;

/// @brief Field Button_Oculus_Menu value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::OVRGLTFInputNode const Button_Oculus_Menu;

/// @brief Field Trigger_Grip value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::OVRGLTFInputNode const Trigger_Grip;

/// @brief Field Trigger_Front value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::OVRGLTFInputNode const Trigger_Front;

/// @brief Field ThumbStick value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::OVRGLTFInputNode const ThumbStick;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRGLTFInputNode_Unwrapped () const noexcept {
return std::bit_cast<__OVRGLTFInputNode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRGLTFInputNode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRGLTFInputNode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRGLTFInputNode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFInputNode, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFInputNode, "", "OVRGLTFInputNode");
