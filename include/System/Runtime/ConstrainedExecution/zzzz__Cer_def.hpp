#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cer)
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
struct Cer;
}
// Write type traits
MARK_VAL_T(::System::Runtime::ConstrainedExecution::Cer);
// Type: System.Runtime.ConstrainedExecution::Cer
namespace System::Runtime::ConstrainedExecution {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3350))
// CS Name: ::System.Runtime.ConstrainedExecution::Cer
struct CORDL_TYPE Cer : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Cer_Unwrapped
enum struct __Cer_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_MayFail = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Runtime::ConstrainedExecution::Cer const None;

/// @brief Field MayFail value: static_cast<int32_t>(0x1)
static ::System::Runtime::ConstrainedExecution::Cer const MayFail;

/// @brief Field Success value: static_cast<int32_t>(0x2)
static ::System::Runtime::ConstrainedExecution::Cer const Success;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Cer_Unwrapped () const noexcept {
return std::bit_cast<__Cer_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Cer(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Cer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Cer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ConstrainedExecution::Cer, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::ConstrainedExecution
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::Cer, "System.Runtime.ConstrainedExecution", "Cer");
