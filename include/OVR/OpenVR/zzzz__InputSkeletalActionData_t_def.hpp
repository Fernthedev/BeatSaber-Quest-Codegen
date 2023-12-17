#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSkeletalActionData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputSkeletalActionData_t);
// Type: OVR.OpenVR::InputSkeletalActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8723))
// CS Name: ::OVR.OpenVR::InputSkeletalActionData_t
struct CORDL_TYPE InputSkeletalActionData_t : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field bActive offset 0x0
 __declspec(property(get=__get_bActive, put=__set_bActive)) bool  bActive;

/// @brief Field activeOrigin offset 0x8
 __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin)) uint64_t  activeOrigin;

/// @brief Field boneCount offset 0x10
 __declspec(property(get=__get_boneCount, put=__set_boneCount)) uint32_t  boneCount;

constexpr void __set_bActive(bool  value) ;

constexpr bool& __get_bActive() ;

constexpr bool const& __get_bActive() const;

constexpr void __set_activeOrigin(uint64_t  value) ;

constexpr uint64_t& __get_activeOrigin() ;

constexpr uint64_t const& __get_activeOrigin() const;

constexpr void __set_boneCount(uint32_t  value) ;

constexpr uint32_t& __get_boneCount() ;

constexpr uint32_t const& __get_boneCount() const;

// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "boneCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputSkeletalActionData_t(bool  bActive, uint64_t  activeOrigin, uint32_t  boneCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputSkeletalActionData_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputSkeletalActionData_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputSkeletalActionData_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputSkeletalActionData_t, "OVR.OpenVR", "InputSkeletalActionData_t");
