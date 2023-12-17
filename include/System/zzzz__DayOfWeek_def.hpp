#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DayOfWeek)
// Forward declare root types
namespace System {
struct DayOfWeek;
}
// Write type traits
MARK_VAL_T(::System::DayOfWeek);
// Type: System::DayOfWeek
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2371))
// CS Name: ::System::DayOfWeek
struct CORDL_TYPE DayOfWeek : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DayOfWeek_Unwrapped
enum struct __DayOfWeek_Unwrapped : int32_t {
__E_Sunday = static_cast<int32_t>(0x0),
__E_Monday = static_cast<int32_t>(0x1),
__E_Tuesday = static_cast<int32_t>(0x2),
__E_Wednesday = static_cast<int32_t>(0x3),
__E_Thursday = static_cast<int32_t>(0x4),
__E_Friday = static_cast<int32_t>(0x5),
__E_Saturday = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Sunday value: static_cast<int32_t>(0x0)
static ::System::DayOfWeek const Sunday;

/// @brief Field Monday value: static_cast<int32_t>(0x1)
static ::System::DayOfWeek const Monday;

/// @brief Field Tuesday value: static_cast<int32_t>(0x2)
static ::System::DayOfWeek const Tuesday;

/// @brief Field Wednesday value: static_cast<int32_t>(0x3)
static ::System::DayOfWeek const Wednesday;

/// @brief Field Thursday value: static_cast<int32_t>(0x4)
static ::System::DayOfWeek const Thursday;

/// @brief Field Friday value: static_cast<int32_t>(0x5)
static ::System::DayOfWeek const Friday;

/// @brief Field Saturday value: static_cast<int32_t>(0x6)
static ::System::DayOfWeek const Saturday;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __DayOfWeek_Unwrapped () const noexcept {
return std::bit_cast<__DayOfWeek_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DayOfWeek(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DayOfWeek(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DayOfWeek()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DayOfWeek, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DayOfWeek, "System", "DayOfWeek");
