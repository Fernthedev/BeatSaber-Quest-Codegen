#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TEXTURE_DEVICE)
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::TEXTURE_DEVICE);
// Type: LIV.SDK.Unity::TEXTURE_DEVICE
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15105))
// CS Name: ::LIV.SDK.Unity::TEXTURE_DEVICE
struct CORDL_TYPE TEXTURE_DEVICE : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __TEXTURE_DEVICE_Unwrapped
enum struct __TEXTURE_DEVICE_Unwrapped : uint32_t {
__E_UNDEFINED = static_cast<uint32_t>(0x3020100u),
__E_RAW = static_cast<uint32_t>(0x4030201u),
__E_DIRECTX = static_cast<uint32_t>(0x5040302u),
__E_OPENGL = static_cast<uint32_t>(0x50403u),
__E_VULKAN = static_cast<uint32_t>(0x1000504u),
__E_METAL = static_cast<uint32_t>(0x2010005u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field UNDEFINED value: static_cast<uint32_t>(0x3020100u)
static ::LIV::SDK::Unity::TEXTURE_DEVICE const UNDEFINED;

/// @brief Field RAW value: static_cast<uint32_t>(0x4030201u)
static ::LIV::SDK::Unity::TEXTURE_DEVICE const RAW;

/// @brief Field DIRECTX value: static_cast<uint32_t>(0x5040302u)
static ::LIV::SDK::Unity::TEXTURE_DEVICE const DIRECTX;

/// @brief Field OPENGL value: static_cast<uint32_t>(0x50403u)
static ::LIV::SDK::Unity::TEXTURE_DEVICE const OPENGL;

/// @brief Field VULKAN value: static_cast<uint32_t>(0x1000504u)
static ::LIV::SDK::Unity::TEXTURE_DEVICE const VULKAN;

/// @brief Field METAL value: static_cast<uint32_t>(0x2010005u)
static ::LIV::SDK::Unity::TEXTURE_DEVICE const METAL;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TEXTURE_DEVICE_Unwrapped () const noexcept {
return std::bit_cast<__TEXTURE_DEVICE_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TEXTURE_DEVICE(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TEXTURE_DEVICE(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TEXTURE_DEVICE()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::TEXTURE_DEVICE, 0x4>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_DEVICE, "LIV.SDK.Unity", "TEXTURE_DEVICE");
