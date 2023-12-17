#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PInvokeAttributes)
// Forward declare root types
namespace System::Reflection {
struct PInvokeAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::PInvokeAttributes);
// Type: System.Reflection::PInvokeAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3508))
// CS Name: ::System.Reflection::PInvokeAttributes
struct CORDL_TYPE PInvokeAttributes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PInvokeAttributes_Unwrapped
enum struct __PInvokeAttributes_Unwrapped : int32_t {
__E_NoMangle = static_cast<int32_t>(0x1),
__E_CharSetMask = static_cast<int32_t>(0x6),
__E_CharSetNotSpec = static_cast<int32_t>(0x0),
__E_CharSetAnsi = static_cast<int32_t>(0x2),
__E_CharSetUnicode = static_cast<int32_t>(0x4),
__E_CharSetAuto = static_cast<int32_t>(0x6),
__E_BestFitUseAssem = static_cast<int32_t>(0x0),
__E_BestFitEnabled = static_cast<int32_t>(0x10),
__E_BestFitDisabled = static_cast<int32_t>(0x20),
__E_BestFitMask = static_cast<int32_t>(0x30),
__E_ThrowOnUnmappableCharUseAssem = static_cast<int32_t>(0x0),
__E_ThrowOnUnmappableCharEnabled = static_cast<int32_t>(0x1000),
__E_ThrowOnUnmappableCharDisabled = static_cast<int32_t>(0x2000),
__E_ThrowOnUnmappableCharMask = static_cast<int32_t>(0x3000),
__E_SupportsLastError = static_cast<int32_t>(0x40),
__E_CallConvMask = static_cast<int32_t>(0x700),
__E_CallConvWinapi = static_cast<int32_t>(0x100),
__E_CallConvCdecl = static_cast<int32_t>(0x200),
__E_CallConvStdcall = static_cast<int32_t>(0x300),
__E_CallConvThiscall = static_cast<int32_t>(0x400),
__E_CallConvFastcall = static_cast<int32_t>(0x500),
__E_MaxValue = static_cast<int32_t>(0xffff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoMangle value: static_cast<int32_t>(0x1)
static ::System::Reflection::PInvokeAttributes const NoMangle;

/// @brief Field CharSetMask value: static_cast<int32_t>(0x6)
static ::System::Reflection::PInvokeAttributes const CharSetMask;

/// @brief Field CharSetNotSpec value: static_cast<int32_t>(0x0)
static ::System::Reflection::PInvokeAttributes const CharSetNotSpec;

/// @brief Field CharSetAnsi value: static_cast<int32_t>(0x2)
static ::System::Reflection::PInvokeAttributes const CharSetAnsi;

/// @brief Field CharSetUnicode value: static_cast<int32_t>(0x4)
static ::System::Reflection::PInvokeAttributes const CharSetUnicode;

/// @brief Field CharSetAuto value: static_cast<int32_t>(0x6)
static ::System::Reflection::PInvokeAttributes const CharSetAuto;

/// @brief Field BestFitUseAssem value: static_cast<int32_t>(0x0)
static ::System::Reflection::PInvokeAttributes const BestFitUseAssem;

/// @brief Field BestFitEnabled value: static_cast<int32_t>(0x10)
static ::System::Reflection::PInvokeAttributes const BestFitEnabled;

/// @brief Field BestFitDisabled value: static_cast<int32_t>(0x20)
static ::System::Reflection::PInvokeAttributes const BestFitDisabled;

/// @brief Field BestFitMask value: static_cast<int32_t>(0x30)
static ::System::Reflection::PInvokeAttributes const BestFitMask;

/// @brief Field ThrowOnUnmappableCharUseAssem value: static_cast<int32_t>(0x0)
static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharUseAssem;

/// @brief Field ThrowOnUnmappableCharEnabled value: static_cast<int32_t>(0x1000)
static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharEnabled;

/// @brief Field ThrowOnUnmappableCharDisabled value: static_cast<int32_t>(0x2000)
static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharDisabled;

/// @brief Field ThrowOnUnmappableCharMask value: static_cast<int32_t>(0x3000)
static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharMask;

/// @brief Field SupportsLastError value: static_cast<int32_t>(0x40)
static ::System::Reflection::PInvokeAttributes const SupportsLastError;

/// @brief Field CallConvMask value: static_cast<int32_t>(0x700)
static ::System::Reflection::PInvokeAttributes const CallConvMask;

/// @brief Field CallConvWinapi value: static_cast<int32_t>(0x100)
static ::System::Reflection::PInvokeAttributes const CallConvWinapi;

/// @brief Field CallConvCdecl value: static_cast<int32_t>(0x200)
static ::System::Reflection::PInvokeAttributes const CallConvCdecl;

/// @brief Field CallConvStdcall value: static_cast<int32_t>(0x300)
static ::System::Reflection::PInvokeAttributes const CallConvStdcall;

/// @brief Field CallConvThiscall value: static_cast<int32_t>(0x400)
static ::System::Reflection::PInvokeAttributes const CallConvThiscall;

/// @brief Field CallConvFastcall value: static_cast<int32_t>(0x500)
static ::System::Reflection::PInvokeAttributes const CallConvFastcall;

/// @brief Field MaxValue value: static_cast<int32_t>(0xffff)
static ::System::Reflection::PInvokeAttributes const MaxValue;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PInvokeAttributes_Unwrapped () const noexcept {
return std::bit_cast<__PInvokeAttributes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PInvokeAttributes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PInvokeAttributes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PInvokeAttributes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::PInvokeAttributes, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PInvokeAttributes, "System.Reflection", "PInvokeAttributes");
