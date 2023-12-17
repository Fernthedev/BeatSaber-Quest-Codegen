#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarMaskBodyPart)
// Forward declare root types
namespace UnityEngine {
struct AvatarMaskBodyPart;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AvatarMaskBodyPart);
// Type: UnityEngine::AvatarMaskBodyPart
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14855))
// CS Name: ::UnityEngine::AvatarMaskBodyPart
struct CORDL_TYPE AvatarMaskBodyPart : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AvatarMaskBodyPart_Unwrapped
enum struct __AvatarMaskBodyPart_Unwrapped : int32_t {
__E_Root = static_cast<int32_t>(0x0),
__E_Body = static_cast<int32_t>(0x1),
__E_Head = static_cast<int32_t>(0x2),
__E_LeftLeg = static_cast<int32_t>(0x3),
__E_RightLeg = static_cast<int32_t>(0x4),
__E_LeftArm = static_cast<int32_t>(0x5),
__E_RightArm = static_cast<int32_t>(0x6),
__E_LeftFingers = static_cast<int32_t>(0x7),
__E_RightFingers = static_cast<int32_t>(0x8),
__E_LeftFootIK = static_cast<int32_t>(0x9),
__E_RightFootIK = static_cast<int32_t>(0xa),
__E_LeftHandIK = static_cast<int32_t>(0xb),
__E_RightHandIK = static_cast<int32_t>(0xc),
__E_LastBodyPart = static_cast<int32_t>(0xd),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Root value: static_cast<int32_t>(0x0)
static ::UnityEngine::AvatarMaskBodyPart const Root;

/// @brief Field Body value: static_cast<int32_t>(0x1)
static ::UnityEngine::AvatarMaskBodyPart const Body;

/// @brief Field Head value: static_cast<int32_t>(0x2)
static ::UnityEngine::AvatarMaskBodyPart const Head;

/// @brief Field LeftLeg value: static_cast<int32_t>(0x3)
static ::UnityEngine::AvatarMaskBodyPart const LeftLeg;

/// @brief Field RightLeg value: static_cast<int32_t>(0x4)
static ::UnityEngine::AvatarMaskBodyPart const RightLeg;

/// @brief Field LeftArm value: static_cast<int32_t>(0x5)
static ::UnityEngine::AvatarMaskBodyPart const LeftArm;

/// @brief Field RightArm value: static_cast<int32_t>(0x6)
static ::UnityEngine::AvatarMaskBodyPart const RightArm;

/// @brief Field LeftFingers value: static_cast<int32_t>(0x7)
static ::UnityEngine::AvatarMaskBodyPart const LeftFingers;

/// @brief Field RightFingers value: static_cast<int32_t>(0x8)
static ::UnityEngine::AvatarMaskBodyPart const RightFingers;

/// @brief Field LeftFootIK value: static_cast<int32_t>(0x9)
static ::UnityEngine::AvatarMaskBodyPart const LeftFootIK;

/// @brief Field RightFootIK value: static_cast<int32_t>(0xa)
static ::UnityEngine::AvatarMaskBodyPart const RightFootIK;

/// @brief Field LeftHandIK value: static_cast<int32_t>(0xb)
static ::UnityEngine::AvatarMaskBodyPart const LeftHandIK;

/// @brief Field RightHandIK value: static_cast<int32_t>(0xc)
static ::UnityEngine::AvatarMaskBodyPart const RightHandIK;

/// @brief Field LastBodyPart value: static_cast<int32_t>(0xd)
static ::UnityEngine::AvatarMaskBodyPart const LastBodyPart;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AvatarMaskBodyPart_Unwrapped () const noexcept {
return std::bit_cast<__AvatarMaskBodyPart_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AvatarMaskBodyPart(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AvatarMaskBodyPart(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AvatarMaskBodyPart()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AvatarMaskBodyPart, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarMaskBodyPart, "UnityEngine", "AvatarMaskBodyPart");
