#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionLevel)
// Forward declare root types
namespace System::IO::Compression {
struct CompressionLevel;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::CompressionLevel);
// Type: System.IO.Compression::CompressionLevel
namespace System::IO::Compression {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9545))
// CS Name: ::System.IO.Compression::CompressionLevel
struct CORDL_TYPE CompressionLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionLevel_Unwrapped
enum struct __CompressionLevel_Unwrapped : int32_t {
__E_Optimal = static_cast<int32_t>(0x0),
__E_Fastest = static_cast<int32_t>(0x1),
__E_NoCompression = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Optimal value: static_cast<int32_t>(0x0)
static ::System::IO::Compression::CompressionLevel const Optimal;

/// @brief Field Fastest value: static_cast<int32_t>(0x1)
static ::System::IO::Compression::CompressionLevel const Fastest;

/// @brief Field NoCompression value: static_cast<int32_t>(0x2)
static ::System::IO::Compression::CompressionLevel const NoCompression;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionLevel_Unwrapped () const noexcept {
return std::bit_cast<__CompressionLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompressionLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CompressionLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CompressionLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::CompressionLevel, 0x4>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CompressionLevel, "System.IO.Compression", "CompressionLevel");
