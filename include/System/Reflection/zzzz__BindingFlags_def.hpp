#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingFlags)
// Forward declare root types
namespace System::Reflection {
struct BindingFlags;
}
// Write type traits
MARK_VAL_T(::System::Reflection::BindingFlags);
// Type: System.Reflection::BindingFlags
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3459))
// CS Name: ::System.Reflection::BindingFlags
struct CORDL_TYPE BindingFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BindingFlags_Unwrapped
enum struct __BindingFlags_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_IgnoreCase = static_cast<int32_t>(0x1),
__E_DeclaredOnly = static_cast<int32_t>(0x2),
__E_Instance = static_cast<int32_t>(0x4),
__E_Static = static_cast<int32_t>(0x8),
__E_Public = static_cast<int32_t>(0x10),
__E_NonPublic = static_cast<int32_t>(0x20),
__E_FlattenHierarchy = static_cast<int32_t>(0x40),
__E_InvokeMethod = static_cast<int32_t>(0x100),
__E_CreateInstance = static_cast<int32_t>(0x200),
__E_GetField = static_cast<int32_t>(0x400),
__E_SetField = static_cast<int32_t>(0x800),
__E_GetProperty = static_cast<int32_t>(0x1000),
__E_SetProperty = static_cast<int32_t>(0x2000),
__E_PutDispProperty = static_cast<int32_t>(0x4000),
__E_PutRefDispProperty = static_cast<int32_t>(0x8000),
__E_ExactBinding = static_cast<int32_t>(0x10000),
__E_SuppressChangeType = static_cast<int32_t>(0x20000),
__E_OptionalParamBinding = static_cast<int32_t>(0x40000),
__E_IgnoreReturn = static_cast<int32_t>(0x1000000),
__E_DoNotWrapExceptions = static_cast<int32_t>(0x2000000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Default value: static_cast<int32_t>(0x0)
static ::System::Reflection::BindingFlags const Default;

/// @brief Field IgnoreCase value: static_cast<int32_t>(0x1)
static ::System::Reflection::BindingFlags const IgnoreCase;

/// @brief Field DeclaredOnly value: static_cast<int32_t>(0x2)
static ::System::Reflection::BindingFlags const DeclaredOnly;

/// @brief Field Instance value: static_cast<int32_t>(0x4)
static ::System::Reflection::BindingFlags const Instance;

/// @brief Field Static value: static_cast<int32_t>(0x8)
static ::System::Reflection::BindingFlags const Static;

/// @brief Field Public value: static_cast<int32_t>(0x10)
static ::System::Reflection::BindingFlags const Public;

/// @brief Field NonPublic value: static_cast<int32_t>(0x20)
static ::System::Reflection::BindingFlags const NonPublic;

/// @brief Field FlattenHierarchy value: static_cast<int32_t>(0x40)
static ::System::Reflection::BindingFlags const FlattenHierarchy;

/// @brief Field InvokeMethod value: static_cast<int32_t>(0x100)
static ::System::Reflection::BindingFlags const InvokeMethod;

/// @brief Field CreateInstance value: static_cast<int32_t>(0x200)
static ::System::Reflection::BindingFlags const CreateInstance;

/// @brief Field GetField value: static_cast<int32_t>(0x400)
static ::System::Reflection::BindingFlags const GetField;

/// @brief Field SetField value: static_cast<int32_t>(0x800)
static ::System::Reflection::BindingFlags const SetField;

/// @brief Field GetProperty value: static_cast<int32_t>(0x1000)
static ::System::Reflection::BindingFlags const GetProperty;

/// @brief Field SetProperty value: static_cast<int32_t>(0x2000)
static ::System::Reflection::BindingFlags const SetProperty;

/// @brief Field PutDispProperty value: static_cast<int32_t>(0x4000)
static ::System::Reflection::BindingFlags const PutDispProperty;

/// @brief Field PutRefDispProperty value: static_cast<int32_t>(0x8000)
static ::System::Reflection::BindingFlags const PutRefDispProperty;

/// @brief Field ExactBinding value: static_cast<int32_t>(0x10000)
static ::System::Reflection::BindingFlags const ExactBinding;

/// @brief Field SuppressChangeType value: static_cast<int32_t>(0x20000)
static ::System::Reflection::BindingFlags const SuppressChangeType;

/// @brief Field OptionalParamBinding value: static_cast<int32_t>(0x40000)
static ::System::Reflection::BindingFlags const OptionalParamBinding;

/// @brief Field IgnoreReturn value: static_cast<int32_t>(0x1000000)
static ::System::Reflection::BindingFlags const IgnoreReturn;

/// @brief Field DoNotWrapExceptions value: static_cast<int32_t>(0x2000000)
static ::System::Reflection::BindingFlags const DoNotWrapExceptions;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __BindingFlags_Unwrapped () const noexcept {
return std::bit_cast<__BindingFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BindingFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BindingFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BindingFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::BindingFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::BindingFlags, "System.Reflection", "BindingFlags");
