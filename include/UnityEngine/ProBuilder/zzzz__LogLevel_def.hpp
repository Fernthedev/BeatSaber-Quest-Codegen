#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::LogLevel);
// Type: UnityEngine.ProBuilder::LogLevel
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12135))
// CS Name: ::UnityEngine.ProBuilder::LogLevel
struct CORDL_TYPE LogLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogLevel_Unwrapped
enum struct __LogLevel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x2),
__E_Info = static_cast<int32_t>(0x4),
__E_Default = static_cast<int32_t>(0x3),
__E_All = static_cast<int32_t>(0xff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::LogLevel const None;

/// @brief Field Error value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::LogLevel const Error;

/// @brief Field Warning value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::LogLevel const Warning;

/// @brief Field Info value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::LogLevel const Info;

/// @brief Field Default value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::LogLevel const Default;

/// @brief Field All value: static_cast<int32_t>(0xff)
static ::UnityEngine::ProBuilder::LogLevel const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevel_Unwrapped () const noexcept {
return std::bit_cast<__LogLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LogLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LogLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::LogLevel, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::LogLevel, "UnityEngine.ProBuilder", "LogLevel");
