#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceLevel)
// Forward declare root types
namespace System::Diagnostics {
struct TraceLevel;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::TraceLevel);
// Type: System.Diagnostics::TraceLevel
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8942))
// CS Name: ::System.Diagnostics::TraceLevel
struct CORDL_TYPE TraceLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TraceLevel_Unwrapped
enum struct __TraceLevel_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x2),
__E_Info = static_cast<int32_t>(0x3),
__E_Verbose = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Off value: static_cast<int32_t>(0x0)
static ::System::Diagnostics::TraceLevel const Off;

/// @brief Field Error value: static_cast<int32_t>(0x1)
static ::System::Diagnostics::TraceLevel const Error;

/// @brief Field Warning value: static_cast<int32_t>(0x2)
static ::System::Diagnostics::TraceLevel const Warning;

/// @brief Field Info value: static_cast<int32_t>(0x3)
static ::System::Diagnostics::TraceLevel const Info;

/// @brief Field Verbose value: static_cast<int32_t>(0x4)
static ::System::Diagnostics::TraceLevel const Verbose;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TraceLevel_Unwrapped () const noexcept {
return std::bit_cast<__TraceLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TraceLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TraceLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TraceLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceLevel, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceLevel, "System.Diagnostics", "TraceLevel");
