#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTaskSourceOnCompletedFlags)
// Forward declare root types
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags);
// Type: System.Threading.Tasks.Sources::ValueTaskSourceOnCompletedFlags
namespace System::Threading::Tasks::Sources {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2821))
// CS Name: ::System.Threading.Tasks.Sources::ValueTaskSourceOnCompletedFlags
struct CORDL_TYPE ValueTaskSourceOnCompletedFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ValueTaskSourceOnCompletedFlags_Unwrapped
enum struct __ValueTaskSourceOnCompletedFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_UseSchedulingContext = static_cast<int32_t>(0x1),
__E_FlowExecutionContext = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags const None;

/// @brief Field UseSchedulingContext value: static_cast<int32_t>(0x1)
static ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags const UseSchedulingContext;

/// @brief Field FlowExecutionContext value: static_cast<int32_t>(0x2)
static ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags const FlowExecutionContext;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ValueTaskSourceOnCompletedFlags_Unwrapped () const noexcept {
return std::bit_cast<__ValueTaskSourceOnCompletedFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTaskSourceOnCompletedFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTaskSourceOnCompletedFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTaskSourceOnCompletedFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Threading::Tasks::Sources
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags, "System.Threading.Tasks.Sources", "ValueTaskSourceOnCompletedFlags");
