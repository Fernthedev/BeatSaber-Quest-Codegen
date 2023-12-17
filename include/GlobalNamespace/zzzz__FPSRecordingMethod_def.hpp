#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FPSRecordingMethod)
// Forward declare root types
namespace GlobalNamespace {
struct FPSRecordingMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FPSRecordingMethod);
// Type: ::FPSRecordingMethod
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5944))
// CS Name: ::FPSRecordingMethod
struct CORDL_TYPE FPSRecordingMethod : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FPSRecordingMethod_Unwrapped
enum struct __FPSRecordingMethod_Unwrapped : int32_t {
__E_FPSWindow = static_cast<int32_t>(0x0),
__E_DeltaTime = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FPSWindow value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::FPSRecordingMethod const FPSWindow;

/// @brief Field DeltaTime value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::FPSRecordingMethod const DeltaTime;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FPSRecordingMethod_Unwrapped () const noexcept {
return std::bit_cast<__FPSRecordingMethod_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FPSRecordingMethod(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FPSRecordingMethod(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FPSRecordingMethod()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FPSRecordingMethod, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSRecordingMethod, "", "FPSRecordingMethod");
