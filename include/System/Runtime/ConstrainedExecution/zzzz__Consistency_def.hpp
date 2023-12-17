#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Consistency)
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
struct Consistency;
}
// Write type traits
MARK_VAL_T(::System::Runtime::ConstrainedExecution::Consistency);
// Type: System.Runtime.ConstrainedExecution::Consistency
namespace System::Runtime::ConstrainedExecution {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3351))
// CS Name: ::System.Runtime.ConstrainedExecution::Consistency
struct CORDL_TYPE Consistency : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Consistency_Unwrapped
enum struct __Consistency_Unwrapped : int32_t {
__E_MayCorruptProcess = static_cast<int32_t>(0x0),
__E_MayCorruptAppDomain = static_cast<int32_t>(0x1),
__E_MayCorruptInstance = static_cast<int32_t>(0x2),
__E_WillNotCorruptState = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field MayCorruptProcess value: static_cast<int32_t>(0x0)
static ::System::Runtime::ConstrainedExecution::Consistency const MayCorruptProcess;

/// @brief Field MayCorruptAppDomain value: static_cast<int32_t>(0x1)
static ::System::Runtime::ConstrainedExecution::Consistency const MayCorruptAppDomain;

/// @brief Field MayCorruptInstance value: static_cast<int32_t>(0x2)
static ::System::Runtime::ConstrainedExecution::Consistency const MayCorruptInstance;

/// @brief Field WillNotCorruptState value: static_cast<int32_t>(0x3)
static ::System::Runtime::ConstrainedExecution::Consistency const WillNotCorruptState;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Consistency_Unwrapped () const noexcept {
return std::bit_cast<__Consistency_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Consistency(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Consistency(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Consistency()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ConstrainedExecution::Consistency, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::ConstrainedExecution
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::Consistency, "System.Runtime.ConstrainedExecution", "Consistency");
