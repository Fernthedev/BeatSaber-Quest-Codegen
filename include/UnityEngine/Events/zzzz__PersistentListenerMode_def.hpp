#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentListenerMode)
// Forward declare root types
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Events::PersistentListenerMode);
// Type: UnityEngine.Events::PersistentListenerMode
namespace UnityEngine::Events {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10447))
// CS Name: ::UnityEngine.Events::PersistentListenerMode
struct CORDL_TYPE PersistentListenerMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PersistentListenerMode_Unwrapped
enum struct __PersistentListenerMode_Unwrapped : int32_t {
__E_EventDefined = static_cast<int32_t>(0x0),
__E_Void = static_cast<int32_t>(0x1),
__E_Object = static_cast<int32_t>(0x2),
__E_Int = static_cast<int32_t>(0x3),
__E_Float = static_cast<int32_t>(0x4),
__E_String = static_cast<int32_t>(0x5),
__E_Bool = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field EventDefined value: static_cast<int32_t>(0x0)
static ::UnityEngine::Events::PersistentListenerMode const EventDefined;

/// @brief Field Void value: static_cast<int32_t>(0x1)
static ::UnityEngine::Events::PersistentListenerMode const Void;

/// @brief Field Object value: static_cast<int32_t>(0x2)
static ::UnityEngine::Events::PersistentListenerMode const Object;

/// @brief Field Int value: static_cast<int32_t>(0x3)
static ::UnityEngine::Events::PersistentListenerMode const Int;

/// @brief Field Float value: static_cast<int32_t>(0x4)
static ::UnityEngine::Events::PersistentListenerMode const Float;

/// @brief Field String value: static_cast<int32_t>(0x5)
static ::UnityEngine::Events::PersistentListenerMode const String;

/// @brief Field Bool value: static_cast<int32_t>(0x6)
static ::UnityEngine::Events::PersistentListenerMode const Bool;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PersistentListenerMode_Unwrapped () const noexcept {
return std::bit_cast<__PersistentListenerMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PersistentListenerMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PersistentListenerMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PersistentListenerMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::PersistentListenerMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentListenerMode, "UnityEngine.Events", "PersistentListenerMode");
