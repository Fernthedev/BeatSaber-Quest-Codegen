#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EColorSpace)
// Forward declare root types
namespace OVR::OpenVR {
struct EColorSpace;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EColorSpace);
// Type: OVR.OpenVR::EColorSpace
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8582))
// CS Name: ::OVR.OpenVR::EColorSpace
struct CORDL_TYPE EColorSpace : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EColorSpace_Unwrapped
enum struct __EColorSpace_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_Gamma = static_cast<int32_t>(0x1),
__E_Linear = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Auto value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EColorSpace const Auto;

/// @brief Field Gamma value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EColorSpace const Gamma;

/// @brief Field Linear value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EColorSpace const Linear;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EColorSpace_Unwrapped () const noexcept {
return std::bit_cast<__EColorSpace_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EColorSpace(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EColorSpace(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EColorSpace()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EColorSpace, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EColorSpace, "OVR.OpenVR", "EColorSpace");
