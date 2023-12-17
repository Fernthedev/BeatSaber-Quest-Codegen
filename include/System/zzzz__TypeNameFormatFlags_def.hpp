#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNameFormatFlags)
// Forward declare root types
namespace System {
struct TypeNameFormatFlags;
}
// Write type traits
MARK_VAL_T(::System::TypeNameFormatFlags);
// Type: System::TypeNameFormatFlags
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2563))
// CS Name: ::System::TypeNameFormatFlags
struct CORDL_TYPE TypeNameFormatFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TypeNameFormatFlags_Unwrapped
enum struct __TypeNameFormatFlags_Unwrapped : int32_t {
__E_FormatBasic = static_cast<int32_t>(0x0),
__E_FormatNamespace = static_cast<int32_t>(0x1),
__E_FormatFullInst = static_cast<int32_t>(0x2),
__E_FormatAssembly = static_cast<int32_t>(0x4),
__E_FormatSignature = static_cast<int32_t>(0x8),
__E_FormatNoVersion = static_cast<int32_t>(0x10),
__E_FormatAngleBrackets = static_cast<int32_t>(0x40),
__E_FormatStubInfo = static_cast<int32_t>(0x80),
__E_FormatGenericParam = static_cast<int32_t>(0x100),
__E_FormatSerialization = static_cast<int32_t>(0x103),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FormatBasic value: static_cast<int32_t>(0x0)
static ::System::TypeNameFormatFlags const FormatBasic;

/// @brief Field FormatNamespace value: static_cast<int32_t>(0x1)
static ::System::TypeNameFormatFlags const FormatNamespace;

/// @brief Field FormatFullInst value: static_cast<int32_t>(0x2)
static ::System::TypeNameFormatFlags const FormatFullInst;

/// @brief Field FormatAssembly value: static_cast<int32_t>(0x4)
static ::System::TypeNameFormatFlags const FormatAssembly;

/// @brief Field FormatSignature value: static_cast<int32_t>(0x8)
static ::System::TypeNameFormatFlags const FormatSignature;

/// @brief Field FormatNoVersion value: static_cast<int32_t>(0x10)
static ::System::TypeNameFormatFlags const FormatNoVersion;

/// @brief Field FormatAngleBrackets value: static_cast<int32_t>(0x40)
static ::System::TypeNameFormatFlags const FormatAngleBrackets;

/// @brief Field FormatStubInfo value: static_cast<int32_t>(0x80)
static ::System::TypeNameFormatFlags const FormatStubInfo;

/// @brief Field FormatGenericParam value: static_cast<int32_t>(0x100)
static ::System::TypeNameFormatFlags const FormatGenericParam;

/// @brief Field FormatSerialization value: static_cast<int32_t>(0x103)
static ::System::TypeNameFormatFlags const FormatSerialization;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeNameFormatFlags_Unwrapped () const noexcept {
return std::bit_cast<__TypeNameFormatFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeNameFormatFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TypeNameFormatFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TypeNameFormatFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeNameFormatFlags, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNameFormatFlags, "System", "TypeNameFormatFlags");
