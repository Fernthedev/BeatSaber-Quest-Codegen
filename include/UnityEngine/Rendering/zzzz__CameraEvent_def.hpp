#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraEvent)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CameraEvent);
// Type: UnityEngine.Rendering::CameraEvent
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10337))
// CS Name: ::UnityEngine.Rendering::CameraEvent
struct CORDL_TYPE CameraEvent : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CameraEvent_Unwrapped
enum struct __CameraEvent_Unwrapped : int32_t {
__E_BeforeDepthTexture = static_cast<int32_t>(0x0),
__E_AfterDepthTexture = static_cast<int32_t>(0x1),
__E_BeforeDepthNormalsTexture = static_cast<int32_t>(0x2),
__E_AfterDepthNormalsTexture = static_cast<int32_t>(0x3),
__E_BeforeGBuffer = static_cast<int32_t>(0x4),
__E_AfterGBuffer = static_cast<int32_t>(0x5),
__E_BeforeLighting = static_cast<int32_t>(0x6),
__E_AfterLighting = static_cast<int32_t>(0x7),
__E_BeforeFinalPass = static_cast<int32_t>(0x8),
__E_AfterFinalPass = static_cast<int32_t>(0x9),
__E_BeforeForwardOpaque = static_cast<int32_t>(0xa),
__E_AfterForwardOpaque = static_cast<int32_t>(0xb),
__E_BeforeImageEffectsOpaque = static_cast<int32_t>(0xc),
__E_AfterImageEffectsOpaque = static_cast<int32_t>(0xd),
__E_BeforeSkybox = static_cast<int32_t>(0xe),
__E_AfterSkybox = static_cast<int32_t>(0xf),
__E_BeforeForwardAlpha = static_cast<int32_t>(0x10),
__E_AfterForwardAlpha = static_cast<int32_t>(0x11),
__E_BeforeImageEffects = static_cast<int32_t>(0x12),
__E_AfterImageEffects = static_cast<int32_t>(0x13),
__E_AfterEverything = static_cast<int32_t>(0x14),
__E_BeforeReflections = static_cast<int32_t>(0x15),
__E_AfterReflections = static_cast<int32_t>(0x16),
__E_BeforeHaloAndLensFlares = static_cast<int32_t>(0x17),
__E_AfterHaloAndLensFlares = static_cast<int32_t>(0x18),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BeforeDepthTexture value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::CameraEvent const BeforeDepthTexture;

/// @brief Field AfterDepthTexture value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::CameraEvent const AfterDepthTexture;

/// @brief Field BeforeDepthNormalsTexture value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::CameraEvent const BeforeDepthNormalsTexture;

/// @brief Field AfterDepthNormalsTexture value: static_cast<int32_t>(0x3)
static ::UnityEngine::Rendering::CameraEvent const AfterDepthNormalsTexture;

/// @brief Field BeforeGBuffer value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::CameraEvent const BeforeGBuffer;

/// @brief Field AfterGBuffer value: static_cast<int32_t>(0x5)
static ::UnityEngine::Rendering::CameraEvent const AfterGBuffer;

/// @brief Field BeforeLighting value: static_cast<int32_t>(0x6)
static ::UnityEngine::Rendering::CameraEvent const BeforeLighting;

/// @brief Field AfterLighting value: static_cast<int32_t>(0x7)
static ::UnityEngine::Rendering::CameraEvent const AfterLighting;

/// @brief Field BeforeFinalPass value: static_cast<int32_t>(0x8)
static ::UnityEngine::Rendering::CameraEvent const BeforeFinalPass;

/// @brief Field AfterFinalPass value: static_cast<int32_t>(0x9)
static ::UnityEngine::Rendering::CameraEvent const AfterFinalPass;

/// @brief Field BeforeForwardOpaque value: static_cast<int32_t>(0xa)
static ::UnityEngine::Rendering::CameraEvent const BeforeForwardOpaque;

/// @brief Field AfterForwardOpaque value: static_cast<int32_t>(0xb)
static ::UnityEngine::Rendering::CameraEvent const AfterForwardOpaque;

/// @brief Field BeforeImageEffectsOpaque value: static_cast<int32_t>(0xc)
static ::UnityEngine::Rendering::CameraEvent const BeforeImageEffectsOpaque;

/// @brief Field AfterImageEffectsOpaque value: static_cast<int32_t>(0xd)
static ::UnityEngine::Rendering::CameraEvent const AfterImageEffectsOpaque;

/// @brief Field BeforeSkybox value: static_cast<int32_t>(0xe)
static ::UnityEngine::Rendering::CameraEvent const BeforeSkybox;

/// @brief Field AfterSkybox value: static_cast<int32_t>(0xf)
static ::UnityEngine::Rendering::CameraEvent const AfterSkybox;

/// @brief Field BeforeForwardAlpha value: static_cast<int32_t>(0x10)
static ::UnityEngine::Rendering::CameraEvent const BeforeForwardAlpha;

/// @brief Field AfterForwardAlpha value: static_cast<int32_t>(0x11)
static ::UnityEngine::Rendering::CameraEvent const AfterForwardAlpha;

/// @brief Field BeforeImageEffects value: static_cast<int32_t>(0x12)
static ::UnityEngine::Rendering::CameraEvent const BeforeImageEffects;

/// @brief Field AfterImageEffects value: static_cast<int32_t>(0x13)
static ::UnityEngine::Rendering::CameraEvent const AfterImageEffects;

/// @brief Field AfterEverything value: static_cast<int32_t>(0x14)
static ::UnityEngine::Rendering::CameraEvent const AfterEverything;

/// @brief Field BeforeReflections value: static_cast<int32_t>(0x15)
static ::UnityEngine::Rendering::CameraEvent const BeforeReflections;

/// @brief Field AfterReflections value: static_cast<int32_t>(0x16)
static ::UnityEngine::Rendering::CameraEvent const AfterReflections;

/// @brief Field BeforeHaloAndLensFlares value: static_cast<int32_t>(0x17)
static ::UnityEngine::Rendering::CameraEvent const BeforeHaloAndLensFlares;

/// @brief Field AfterHaloAndLensFlares value: static_cast<int32_t>(0x18)
static ::UnityEngine::Rendering::CameraEvent const AfterHaloAndLensFlares;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CameraEvent_Unwrapped () const noexcept {
return std::bit_cast<__CameraEvent_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CameraEvent(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CameraEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CameraEvent()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraEvent, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraEvent, "UnityEngine.Rendering", "CameraEvent");
