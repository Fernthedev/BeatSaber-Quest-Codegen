#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputEventType)
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEventType;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputEventType);
// Type: UnityEngineInternal.Input::NativeInputEventType
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16108))
// CS Name: ::UnityEngineInternal.Input::NativeInputEventType
struct CORDL_TYPE NativeInputEventType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NativeInputEventType_Unwrapped
enum struct __NativeInputEventType_Unwrapped : int32_t {
__E_DeviceRemoved = static_cast<int32_t>(0x4452454d),
__E_DeviceConfigChanged = static_cast<int32_t>(0x44434647),
__E_Text = static_cast<int32_t>(0x54455854),
__E_State = static_cast<int32_t>(0x53544154),
__E_Delta = static_cast<int32_t>(0x444c5441),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DeviceRemoved value: static_cast<int32_t>(0x4452454d)
static ::UnityEngineInternal::Input::NativeInputEventType const DeviceRemoved;

/// @brief Field DeviceConfigChanged value: static_cast<int32_t>(0x44434647)
static ::UnityEngineInternal::Input::NativeInputEventType const DeviceConfigChanged;

/// @brief Field Text value: static_cast<int32_t>(0x54455854)
static ::UnityEngineInternal::Input::NativeInputEventType const Text;

/// @brief Field State value: static_cast<int32_t>(0x53544154)
static ::UnityEngineInternal::Input::NativeInputEventType const State;

/// @brief Field Delta value: static_cast<int32_t>(0x444c5441)
static ::UnityEngineInternal::Input::NativeInputEventType const Delta;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeInputEventType_Unwrapped () const noexcept {
return std::bit_cast<__NativeInputEventType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputEventType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeInputEventType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeInputEventType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputEventType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEventType, "UnityEngineInternal.Input", "NativeInputEventType");
