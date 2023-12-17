#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKOutputFrame)
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKOutputFrame);
// Type: LIV.SDK.Unity::SDKOutputFrame
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15116))
// CS Name: ::LIV.SDK.Unity::SDKOutputFrame
struct CORDL_TYPE SDKOutputFrame : public ::bs_hook::ValueTypeWrapper<0xac> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xac};

/// @brief Field renderingPipeline offset 0x0
 __declspec(property(get=__get_renderingPipeline, put=__set_renderingPipeline)) ::LIV::SDK::Unity::RENDERING_PIPELINE  renderingPipeline;

/// @brief Field trackedSpace offset 0x4
 __declspec(property(get=__get_trackedSpace, put=__set_trackedSpace)) ::LIV::SDK::Unity::SDKTrackedSpace  trackedSpace;

constexpr void __set_renderingPipeline(::LIV::SDK::Unity::RENDERING_PIPELINE  value) ;

constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE& __get_renderingPipeline() ;

constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE const& __get_renderingPipeline() const;

constexpr void __set_trackedSpace(::LIV::SDK::Unity::SDKTrackedSpace  value) ;

constexpr ::LIV::SDK::Unity::SDKTrackedSpace& __get_trackedSpace() ;

constexpr ::LIV::SDK::Unity::SDKTrackedSpace const& __get_trackedSpace() const;

/// @brief Method get_empty addr 0x220ff54 size 0x60 virtual false final false
static inline ::LIV::SDK::Unity::SDKOutputFrame get_empty() ;

/// @brief Method ToString addr 0x2215614 size 0xc4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "renderingPipeline", ty: "::LIV::SDK::Unity::RENDERING_PIPELINE", modifiers: "", def_value: None }, CppParam { name: "trackedSpace", ty: "::LIV::SDK::Unity::SDKTrackedSpace", modifiers: "", def_value: None }]
constexpr SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE  renderingPipeline, ::LIV::SDK::Unity::SDKTrackedSpace  trackedSpace) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKOutputFrame(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xac>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKOutputFrame()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKOutputFrame, 0xac>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKOutputFrame, "LIV.SDK.Unity", "SDKOutputFrame");
