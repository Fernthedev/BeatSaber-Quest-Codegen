#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceOptions)
// Forward declare root types
namespace System::Diagnostics {
struct TraceOptions;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::TraceOptions);
// Type: System.Diagnostics::TraceOptions
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8945))
// CS Name: ::System.Diagnostics::TraceOptions
struct CORDL_TYPE TraceOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TraceOptions_Unwrapped
enum struct __TraceOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LogicalOperationStack = static_cast<int32_t>(0x1),
__E_DateTime = static_cast<int32_t>(0x2),
__E_Timestamp = static_cast<int32_t>(0x4),
__E_ProcessId = static_cast<int32_t>(0x8),
__E_ThreadId = static_cast<int32_t>(0x10),
__E_Callstack = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Diagnostics::TraceOptions const None;

/// @brief Field LogicalOperationStack value: static_cast<int32_t>(0x1)
static ::System::Diagnostics::TraceOptions const LogicalOperationStack;

/// @brief Field DateTime value: static_cast<int32_t>(0x2)
static ::System::Diagnostics::TraceOptions const DateTime;

/// @brief Field Timestamp value: static_cast<int32_t>(0x4)
static ::System::Diagnostics::TraceOptions const Timestamp;

/// @brief Field ProcessId value: static_cast<int32_t>(0x8)
static ::System::Diagnostics::TraceOptions const ProcessId;

/// @brief Field ThreadId value: static_cast<int32_t>(0x10)
static ::System::Diagnostics::TraceOptions const ThreadId;

/// @brief Field Callstack value: static_cast<int32_t>(0x20)
static ::System::Diagnostics::TraceOptions const Callstack;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TraceOptions_Unwrapped () const noexcept {
return std::bit_cast<__TraceOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TraceOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TraceOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TraceOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceOptions, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceOptions, "System.Diagnostics", "TraceOptions");
