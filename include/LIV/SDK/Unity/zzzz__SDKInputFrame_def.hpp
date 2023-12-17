#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKInputFrame)
namespace LIV::SDK::Unity {
struct SDKPose;
}
namespace LIV::SDK::Unity {
struct SDKTransform;
}
namespace LIV::SDK::Unity {
struct FEATURES;
}
namespace LIV::SDK::Unity {
struct SDKPriority;
}
namespace LIV::SDK::Unity {
struct SDKClipPlane;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKInputFrame);
// Type: LIV.SDK.Unity::SDKInputFrame
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15115))
// CS Name: ::LIV.SDK.Unity::SDKInputFrame
struct CORDL_TYPE SDKInputFrame : public ::bs_hook::ValueTypeWrapper<0x158> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x158};

/// @brief Field pose offset 0x0
 __declspec(property(get=__get_pose, put=__set_pose)) ::LIV::SDK::Unity::SDKPose  pose;

/// @brief Field clipPlane offset 0x70
 __declspec(property(get=__get_clipPlane, put=__set_clipPlane)) ::LIV::SDK::Unity::SDKClipPlane  clipPlane;

/// @brief Field stageTransform offset 0xbc
 __declspec(property(get=__get_stageTransform, put=__set_stageTransform)) ::LIV::SDK::Unity::SDKTransform  stageTransform;

/// @brief Field features offset 0xe8
 __declspec(property(get=__get_features, put=__set_features)) ::LIV::SDK::Unity::FEATURES  features;

/// @brief Field groundClipPlane offset 0xf0
 __declspec(property(get=__get_groundClipPlane, put=__set_groundClipPlane)) ::LIV::SDK::Unity::SDKClipPlane  groundClipPlane;

/// @brief Field frameid offset 0x140
 __declspec(property(get=__get_frameid, put=__set_frameid)) uint64_t  frameid;

/// @brief Field referenceframe offset 0x148
 __declspec(property(get=__get_referenceframe, put=__set_referenceframe)) uint64_t  referenceframe;

/// @brief Field priority offset 0x150
 __declspec(property(get=__get_priority, put=__set_priority)) ::LIV::SDK::Unity::SDKPriority  priority;

constexpr void __set_pose(::LIV::SDK::Unity::SDKPose  value) ;

constexpr ::LIV::SDK::Unity::SDKPose& __get_pose() ;

constexpr ::LIV::SDK::Unity::SDKPose const& __get_pose() const;

constexpr void __set_clipPlane(::LIV::SDK::Unity::SDKClipPlane  value) ;

constexpr ::LIV::SDK::Unity::SDKClipPlane& __get_clipPlane() ;

constexpr ::LIV::SDK::Unity::SDKClipPlane const& __get_clipPlane() const;

constexpr void __set_stageTransform(::LIV::SDK::Unity::SDKTransform  value) ;

constexpr ::LIV::SDK::Unity::SDKTransform& __get_stageTransform() ;

constexpr ::LIV::SDK::Unity::SDKTransform const& __get_stageTransform() const;

constexpr void __set_features(::LIV::SDK::Unity::FEATURES  value) ;

constexpr ::LIV::SDK::Unity::FEATURES& __get_features() ;

constexpr ::LIV::SDK::Unity::FEATURES const& __get_features() const;

constexpr void __set_groundClipPlane(::LIV::SDK::Unity::SDKClipPlane  value) ;

constexpr ::LIV::SDK::Unity::SDKClipPlane& __get_groundClipPlane() ;

constexpr ::LIV::SDK::Unity::SDKClipPlane const& __get_groundClipPlane() const;

constexpr void __set_frameid(uint64_t  value) ;

constexpr uint64_t& __get_frameid() ;

constexpr uint64_t const& __get_frameid() const;

constexpr void __set_referenceframe(uint64_t  value) ;

constexpr uint64_t& __get_referenceframe() ;

constexpr uint64_t const& __get_referenceframe() const;

constexpr void __set_priority(::LIV::SDK::Unity::SDKPriority  value) ;

constexpr ::LIV::SDK::Unity::SDKPriority& __get_priority() ;

constexpr ::LIV::SDK::Unity::SDKPriority const& __get_priority() const;

/// @brief Method get_empty addr 0x220f32c size 0x144 virtual false final false
static inline ::LIV::SDK::Unity::SDKInputFrame get_empty() ;

/// @brief Method ReleaseControl addr 0x2213858 size 0x10 virtual false final false
inline void ReleaseControl() ;

/// @brief Method ObtainControl addr 0x2213868 size 0x14 virtual false final false
inline void ObtainControl() ;

/// @brief Method ToString addr 0x221527c size 0x334 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "pose", ty: "::LIV::SDK::Unity::SDKPose", modifiers: "", def_value: None }, CppParam { name: "clipPlane", ty: "::LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: None }, CppParam { name: "stageTransform", ty: "::LIV::SDK::Unity::SDKTransform", modifiers: "", def_value: None }, CppParam { name: "features", ty: "::LIV::SDK::Unity::FEATURES", modifiers: "", def_value: None }, CppParam { name: "groundClipPlane", ty: "::LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: None }, CppParam { name: "frameid", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "referenceframe", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "::LIV::SDK::Unity::SDKPriority", modifiers: "", def_value: None }]
constexpr SDKInputFrame(::LIV::SDK::Unity::SDKPose  pose, ::LIV::SDK::Unity::SDKClipPlane  clipPlane, ::LIV::SDK::Unity::SDKTransform  stageTransform, ::LIV::SDK::Unity::FEATURES  features, ::LIV::SDK::Unity::SDKClipPlane  groundClipPlane, uint64_t  frameid, uint64_t  referenceframe, ::LIV::SDK::Unity::SDKPriority  priority) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKInputFrame(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x158>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKInputFrame()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKInputFrame, 0x158>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKInputFrame, "LIV.SDK.Unity", "SDKInputFrame");
