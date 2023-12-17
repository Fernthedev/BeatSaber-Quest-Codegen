#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MethodImplAttributes)
// Forward declare root types
namespace System::Reflection {
struct MethodImplAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MethodImplAttributes);
// Type: System.Reflection::MethodImplAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3478))
// CS Name: ::System.Reflection::MethodImplAttributes
struct CORDL_TYPE MethodImplAttributes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MethodImplAttributes_Unwrapped
enum struct __MethodImplAttributes_Unwrapped : int32_t {
__E_CodeTypeMask = static_cast<int32_t>(0x3),
__E_IL = static_cast<int32_t>(0x0),
__E_Native = static_cast<int32_t>(0x1),
__E_OPTIL = static_cast<int32_t>(0x2),
__E_Runtime = static_cast<int32_t>(0x3),
__E_ManagedMask = static_cast<int32_t>(0x4),
__E_Unmanaged = static_cast<int32_t>(0x4),
__E_Managed = static_cast<int32_t>(0x0),
__E_ForwardRef = static_cast<int32_t>(0x10),
__E_PreserveSig = static_cast<int32_t>(0x80),
__E_InternalCall = static_cast<int32_t>(0x1000),
__E_Synchronized = static_cast<int32_t>(0x20),
__E_NoInlining = static_cast<int32_t>(0x8),
__E_AggressiveInlining = static_cast<int32_t>(0x100),
__E_NoOptimization = static_cast<int32_t>(0x40),
__E_MaxMethodImplVal = static_cast<int32_t>(0xffff),
__E_SecurityMitigations = static_cast<int32_t>(0x400),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field CodeTypeMask value: static_cast<int32_t>(0x3)
static ::System::Reflection::MethodImplAttributes const CodeTypeMask;

/// @brief Field IL value: static_cast<int32_t>(0x0)
static ::System::Reflection::MethodImplAttributes const IL;

/// @brief Field Native value: static_cast<int32_t>(0x1)
static ::System::Reflection::MethodImplAttributes const Native;

/// @brief Field OPTIL value: static_cast<int32_t>(0x2)
static ::System::Reflection::MethodImplAttributes const OPTIL;

/// @brief Field Runtime value: static_cast<int32_t>(0x3)
static ::System::Reflection::MethodImplAttributes const Runtime;

/// @brief Field ManagedMask value: static_cast<int32_t>(0x4)
static ::System::Reflection::MethodImplAttributes const ManagedMask;

/// @brief Field Unmanaged value: static_cast<int32_t>(0x4)
static ::System::Reflection::MethodImplAttributes const Unmanaged;

/// @brief Field Managed value: static_cast<int32_t>(0x0)
static ::System::Reflection::MethodImplAttributes const Managed;

/// @brief Field ForwardRef value: static_cast<int32_t>(0x10)
static ::System::Reflection::MethodImplAttributes const ForwardRef;

/// @brief Field PreserveSig value: static_cast<int32_t>(0x80)
static ::System::Reflection::MethodImplAttributes const PreserveSig;

/// @brief Field InternalCall value: static_cast<int32_t>(0x1000)
static ::System::Reflection::MethodImplAttributes const InternalCall;

/// @brief Field Synchronized value: static_cast<int32_t>(0x20)
static ::System::Reflection::MethodImplAttributes const Synchronized;

/// @brief Field NoInlining value: static_cast<int32_t>(0x8)
static ::System::Reflection::MethodImplAttributes const NoInlining;

/// @brief Field AggressiveInlining value: static_cast<int32_t>(0x100)
static ::System::Reflection::MethodImplAttributes const AggressiveInlining;

/// @brief Field NoOptimization value: static_cast<int32_t>(0x40)
static ::System::Reflection::MethodImplAttributes const NoOptimization;

/// @brief Field MaxMethodImplVal value: static_cast<int32_t>(0xffff)
static ::System::Reflection::MethodImplAttributes const MaxMethodImplVal;

/// @brief Field SecurityMitigations value: static_cast<int32_t>(0x400)
static ::System::Reflection::MethodImplAttributes const SecurityMitigations;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MethodImplAttributes_Unwrapped () const noexcept {
return std::bit_cast<__MethodImplAttributes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MethodImplAttributes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MethodImplAttributes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MethodImplAttributes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodImplAttributes, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodImplAttributes, "System.Reflection", "MethodImplAttributes");
