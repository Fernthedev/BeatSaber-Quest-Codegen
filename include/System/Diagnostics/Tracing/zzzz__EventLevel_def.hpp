#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventLevel)
// Forward declare root types
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::Tracing::EventLevel);
// Type: System.Diagnostics.Tracing::EventLevel
namespace System::Diagnostics::Tracing {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3743))
// CS Name: ::System.Diagnostics.Tracing::EventLevel
struct CORDL_TYPE EventLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EventLevel_Unwrapped
enum struct __EventLevel_Unwrapped : int32_t {
__E_LogAlways = static_cast<int32_t>(0x0),
__E_Critical = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x2),
__E_Warning = static_cast<int32_t>(0x3),
__E_Informational = static_cast<int32_t>(0x4),
__E_Verbose = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LogAlways value: static_cast<int32_t>(0x0)
static ::System::Diagnostics::Tracing::EventLevel const LogAlways;

/// @brief Field Critical value: static_cast<int32_t>(0x1)
static ::System::Diagnostics::Tracing::EventLevel const Critical;

/// @brief Field Error value: static_cast<int32_t>(0x2)
static ::System::Diagnostics::Tracing::EventLevel const Error;

/// @brief Field Warning value: static_cast<int32_t>(0x3)
static ::System::Diagnostics::Tracing::EventLevel const Warning;

/// @brief Field Informational value: static_cast<int32_t>(0x4)
static ::System::Diagnostics::Tracing::EventLevel const Informational;

/// @brief Field Verbose value: static_cast<int32_t>(0x5)
static ::System::Diagnostics::Tracing::EventLevel const Verbose;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EventLevel_Unwrapped () const noexcept {
return std::bit_cast<__EventLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EventLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EventLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventLevel, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventLevel, "System.Diagnostics.Tracing", "EventLevel");
