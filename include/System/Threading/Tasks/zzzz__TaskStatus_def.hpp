#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskStatus)
// Forward declare root types
namespace System::Threading::Tasks {
struct TaskStatus;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::TaskStatus);
// Type: System.Threading.Tasks::TaskStatus
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2780))
// CS Name: ::System.Threading.Tasks::TaskStatus
struct CORDL_TYPE TaskStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TaskStatus_Unwrapped
enum struct __TaskStatus_Unwrapped : int32_t {
__E_Created = static_cast<int32_t>(0x0),
__E_WaitingForActivation = static_cast<int32_t>(0x1),
__E_WaitingToRun = static_cast<int32_t>(0x2),
__E_Running = static_cast<int32_t>(0x3),
__E_WaitingForChildrenToComplete = static_cast<int32_t>(0x4),
__E_RanToCompletion = static_cast<int32_t>(0x5),
__E_Canceled = static_cast<int32_t>(0x6),
__E_Faulted = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Created value: static_cast<int32_t>(0x0)
static ::System::Threading::Tasks::TaskStatus const Created;

/// @brief Field WaitingForActivation value: static_cast<int32_t>(0x1)
static ::System::Threading::Tasks::TaskStatus const WaitingForActivation;

/// @brief Field WaitingToRun value: static_cast<int32_t>(0x2)
static ::System::Threading::Tasks::TaskStatus const WaitingToRun;

/// @brief Field Running value: static_cast<int32_t>(0x3)
static ::System::Threading::Tasks::TaskStatus const Running;

/// @brief Field WaitingForChildrenToComplete value: static_cast<int32_t>(0x4)
static ::System::Threading::Tasks::TaskStatus const WaitingForChildrenToComplete;

/// @brief Field RanToCompletion value: static_cast<int32_t>(0x5)
static ::System::Threading::Tasks::TaskStatus const RanToCompletion;

/// @brief Field Canceled value: static_cast<int32_t>(0x6)
static ::System::Threading::Tasks::TaskStatus const Canceled;

/// @brief Field Faulted value: static_cast<int32_t>(0x7)
static ::System::Threading::Tasks::TaskStatus const Faulted;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TaskStatus_Unwrapped () const noexcept {
return std::bit_cast<__TaskStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TaskStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TaskStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TaskStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskStatus, 0x4>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskStatus, "System.Threading.Tasks", "TaskStatus");
