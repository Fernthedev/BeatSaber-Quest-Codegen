#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessorArchitecture)
// Forward declare root types
namespace System::Reflection {
struct ProcessorArchitecture;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ProcessorArchitecture);
// Type: System.Reflection::ProcessorArchitecture
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3486))
// CS Name: ::System.Reflection::ProcessorArchitecture
struct CORDL_TYPE ProcessorArchitecture : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProcessorArchitecture_Unwrapped
enum struct __ProcessorArchitecture_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_MSIL = static_cast<int32_t>(0x1),
__E_X86 = static_cast<int32_t>(0x2),
__E_IA64 = static_cast<int32_t>(0x3),
__E_Amd64 = static_cast<int32_t>(0x4),
__E_Arm = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Reflection::ProcessorArchitecture const None;

/// @brief Field MSIL value: static_cast<int32_t>(0x1)
static ::System::Reflection::ProcessorArchitecture const MSIL;

/// @brief Field X86 value: static_cast<int32_t>(0x2)
static ::System::Reflection::ProcessorArchitecture const X86;

/// @brief Field IA64 value: static_cast<int32_t>(0x3)
static ::System::Reflection::ProcessorArchitecture const IA64;

/// @brief Field Amd64 value: static_cast<int32_t>(0x4)
static ::System::Reflection::ProcessorArchitecture const Amd64;

/// @brief Field Arm value: static_cast<int32_t>(0x5)
static ::System::Reflection::ProcessorArchitecture const Arm;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessorArchitecture_Unwrapped () const noexcept {
return std::bit_cast<__ProcessorArchitecture_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProcessorArchitecture(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ProcessorArchitecture(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ProcessorArchitecture()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ProcessorArchitecture, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ProcessorArchitecture, "System.Reflection", "ProcessorArchitecture");
