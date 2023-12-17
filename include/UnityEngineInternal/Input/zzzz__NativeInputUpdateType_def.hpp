#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputUpdateType)
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputUpdateType);
// Type: UnityEngineInternal.Input::NativeInputUpdateType
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16111))
// CS Name: ::UnityEngineInternal.Input::NativeInputUpdateType
struct CORDL_TYPE NativeInputUpdateType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NativeInputUpdateType_Unwrapped
enum struct __NativeInputUpdateType_Unwrapped : int32_t {
__E_Dynamic = static_cast<int32_t>(0x1),
__E_Fixed = static_cast<int32_t>(0x2),
__E_BeforeRender = static_cast<int32_t>(0x4),
__E_Editor = static_cast<int32_t>(0x8),
__E_IgnoreFocus = static_cast<int32_t>(0x80000000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Dynamic value: static_cast<int32_t>(0x1)
static ::UnityEngineInternal::Input::NativeInputUpdateType const Dynamic;

/// @brief Field Fixed value: static_cast<int32_t>(0x2)
static ::UnityEngineInternal::Input::NativeInputUpdateType const Fixed;

/// @brief Field BeforeRender value: static_cast<int32_t>(0x4)
static ::UnityEngineInternal::Input::NativeInputUpdateType const BeforeRender;

/// @brief Field Editor value: static_cast<int32_t>(0x8)
static ::UnityEngineInternal::Input::NativeInputUpdateType const Editor;

/// @brief Field IgnoreFocus value: static_cast<int32_t>(0x80000000)
static ::UnityEngineInternal::Input::NativeInputUpdateType const IgnoreFocus;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeInputUpdateType_Unwrapped () const noexcept {
return std::bit_cast<__NativeInputUpdateType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputUpdateType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeInputUpdateType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeInputUpdateType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputUpdateType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputUpdateType, "UnityEngineInternal.Input", "NativeInputUpdateType");
