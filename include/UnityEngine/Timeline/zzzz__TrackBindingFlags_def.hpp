#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackBindingFlags)
// Forward declare root types
namespace UnityEngine::Timeline {
struct TrackBindingFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::TrackBindingFlags);
// Type: UnityEngine.Timeline::TrackBindingFlags
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13917))
// CS Name: ::UnityEngine.Timeline::TrackBindingFlags
struct CORDL_TYPE TrackBindingFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TrackBindingFlags_Unwrapped
enum struct __TrackBindingFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AllowCreateComponent = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::TrackBindingFlags const None;

/// @brief Field AllowCreateComponent value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::TrackBindingFlags const AllowCreateComponent;

/// @brief Field All value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::TrackBindingFlags const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackBindingFlags_Unwrapped () const noexcept {
return std::bit_cast<__TrackBindingFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TrackBindingFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TrackBindingFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TrackBindingFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackBindingFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackBindingFlags, "UnityEngine.Timeline", "TrackBindingFlags");
