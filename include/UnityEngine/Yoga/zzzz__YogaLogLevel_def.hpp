#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaLogLevel)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaLogLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaLogLevel);
// Type: UnityEngine.Yoga::YogaLogLevel
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15368))
// CS Name: ::UnityEngine.Yoga::YogaLogLevel
struct CORDL_TYPE YogaLogLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __YogaLogLevel_Unwrapped
enum struct __YogaLogLevel_Unwrapped : int32_t {
__E_Error = static_cast<int32_t>(0x0),
__E_Warn = static_cast<int32_t>(0x1),
__E_Info = static_cast<int32_t>(0x2),
__E_Debug = static_cast<int32_t>(0x3),
__E_Verbose = static_cast<int32_t>(0x4),
__E_Fatal = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Error value: static_cast<int32_t>(0x0)
static ::UnityEngine::Yoga::YogaLogLevel const Error;

/// @brief Field Warn value: static_cast<int32_t>(0x1)
static ::UnityEngine::Yoga::YogaLogLevel const Warn;

/// @brief Field Info value: static_cast<int32_t>(0x2)
static ::UnityEngine::Yoga::YogaLogLevel const Info;

/// @brief Field Debug value: static_cast<int32_t>(0x3)
static ::UnityEngine::Yoga::YogaLogLevel const Debug;

/// @brief Field Verbose value: static_cast<int32_t>(0x4)
static ::UnityEngine::Yoga::YogaLogLevel const Verbose;

/// @brief Field Fatal value: static_cast<int32_t>(0x5)
static ::UnityEngine::Yoga::YogaLogLevel const Fatal;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaLogLevel_Unwrapped () const noexcept {
return std::bit_cast<__YogaLogLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaLogLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit YogaLogLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 YogaLogLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaLogLevel, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaLogLevel, "UnityEngine.Yoga", "YogaLogLevel");
