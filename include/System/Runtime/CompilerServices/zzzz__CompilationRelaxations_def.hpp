#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompilationRelaxations)
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct CompilationRelaxations;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::CompilationRelaxations);
// Type: System.Runtime.CompilerServices::CompilationRelaxations
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3413))
// CS Name: ::System.Runtime.CompilerServices::CompilationRelaxations
struct CORDL_TYPE CompilationRelaxations : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompilationRelaxations_Unwrapped
enum struct __CompilationRelaxations_Unwrapped : int32_t {
__E_NoStringInterning = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoStringInterning value: static_cast<int32_t>(0x8)
static ::System::Runtime::CompilerServices::CompilationRelaxations const NoStringInterning;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CompilationRelaxations_Unwrapped () const noexcept {
return std::bit_cast<__CompilationRelaxations_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompilationRelaxations(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CompilationRelaxations(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CompilationRelaxations()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CompilationRelaxations, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CompilationRelaxations, "System.Runtime.CompilerServices", "CompilationRelaxations");
