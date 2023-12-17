#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorControllerParameterType)
// Forward declare root types
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorControllerParameterType);
// Type: UnityEngine::AnimatorControllerParameterType
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14873))
// CS Name: ::UnityEngine::AnimatorControllerParameterType
struct CORDL_TYPE AnimatorControllerParameterType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimatorControllerParameterType_Unwrapped
enum struct __AnimatorControllerParameterType_Unwrapped : int32_t {
__E_Float = static_cast<int32_t>(0x1),
__E_Int = static_cast<int32_t>(0x3),
__E_Bool = static_cast<int32_t>(0x4),
__E_Trigger = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Float value: static_cast<int32_t>(0x1)
static ::UnityEngine::AnimatorControllerParameterType const Float;

/// @brief Field Int value: static_cast<int32_t>(0x3)
static ::UnityEngine::AnimatorControllerParameterType const Int;

/// @brief Field Bool value: static_cast<int32_t>(0x4)
static ::UnityEngine::AnimatorControllerParameterType const Bool;

/// @brief Field Trigger value: static_cast<int32_t>(0x9)
static ::UnityEngine::AnimatorControllerParameterType const Trigger;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimatorControllerParameterType_Unwrapped () const noexcept {
return std::bit_cast<__AnimatorControllerParameterType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorControllerParameterType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimatorControllerParameterType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimatorControllerParameterType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorControllerParameterType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorControllerParameterType, "UnityEngine", "AnimatorControllerParameterType");
