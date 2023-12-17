#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComInterfaceType)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct ComInterfaceType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::ComInterfaceType);
// Type: System.Runtime.InteropServices::ComInterfaceType
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3314))
// CS Name: ::System.Runtime.InteropServices::ComInterfaceType
struct CORDL_TYPE ComInterfaceType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ComInterfaceType_Unwrapped
enum struct __ComInterfaceType_Unwrapped : int32_t {
__E_InterfaceIsDual = static_cast<int32_t>(0x0),
__E_InterfaceIsIUnknown = static_cast<int32_t>(0x1),
__E_InterfaceIsIDispatch = static_cast<int32_t>(0x2),
__E_InterfaceIsIInspectable = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field InterfaceIsDual value: static_cast<int32_t>(0x0)
static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsDual;

/// @brief Field InterfaceIsIUnknown value: static_cast<int32_t>(0x1)
static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIUnknown;

/// @brief Field InterfaceIsIDispatch value: static_cast<int32_t>(0x2)
static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIDispatch;

/// @brief Field InterfaceIsIInspectable value: static_cast<int32_t>(0x3)
static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIInspectable;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ComInterfaceType_Unwrapped () const noexcept {
return std::bit_cast<__ComInterfaceType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ComInterfaceType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ComInterfaceType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ComInterfaceType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ComInterfaceType, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComInterfaceType, "System.Runtime.InteropServices", "ComInterfaceType");
