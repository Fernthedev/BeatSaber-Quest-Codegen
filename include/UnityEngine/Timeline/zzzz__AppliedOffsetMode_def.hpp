#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppliedOffsetMode)
// Forward declare root types
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::AppliedOffsetMode);
// Type: UnityEngine.Timeline::AppliedOffsetMode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13839))
// CS Name: ::UnityEngine.Timeline::AppliedOffsetMode
struct CORDL_TYPE AppliedOffsetMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AppliedOffsetMode_Unwrapped
enum struct __AppliedOffsetMode_Unwrapped : int32_t {
__E_NoRootTransform = static_cast<int32_t>(0x0),
__E_TransformOffset = static_cast<int32_t>(0x1),
__E_SceneOffset = static_cast<int32_t>(0x2),
__E_TransformOffsetLegacy = static_cast<int32_t>(0x3),
__E_SceneOffsetLegacy = static_cast<int32_t>(0x4),
__E_SceneOffsetEditor = static_cast<int32_t>(0x5),
__E_SceneOffsetLegacyEditor = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoRootTransform value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::AppliedOffsetMode const NoRootTransform;

/// @brief Field TransformOffset value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::AppliedOffsetMode const TransformOffset;

/// @brief Field SceneOffset value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffset;

/// @brief Field TransformOffsetLegacy value: static_cast<int32_t>(0x3)
static ::UnityEngine::Timeline::AppliedOffsetMode const TransformOffsetLegacy;

/// @brief Field SceneOffsetLegacy value: static_cast<int32_t>(0x4)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetLegacy;

/// @brief Field SceneOffsetEditor value: static_cast<int32_t>(0x5)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetEditor;

/// @brief Field SceneOffsetLegacyEditor value: static_cast<int32_t>(0x6)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetLegacyEditor;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AppliedOffsetMode_Unwrapped () const noexcept {
return std::bit_cast<__AppliedOffsetMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AppliedOffsetMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AppliedOffsetMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AppliedOffsetMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AppliedOffsetMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AppliedOffsetMode, "UnityEngine.Timeline", "AppliedOffsetMode");
