#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkerFlags)
// Forward declare root types
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::MarkerFlags);
// Type: Unity.Profiling.LowLevel::MarkerFlags
namespace Unity::Profiling::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9967))
// CS Name: ::Unity.Profiling.LowLevel::MarkerFlags
struct CORDL_TYPE MarkerFlags : public ::bs_hook::EnumTypeWrapper<0x2> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __MarkerFlags_Unwrapped
enum struct __MarkerFlags_Unwrapped : uint16_t {
__E_Default = static_cast<uint16_t>(0x0u),
__E_Script = static_cast<uint16_t>(0x2u),
__E_ScriptInvoke = static_cast<uint16_t>(0x20u),
__E_ScriptDeepProfiler = static_cast<uint16_t>(0x40u),
__E_AvailabilityEditor = static_cast<uint16_t>(0x4u),
__E_AvailabilityNonDevelopment = static_cast<uint16_t>(0x8u),
__E_Warning = static_cast<uint16_t>(0x10u),
__E_Counter = static_cast<uint16_t>(0x80u),
__E_SampleGPU = static_cast<uint16_t>(0x100u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field Default value: static_cast<uint16_t>(0x0u)
static ::Unity::Profiling::LowLevel::MarkerFlags const Default;

/// @brief Field Script value: static_cast<uint16_t>(0x2u)
static ::Unity::Profiling::LowLevel::MarkerFlags const Script;

/// @brief Field ScriptInvoke value: static_cast<uint16_t>(0x20u)
static ::Unity::Profiling::LowLevel::MarkerFlags const ScriptInvoke;

/// @brief Field ScriptDeepProfiler value: static_cast<uint16_t>(0x40u)
static ::Unity::Profiling::LowLevel::MarkerFlags const ScriptDeepProfiler;

/// @brief Field AvailabilityEditor value: static_cast<uint16_t>(0x4u)
static ::Unity::Profiling::LowLevel::MarkerFlags const AvailabilityEditor;

/// @brief Field AvailabilityNonDevelopment value: static_cast<uint16_t>(0x8u)
static ::Unity::Profiling::LowLevel::MarkerFlags const AvailabilityNonDevelopment;

/// @brief Field Warning value: static_cast<uint16_t>(0x10u)
static ::Unity::Profiling::LowLevel::MarkerFlags const Warning;

/// @brief Field Counter value: static_cast<uint16_t>(0x80u)
static ::Unity::Profiling::LowLevel::MarkerFlags const Counter;

/// @brief Field SampleGPU value: static_cast<uint16_t>(0x100u)
static ::Unity::Profiling::LowLevel::MarkerFlags const SampleGPU;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint16_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MarkerFlags_Unwrapped () const noexcept {
return std::bit_cast<__MarkerFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x2>::instance);
}

constexpr void __set_value__(uint16_t  value) ;

constexpr uint16_t& __get_value__() ;

constexpr uint16_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr MarkerFlags(uint16_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MarkerFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MarkerFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::MarkerFlags, 0x2>, "Size mismatch!");

} // namespace end def Unity::Profiling::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::MarkerFlags, "Unity.Profiling.LowLevel", "MarkerFlags");
