#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FullBodyBipedChain)
// Forward declare root types
namespace RootMotion::FinalIK {
struct FullBodyBipedChain;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::FullBodyBipedChain);
// Type: RootMotion.FinalIK::FullBodyBipedChain
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12572))
// CS Name: ::RootMotion.FinalIK::FullBodyBipedChain
struct CORDL_TYPE FullBodyBipedChain : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FullBodyBipedChain_Unwrapped
enum struct __FullBodyBipedChain_Unwrapped : int32_t {
__E_LeftArm = static_cast<int32_t>(0x0),
__E_RightArm = static_cast<int32_t>(0x1),
__E_LeftLeg = static_cast<int32_t>(0x2),
__E_RightLeg = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LeftArm value: static_cast<int32_t>(0x0)
static ::RootMotion::FinalIK::FullBodyBipedChain const LeftArm;

/// @brief Field RightArm value: static_cast<int32_t>(0x1)
static ::RootMotion::FinalIK::FullBodyBipedChain const RightArm;

/// @brief Field LeftLeg value: static_cast<int32_t>(0x2)
static ::RootMotion::FinalIK::FullBodyBipedChain const LeftLeg;

/// @brief Field RightLeg value: static_cast<int32_t>(0x3)
static ::RootMotion::FinalIK::FullBodyBipedChain const RightLeg;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FullBodyBipedChain_Unwrapped () const noexcept {
return std::bit_cast<__FullBodyBipedChain_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FullBodyBipedChain(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FullBodyBipedChain(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FullBodyBipedChain()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FullBodyBipedChain, 0x4>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FullBodyBipedChain, "RootMotion.FinalIK", "FullBodyBipedChain");
