#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRActiveActionSet_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRActiveActionSet_t);
// Type: OVR.OpenVR::VRActiveActionSet_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8725))
// CS Name: ::OVR.OpenVR::VRActiveActionSet_t
struct CORDL_TYPE VRActiveActionSet_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ulActionSet offset 0x0
 __declspec(property(get=__get_ulActionSet, put=__set_ulActionSet)) uint64_t  ulActionSet;

/// @brief Field ulRestrictedToDevice offset 0x8
 __declspec(property(get=__get_ulRestrictedToDevice, put=__set_ulRestrictedToDevice)) uint64_t  ulRestrictedToDevice;

/// @brief Field ulSecondaryActionSet offset 0x10
 __declspec(property(get=__get_ulSecondaryActionSet, put=__set_ulSecondaryActionSet)) uint64_t  ulSecondaryActionSet;

/// @brief Field unPadding offset 0x18
 __declspec(property(get=__get_unPadding, put=__set_unPadding)) uint32_t  unPadding;

/// @brief Field nPriority offset 0x1c
 __declspec(property(get=__get_nPriority, put=__set_nPriority)) int32_t  nPriority;

constexpr void __set_ulActionSet(uint64_t  value) ;

constexpr uint64_t& __get_ulActionSet() ;

constexpr uint64_t const& __get_ulActionSet() const;

constexpr void __set_ulRestrictedToDevice(uint64_t  value) ;

constexpr uint64_t& __get_ulRestrictedToDevice() ;

constexpr uint64_t const& __get_ulRestrictedToDevice() const;

constexpr void __set_ulSecondaryActionSet(uint64_t  value) ;

constexpr uint64_t& __get_ulSecondaryActionSet() ;

constexpr uint64_t const& __get_ulSecondaryActionSet() const;

constexpr void __set_unPadding(uint32_t  value) ;

constexpr uint32_t& __get_unPadding() ;

constexpr uint32_t const& __get_unPadding() const;

constexpr void __set_nPriority(int32_t  value) ;

constexpr int32_t& __get_nPriority() ;

constexpr int32_t const& __get_nPriority() const;

// Ctor Parameters [CppParam { name: "ulActionSet", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulRestrictedToDevice", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulSecondaryActionSet", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "unPadding", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nPriority", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRActiveActionSet_t(uint64_t  ulActionSet, uint64_t  ulRestrictedToDevice, uint64_t  ulSecondaryActionSet, uint32_t  unPadding, int32_t  nPriority) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRActiveActionSet_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRActiveActionSet_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRActiveActionSet_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRActiveActionSet_t, "OVR.OpenVR", "VRActiveActionSet_t");
