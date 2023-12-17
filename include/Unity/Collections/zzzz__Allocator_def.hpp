#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator)
// Forward declare root types
namespace Unity::Collections {
struct Allocator;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Allocator);
// Type: Unity.Collections::Allocator
namespace Unity::Collections {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10003))
// CS Name: ::Unity.Collections::Allocator
struct CORDL_TYPE Allocator : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Allocator_Unwrapped
enum struct __Allocator_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x1),
__E_Temp = static_cast<int32_t>(0x2),
__E_TempJob = static_cast<int32_t>(0x3),
__E_Persistent = static_cast<int32_t>(0x4),
__E_AudioKernel = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Invalid value: static_cast<int32_t>(0x0)
static ::Unity::Collections::Allocator const Invalid;

/// @brief Field None value: static_cast<int32_t>(0x1)
static ::Unity::Collections::Allocator const None;

/// @brief Field Temp value: static_cast<int32_t>(0x2)
static ::Unity::Collections::Allocator const Temp;

/// @brief Field TempJob value: static_cast<int32_t>(0x3)
static ::Unity::Collections::Allocator const TempJob;

/// @brief Field Persistent value: static_cast<int32_t>(0x4)
static ::Unity::Collections::Allocator const Persistent;

/// @brief Field AudioKernel value: static_cast<int32_t>(0x5)
static ::Unity::Collections::Allocator const AudioKernel;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Allocator_Unwrapped () const noexcept {
return std::bit_cast<__Allocator_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Allocator(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Allocator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Allocator()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Allocator, 0x4>, "Size mismatch!");

} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Allocator, "Unity.Collections", "Allocator");
