#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessingState)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::ProcessingState);
// Type: Unity.IO.LowLevel.Unsafe::ProcessingState
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9988))
// CS Name: ::Unity.IO.LowLevel.Unsafe::ProcessingState
struct CORDL_TYPE ProcessingState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProcessingState_Unwrapped
enum struct __ProcessingState_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_InQueue = static_cast<int32_t>(0x1),
__E_Reading = static_cast<int32_t>(0x2),
__E_Completed = static_cast<int32_t>(0x3),
__E_Failed = static_cast<int32_t>(0x4),
__E_Canceled = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Unknown;

/// @brief Field InQueue value: static_cast<int32_t>(0x1)
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const InQueue;

/// @brief Field Reading value: static_cast<int32_t>(0x2)
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Reading;

/// @brief Field Completed value: static_cast<int32_t>(0x3)
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Completed;

/// @brief Field Failed value: static_cast<int32_t>(0x4)
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Failed;

/// @brief Field Canceled value: static_cast<int32_t>(0x5)
static ::Unity::IO::LowLevel::Unsafe::ProcessingState const Canceled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessingState_Unwrapped () const noexcept {
return std::bit_cast<__ProcessingState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProcessingState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ProcessingState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ProcessingState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::ProcessingState, 0x4>, "Size mismatch!");

} // namespace end def Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::ProcessingState, "Unity.IO.LowLevel.Unsafe", "ProcessingState");
