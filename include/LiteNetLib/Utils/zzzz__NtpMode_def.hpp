#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NtpMode)
// Forward declare root types
namespace LiteNetLib::Utils {
struct NtpMode;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::Utils::NtpMode);
// Type: LiteNetLib.Utils::NtpMode
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14239))
// CS Name: ::LiteNetLib.Utils::NtpMode
struct CORDL_TYPE NtpMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NtpMode_Unwrapped
enum struct __NtpMode_Unwrapped : int32_t {
__E_Client = static_cast<int32_t>(0x3),
__E_Server = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Client value: static_cast<int32_t>(0x3)
static ::LiteNetLib::Utils::NtpMode const Client;

/// @brief Field Server value: static_cast<int32_t>(0x4)
static ::LiteNetLib::Utils::NtpMode const Server;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NtpMode_Unwrapped () const noexcept {
return std::bit_cast<__NtpMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NtpMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NtpMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NtpMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NtpMode, 0x4>, "Size mismatch!");

} // namespace end def LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpMode, "LiteNetLib.Utils", "NtpMode");
