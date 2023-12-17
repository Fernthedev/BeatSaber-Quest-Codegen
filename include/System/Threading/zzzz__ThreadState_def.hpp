#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadState)
// Forward declare root types
namespace System::Threading {
struct ThreadState;
}
// Write type traits
MARK_VAL_T(::System::Threading::ThreadState);
// Type: System.Threading::ThreadState
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2672))
// CS Name: ::System.Threading::ThreadState
struct CORDL_TYPE ThreadState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThreadState_Unwrapped
enum struct __ThreadState_Unwrapped : int32_t {
__E_Running = static_cast<int32_t>(0x0),
__E_StopRequested = static_cast<int32_t>(0x1),
__E_SuspendRequested = static_cast<int32_t>(0x2),
__E_Background = static_cast<int32_t>(0x4),
__E_Unstarted = static_cast<int32_t>(0x8),
__E_Stopped = static_cast<int32_t>(0x10),
__E_WaitSleepJoin = static_cast<int32_t>(0x20),
__E_Suspended = static_cast<int32_t>(0x40),
__E_AbortRequested = static_cast<int32_t>(0x80),
__E_Aborted = static_cast<int32_t>(0x100),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Running value: static_cast<int32_t>(0x0)
static ::System::Threading::ThreadState const Running;

/// @brief Field StopRequested value: static_cast<int32_t>(0x1)
static ::System::Threading::ThreadState const StopRequested;

/// @brief Field SuspendRequested value: static_cast<int32_t>(0x2)
static ::System::Threading::ThreadState const SuspendRequested;

/// @brief Field Background value: static_cast<int32_t>(0x4)
static ::System::Threading::ThreadState const Background;

/// @brief Field Unstarted value: static_cast<int32_t>(0x8)
static ::System::Threading::ThreadState const Unstarted;

/// @brief Field Stopped value: static_cast<int32_t>(0x10)
static ::System::Threading::ThreadState const Stopped;

/// @brief Field WaitSleepJoin value: static_cast<int32_t>(0x20)
static ::System::Threading::ThreadState const WaitSleepJoin;

/// @brief Field Suspended value: static_cast<int32_t>(0x40)
static ::System::Threading::ThreadState const Suspended;

/// @brief Field AbortRequested value: static_cast<int32_t>(0x80)
static ::System::Threading::ThreadState const AbortRequested;

/// @brief Field Aborted value: static_cast<int32_t>(0x100)
static ::System::Threading::ThreadState const Aborted;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ThreadState_Unwrapped () const noexcept {
return std::bit_cast<__ThreadState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ThreadState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ThreadState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ThreadState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadState, 0x4>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadState, "System.Threading", "ThreadState");
