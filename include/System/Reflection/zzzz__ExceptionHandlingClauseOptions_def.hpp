#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionHandlingClauseOptions)
// Forward declare root types
namespace System::Reflection {
struct ExceptionHandlingClauseOptions;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ExceptionHandlingClauseOptions);
// Type: System.Reflection::ExceptionHandlingClauseOptions
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3467))
// CS Name: ::System.Reflection::ExceptionHandlingClauseOptions
struct CORDL_TYPE ExceptionHandlingClauseOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExceptionHandlingClauseOptions_Unwrapped
enum struct __ExceptionHandlingClauseOptions_Unwrapped : int32_t {
__E_Clause = static_cast<int32_t>(0x0),
__E_Filter = static_cast<int32_t>(0x1),
__E_Finally = static_cast<int32_t>(0x2),
__E_Fault = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Clause value: static_cast<int32_t>(0x0)
static ::System::Reflection::ExceptionHandlingClauseOptions const Clause;

/// @brief Field Filter value: static_cast<int32_t>(0x1)
static ::System::Reflection::ExceptionHandlingClauseOptions const Filter;

/// @brief Field Finally value: static_cast<int32_t>(0x2)
static ::System::Reflection::ExceptionHandlingClauseOptions const Finally;

/// @brief Field Fault value: static_cast<int32_t>(0x4)
static ::System::Reflection::ExceptionHandlingClauseOptions const Fault;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ExceptionHandlingClauseOptions_Unwrapped () const noexcept {
return std::bit_cast<__ExceptionHandlingClauseOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExceptionHandlingClauseOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ExceptionHandlingClauseOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ExceptionHandlingClauseOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ExceptionHandlingClauseOptions, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ExceptionHandlingClauseOptions, "System.Reflection", "ExceptionHandlingClauseOptions");
