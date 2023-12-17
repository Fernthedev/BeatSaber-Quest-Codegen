#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRSkeletalTransformSpace)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSkeletalTransformSpace;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRSkeletalTransformSpace);
// Type: OVR.OpenVR::EVRSkeletalTransformSpace
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8638))
// CS Name: ::OVR.OpenVR::EVRSkeletalTransformSpace
struct CORDL_TYPE EVRSkeletalTransformSpace : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRSkeletalTransformSpace_Unwrapped
enum struct __EVRSkeletalTransformSpace_Unwrapped : int32_t {
__E_Model = static_cast<int32_t>(0x0),
__E_Parent = static_cast<int32_t>(0x1),
__E_Additive = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Model value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRSkeletalTransformSpace const Model;

/// @brief Field Parent value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRSkeletalTransformSpace const Parent;

/// @brief Field Additive value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRSkeletalTransformSpace const Additive;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRSkeletalTransformSpace_Unwrapped () const noexcept {
return std::bit_cast<__EVRSkeletalTransformSpace_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRSkeletalTransformSpace(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRSkeletalTransformSpace(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRSkeletalTransformSpace()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRSkeletalTransformSpace, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSkeletalTransformSpace, "OVR.OpenVR", "EVRSkeletalTransformSpace");
