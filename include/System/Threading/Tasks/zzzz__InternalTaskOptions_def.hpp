#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalTaskOptions)
// Forward declare root types
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::InternalTaskOptions);
// Type: System.Threading.Tasks::InternalTaskOptions
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2791))
// CS Name: ::System.Threading.Tasks::InternalTaskOptions
struct CORDL_TYPE InternalTaskOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InternalTaskOptions_Unwrapped
enum struct __InternalTaskOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_InternalOptionsMask = static_cast<int32_t>(0xff00),
__E_ContinuationTask = static_cast<int32_t>(0x200),
__E_PromiseTask = static_cast<int32_t>(0x400),
__E_LazyCancellation = static_cast<int32_t>(0x1000),
__E_QueuedByRuntime = static_cast<int32_t>(0x2000),
__E_DoNotDispose = static_cast<int32_t>(0x4000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Threading::Tasks::InternalTaskOptions const None;

/// @brief Field InternalOptionsMask value: static_cast<int32_t>(0xff00)
static ::System::Threading::Tasks::InternalTaskOptions const InternalOptionsMask;

/// @brief Field ContinuationTask value: static_cast<int32_t>(0x200)
static ::System::Threading::Tasks::InternalTaskOptions const ContinuationTask;

/// @brief Field PromiseTask value: static_cast<int32_t>(0x400)
static ::System::Threading::Tasks::InternalTaskOptions const PromiseTask;

/// @brief Field LazyCancellation value: static_cast<int32_t>(0x1000)
static ::System::Threading::Tasks::InternalTaskOptions const LazyCancellation;

/// @brief Field QueuedByRuntime value: static_cast<int32_t>(0x2000)
static ::System::Threading::Tasks::InternalTaskOptions const QueuedByRuntime;

/// @brief Field DoNotDispose value: static_cast<int32_t>(0x4000)
static ::System::Threading::Tasks::InternalTaskOptions const DoNotDispose;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalTaskOptions_Unwrapped () const noexcept {
return std::bit_cast<__InternalTaskOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalTaskOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternalTaskOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternalTaskOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::InternalTaskOptions, 0x4>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::InternalTaskOptions, "System.Threading.Tasks", "InternalTaskOptions");
