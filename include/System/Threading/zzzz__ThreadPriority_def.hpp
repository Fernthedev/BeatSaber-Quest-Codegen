#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPriority)
// Forward declare root types
namespace System::Threading {
struct ThreadPriority;
}
// Write type traits
MARK_VAL_T(::System::Threading::ThreadPriority);
// Type: System.Threading::ThreadPriority
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2670))
// CS Name: ::System.Threading::ThreadPriority
struct CORDL_TYPE ThreadPriority : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThreadPriority_Unwrapped
enum struct __ThreadPriority_Unwrapped : int32_t {
__E_Lowest = static_cast<int32_t>(0x0),
__E_BelowNormal = static_cast<int32_t>(0x1),
__E_Normal = static_cast<int32_t>(0x2),
__E_AboveNormal = static_cast<int32_t>(0x3),
__E_Highest = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Lowest value: static_cast<int32_t>(0x0)
static ::System::Threading::ThreadPriority const Lowest;

/// @brief Field BelowNormal value: static_cast<int32_t>(0x1)
static ::System::Threading::ThreadPriority const BelowNormal;

/// @brief Field Normal value: static_cast<int32_t>(0x2)
static ::System::Threading::ThreadPriority const Normal;

/// @brief Field AboveNormal value: static_cast<int32_t>(0x3)
static ::System::Threading::ThreadPriority const AboveNormal;

/// @brief Field Highest value: static_cast<int32_t>(0x4)
static ::System::Threading::ThreadPriority const Highest;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ThreadPriority_Unwrapped () const noexcept {
return std::bit_cast<__ThreadPriority_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ThreadPriority(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ThreadPriority(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ThreadPriority()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPriority, 0x4>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPriority, "System.Threading", "ThreadPriority");
