#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NtpLeapIndicator)
// Forward declare root types
namespace LiteNetLib::Utils {
struct NtpLeapIndicator;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::Utils::NtpLeapIndicator);
// Type: LiteNetLib.Utils::NtpLeapIndicator
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14238))
// CS Name: ::LiteNetLib.Utils::NtpLeapIndicator
struct CORDL_TYPE NtpLeapIndicator : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NtpLeapIndicator_Unwrapped
enum struct __NtpLeapIndicator_Unwrapped : int32_t {
__E_NoWarning = static_cast<int32_t>(0x0),
__E_LastMinuteHas61Seconds = static_cast<int32_t>(0x1),
__E_LastMinuteHas59Seconds = static_cast<int32_t>(0x2),
__E_AlarmCondition = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoWarning value: static_cast<int32_t>(0x0)
static ::LiteNetLib::Utils::NtpLeapIndicator const NoWarning;

/// @brief Field LastMinuteHas61Seconds value: static_cast<int32_t>(0x1)
static ::LiteNetLib::Utils::NtpLeapIndicator const LastMinuteHas61Seconds;

/// @brief Field LastMinuteHas59Seconds value: static_cast<int32_t>(0x2)
static ::LiteNetLib::Utils::NtpLeapIndicator const LastMinuteHas59Seconds;

/// @brief Field AlarmCondition value: static_cast<int32_t>(0x3)
static ::LiteNetLib::Utils::NtpLeapIndicator const AlarmCondition;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NtpLeapIndicator_Unwrapped () const noexcept {
return std::bit_cast<__NtpLeapIndicator_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NtpLeapIndicator(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NtpLeapIndicator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NtpLeapIndicator()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NtpLeapIndicator, 0x4>, "Size mismatch!");

} // namespace end def LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpLeapIndicator, "LiteNetLib.Utils", "NtpLeapIndicator");
