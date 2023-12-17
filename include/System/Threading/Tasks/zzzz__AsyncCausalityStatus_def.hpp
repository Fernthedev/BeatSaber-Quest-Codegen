#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncCausalityStatus)
// Forward declare root types
namespace System::Threading::Tasks {
struct AsyncCausalityStatus;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::AsyncCausalityStatus);
// Type: System.Threading.Tasks::AsyncCausalityStatus
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2817))
// CS Name: ::System.Threading.Tasks::AsyncCausalityStatus
struct CORDL_TYPE AsyncCausalityStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AsyncCausalityStatus_Unwrapped
enum struct __AsyncCausalityStatus_Unwrapped : int32_t {
__E_Started = static_cast<int32_t>(0x0),
__E_Completed = static_cast<int32_t>(0x1),
__E_Canceled = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Started value: static_cast<int32_t>(0x0)
static ::System::Threading::Tasks::AsyncCausalityStatus const Started;

/// @brief Field Completed value: static_cast<int32_t>(0x1)
static ::System::Threading::Tasks::AsyncCausalityStatus const Completed;

/// @brief Field Canceled value: static_cast<int32_t>(0x2)
static ::System::Threading::Tasks::AsyncCausalityStatus const Canceled;

/// @brief Field Error value: static_cast<int32_t>(0x3)
static ::System::Threading::Tasks::AsyncCausalityStatus const Error;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AsyncCausalityStatus_Unwrapped () const noexcept {
return std::bit_cast<__AsyncCausalityStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AsyncCausalityStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncCausalityStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncCausalityStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::AsyncCausalityStatus, 0x4>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::AsyncCausalityStatus, "System.Threading.Tasks", "AsyncCausalityStatus");
