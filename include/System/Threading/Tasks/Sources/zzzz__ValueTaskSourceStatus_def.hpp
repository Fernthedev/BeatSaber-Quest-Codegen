#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTaskSourceStatus)
// Forward declare root types
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::Sources::ValueTaskSourceStatus);
// Type: System.Threading.Tasks.Sources::ValueTaskSourceStatus
namespace System::Threading::Tasks::Sources {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2822))
// CS Name: ::System.Threading.Tasks.Sources::ValueTaskSourceStatus
struct CORDL_TYPE ValueTaskSourceStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ValueTaskSourceStatus_Unwrapped
enum struct __ValueTaskSourceStatus_Unwrapped : int32_t {
__E_Pending = static_cast<int32_t>(0x0),
__E_Succeeded = static_cast<int32_t>(0x1),
__E_Faulted = static_cast<int32_t>(0x2),
__E_Canceled = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Pending value: static_cast<int32_t>(0x0)
static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Pending;

/// @brief Field Succeeded value: static_cast<int32_t>(0x1)
static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Succeeded;

/// @brief Field Faulted value: static_cast<int32_t>(0x2)
static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Faulted;

/// @brief Field Canceled value: static_cast<int32_t>(0x3)
static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Canceled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ValueTaskSourceStatus_Unwrapped () const noexcept {
return std::bit_cast<__ValueTaskSourceStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTaskSourceStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTaskSourceStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTaskSourceStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, 0x4>, "Size mismatch!");

} // namespace end def System::Threading::Tasks::Sources
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::ValueTaskSourceStatus, "System.Threading.Tasks.Sources", "ValueTaskSourceStatus");
