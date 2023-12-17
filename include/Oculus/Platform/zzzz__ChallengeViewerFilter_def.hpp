#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeViewerFilter)
// Forward declare root types
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ChallengeViewerFilter);
// Type: Oculus.Platform::ChallengeViewerFilter
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13243))
// CS Name: ::Oculus.Platform::ChallengeViewerFilter
struct CORDL_TYPE ChallengeViewerFilter : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChallengeViewerFilter_Unwrapped
enum struct __ChallengeViewerFilter_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_AllVisible = static_cast<int32_t>(0x1),
__E_Participating = static_cast<int32_t>(0x2),
__E_Invited = static_cast<int32_t>(0x3),
__E_ParticipatingOrInvited = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::ChallengeViewerFilter const Unknown;

/// @brief Field AllVisible value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::ChallengeViewerFilter const AllVisible;

/// @brief Field Participating value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::ChallengeViewerFilter const Participating;

/// @brief Field Invited value: static_cast<int32_t>(0x3)
static ::Oculus::Platform::ChallengeViewerFilter const Invited;

/// @brief Field ParticipatingOrInvited value: static_cast<int32_t>(0x4)
static ::Oculus::Platform::ChallengeViewerFilter const ParticipatingOrInvited;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ChallengeViewerFilter_Unwrapped () const noexcept {
return std::bit_cast<__ChallengeViewerFilter_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChallengeViewerFilter(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ChallengeViewerFilter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ChallengeViewerFilter()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ChallengeViewerFilter, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeViewerFilter, "Oculus.Platform", "ChallengeViewerFilter");
