#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoTimeReference)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoTimeReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoTimeReference);
// Type: UnityEngine.Video::VideoTimeReference
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16080))
// CS Name: ::UnityEngine.Video::VideoTimeReference
struct CORDL_TYPE VideoTimeReference : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VideoTimeReference_Unwrapped
enum struct __VideoTimeReference_Unwrapped : int32_t {
__E_Freerun = static_cast<int32_t>(0x0),
__E_InternalTime = static_cast<int32_t>(0x1),
__E_ExternalTime = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Freerun value: static_cast<int32_t>(0x0)
static ::UnityEngine::Video::VideoTimeReference const Freerun;

/// @brief Field InternalTime value: static_cast<int32_t>(0x1)
static ::UnityEngine::Video::VideoTimeReference const InternalTime;

/// @brief Field ExternalTime value: static_cast<int32_t>(0x2)
static ::UnityEngine::Video::VideoTimeReference const ExternalTime;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoTimeReference_Unwrapped () const noexcept {
return std::bit_cast<__VideoTimeReference_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoTimeReference(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VideoTimeReference(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VideoTimeReference()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoTimeReference, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeReference, "UnityEngine.Video", "VideoTimeReference");
