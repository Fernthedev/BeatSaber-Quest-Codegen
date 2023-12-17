#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRNode)
// Forward declare root types
namespace UnityEngine::XR {
struct XRNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::XRNode);
// Type: UnityEngine.XR::XRNode
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15614))
// CS Name: ::UnityEngine.XR::XRNode
struct CORDL_TYPE XRNode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRNode_Unwrapped
enum struct __XRNode_Unwrapped : int32_t {
__E_LeftEye = static_cast<int32_t>(0x0),
__E_RightEye = static_cast<int32_t>(0x1),
__E_CenterEye = static_cast<int32_t>(0x2),
__E_Head = static_cast<int32_t>(0x3),
__E_LeftHand = static_cast<int32_t>(0x4),
__E_RightHand = static_cast<int32_t>(0x5),
__E_GameController = static_cast<int32_t>(0x6),
__E_TrackingReference = static_cast<int32_t>(0x7),
__E_HardwareTracker = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LeftEye value: static_cast<int32_t>(0x0)
static ::UnityEngine::XR::XRNode const LeftEye;

/// @brief Field RightEye value: static_cast<int32_t>(0x1)
static ::UnityEngine::XR::XRNode const RightEye;

/// @brief Field CenterEye value: static_cast<int32_t>(0x2)
static ::UnityEngine::XR::XRNode const CenterEye;

/// @brief Field Head value: static_cast<int32_t>(0x3)
static ::UnityEngine::XR::XRNode const Head;

/// @brief Field LeftHand value: static_cast<int32_t>(0x4)
static ::UnityEngine::XR::XRNode const LeftHand;

/// @brief Field RightHand value: static_cast<int32_t>(0x5)
static ::UnityEngine::XR::XRNode const RightHand;

/// @brief Field GameController value: static_cast<int32_t>(0x6)
static ::UnityEngine::XR::XRNode const GameController;

/// @brief Field TrackingReference value: static_cast<int32_t>(0x7)
static ::UnityEngine::XR::XRNode const TrackingReference;

/// @brief Field HardwareTracker value: static_cast<int32_t>(0x8)
static ::UnityEngine::XR::XRNode const HardwareTracker;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XRNode_Unwrapped () const noexcept {
return std::bit_cast<__XRNode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XRNode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XRNode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XRNode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRNode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRNode, "UnityEngine.XR", "XRNode");
