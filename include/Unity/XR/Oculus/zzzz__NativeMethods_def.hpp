#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace UnityEngine {
struct Vector3;
}
namespace Unity::XR::Oculus {
class __NativeMethods__Internal;
}
namespace Unity::XR::Oculus {
struct __Boundary__BoundaryType;
}
namespace Unity::XR::Oculus {
struct __NativeMethods__UserDefinedSettings;
}
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class NativeMethods;
}
namespace Unity::XR::Oculus {
class __NativeMethods__Internal;
}
namespace Unity::XR::Oculus {
struct __NativeMethods__UserDefinedSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::NativeMethods);
MARK_REF_PTR_T(::Unity::XR::Oculus::__NativeMethods__Internal);
MARK_VAL_T(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings);
// Type: ::UserDefinedSettings
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15140))
// CS Name: ::NativeMethods::UserDefinedSettings
struct CORDL_TYPE __NativeMethods__UserDefinedSettings : public ::bs_hook::ValueTypeWrapper<0x1e> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1e};

/// @brief Field sharedDepthBuffer offset 0x0
 __declspec(property(get=__get_sharedDepthBuffer, put=__set_sharedDepthBuffer)) uint16_t  sharedDepthBuffer;

/// @brief Field dashSupport offset 0x2
 __declspec(property(get=__get_dashSupport, put=__set_dashSupport)) uint16_t  dashSupport;

/// @brief Field stereoRenderingMode offset 0x4
 __declspec(property(get=__get_stereoRenderingMode, put=__set_stereoRenderingMode)) uint16_t  stereoRenderingMode;

/// @brief Field colorSpace offset 0x6
 __declspec(property(get=__get_colorSpace, put=__set_colorSpace)) uint16_t  colorSpace;

/// @brief Field lowOverheadMode offset 0x8
 __declspec(property(get=__get_lowOverheadMode, put=__set_lowOverheadMode)) uint16_t  lowOverheadMode;

/// @brief Field optimizeBufferDiscards offset 0xa
 __declspec(property(get=__get_optimizeBufferDiscards, put=__set_optimizeBufferDiscards)) uint16_t  optimizeBufferDiscards;

/// @brief Field phaseSync offset 0xc
 __declspec(property(get=__get_phaseSync, put=__set_phaseSync)) uint16_t  phaseSync;

/// @brief Field symmetricProjection offset 0xe
 __declspec(property(get=__get_symmetricProjection, put=__set_symmetricProjection)) uint16_t  symmetricProjection;

/// @brief Field subsampledLayout offset 0x10
 __declspec(property(get=__get_subsampledLayout, put=__set_subsampledLayout)) uint16_t  subsampledLayout;

/// @brief Field lateLatching offset 0x12
 __declspec(property(get=__get_lateLatching, put=__set_lateLatching)) uint16_t  lateLatching;

/// @brief Field lateLatchingDebug offset 0x14
 __declspec(property(get=__get_lateLatchingDebug, put=__set_lateLatchingDebug)) uint16_t  lateLatchingDebug;

/// @brief Field enableTrackingOriginStageMode offset 0x16
 __declspec(property(get=__get_enableTrackingOriginStageMode, put=__set_enableTrackingOriginStageMode)) uint16_t  enableTrackingOriginStageMode;

/// @brief Field spaceWarp offset 0x18
 __declspec(property(get=__get_spaceWarp, put=__set_spaceWarp)) uint16_t  spaceWarp;

/// @brief Field depthSubmission offset 0x1a
 __declspec(property(get=__get_depthSubmission, put=__set_depthSubmission)) uint16_t  depthSubmission;

/// @brief Field foveatedRenderingMethod offset 0x1c
 __declspec(property(get=__get_foveatedRenderingMethod, put=__set_foveatedRenderingMethod)) uint16_t  foveatedRenderingMethod;

constexpr void __set_sharedDepthBuffer(uint16_t  value) ;

constexpr uint16_t& __get_sharedDepthBuffer() ;

constexpr uint16_t const& __get_sharedDepthBuffer() const;

constexpr void __set_dashSupport(uint16_t  value) ;

constexpr uint16_t& __get_dashSupport() ;

constexpr uint16_t const& __get_dashSupport() const;

constexpr void __set_stereoRenderingMode(uint16_t  value) ;

constexpr uint16_t& __get_stereoRenderingMode() ;

constexpr uint16_t const& __get_stereoRenderingMode() const;

constexpr void __set_colorSpace(uint16_t  value) ;

constexpr uint16_t& __get_colorSpace() ;

constexpr uint16_t const& __get_colorSpace() const;

constexpr void __set_lowOverheadMode(uint16_t  value) ;

constexpr uint16_t& __get_lowOverheadMode() ;

constexpr uint16_t const& __get_lowOverheadMode() const;

constexpr void __set_optimizeBufferDiscards(uint16_t  value) ;

constexpr uint16_t& __get_optimizeBufferDiscards() ;

constexpr uint16_t const& __get_optimizeBufferDiscards() const;

constexpr void __set_phaseSync(uint16_t  value) ;

constexpr uint16_t& __get_phaseSync() ;

constexpr uint16_t const& __get_phaseSync() const;

constexpr void __set_symmetricProjection(uint16_t  value) ;

constexpr uint16_t& __get_symmetricProjection() ;

constexpr uint16_t const& __get_symmetricProjection() const;

constexpr void __set_subsampledLayout(uint16_t  value) ;

constexpr uint16_t& __get_subsampledLayout() ;

constexpr uint16_t const& __get_subsampledLayout() const;

constexpr void __set_lateLatching(uint16_t  value) ;

constexpr uint16_t& __get_lateLatching() ;

constexpr uint16_t const& __get_lateLatching() const;

constexpr void __set_lateLatchingDebug(uint16_t  value) ;

constexpr uint16_t& __get_lateLatchingDebug() ;

constexpr uint16_t const& __get_lateLatchingDebug() const;

constexpr void __set_enableTrackingOriginStageMode(uint16_t  value) ;

constexpr uint16_t& __get_enableTrackingOriginStageMode() ;

constexpr uint16_t const& __get_enableTrackingOriginStageMode() const;

constexpr void __set_spaceWarp(uint16_t  value) ;

constexpr uint16_t& __get_spaceWarp() ;

constexpr uint16_t const& __get_spaceWarp() const;

constexpr void __set_depthSubmission(uint16_t  value) ;

constexpr uint16_t& __get_depthSubmission() ;

constexpr uint16_t const& __get_depthSubmission() const;

constexpr void __set_foveatedRenderingMethod(uint16_t  value) ;

constexpr uint16_t& __get_foveatedRenderingMethod() ;

constexpr uint16_t const& __get_foveatedRenderingMethod() const;

// Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "phaseSync", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "subsampledLayout", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatchingDebug", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr __NativeMethods__UserDefinedSettings(uint16_t  sharedDepthBuffer, uint16_t  dashSupport, uint16_t  stereoRenderingMode, uint16_t  colorSpace, uint16_t  lowOverheadMode, uint16_t  optimizeBufferDiscards, uint16_t  phaseSync, uint16_t  symmetricProjection, uint16_t  subsampledLayout, uint16_t  lateLatching, uint16_t  lateLatchingDebug, uint16_t  enableTrackingOriginStageMode, uint16_t  spaceWarp, uint16_t  depthSubmission, uint16_t  foveatedRenderingMethod) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeMethods__UserDefinedSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1e>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeMethods__UserDefinedSettings()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, 0x1e>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Type: ::Internal
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15141))
// CS Name: ::NativeMethods::Internal*
class CORDL_TYPE __NativeMethods__Internal : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetColorScale addr 0x2c79e68 size 0x98 virtual false final false
static inline void SetColorScale(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method SetColorOffset addr 0x2c79f00 size 0x94 virtual false final false
static inline void SetColorOffset(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method GetIsSupportedDevice addr 0x2c79f94 size 0x70 virtual false final false
static inline bool GetIsSupportedDevice() ;

/// @brief Method LoadOVRPlugin addr 0x2c7a004 size 0x8c virtual false final false
static inline bool LoadOVRPlugin(::StringW  ovrpPath) ;

/// @brief Method UnloadOVRPlugin addr 0x2c7a094 size 0x64 virtual false final false
static inline void UnloadOVRPlugin() ;

/// @brief Method SetUserDefinedSettings addr 0x2c7a0f8 size 0x8c virtual false final false
static inline void SetUserDefinedSettings(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings  settings) ;

/// @brief Method SetHasUserAuthorizedEyeTrackingPermission addr 0x2c7a184 size 0x7c virtual false final false
static inline void SetHasUserAuthorizedEyeTrackingPermission(bool  authorized) ;

/// @brief Method SetCPULevel addr 0x2c7a200 size 0x7c virtual false final false
static inline int32_t SetCPULevel(int32_t  cpuLevel) ;

/// @brief Method SetGPULevel addr 0x2c7a27c size 0x7c virtual false final false
static inline int32_t SetGPULevel(int32_t  gpuLevel) ;

/// @brief Method GetOVRPVersion addr 0x2c7a2f8 size 0x80 virtual false final false
static inline void GetOVRPVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  version) ;

/// @brief Method EnablePerfMetrics addr 0x2c7a378 size 0x7c virtual false final false
static inline void EnablePerfMetrics(bool  enable) ;

/// @brief Method EnableAppMetrics addr 0x2c7a3f4 size 0x7c virtual false final false
static inline void EnableAppMetrics(bool  enable) ;

/// @brief Method SetDeveloperModeStrict addr 0x2c7a470 size 0x84 virtual false final false
static inline bool SetDeveloperModeStrict(bool  active) ;

/// @brief Method GetAppHasInputFocus addr 0x2c7a4f4 size 0x70 virtual false final false
static inline bool GetAppHasInputFocus() ;

/// @brief Method GetBoundaryConfigured addr 0x2c7a564 size 0x70 virtual false final false
static inline bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions addr 0x2c7a5d4 size 0x8c virtual false final false
static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType  boundaryType, ByRef<::UnityEngine::Vector3>  dimensions) ;

/// @brief Method GetBoundaryVisible addr 0x2c7a660 size 0x70 virtual false final false
static inline bool GetBoundaryVisible() ;

/// @brief Method SetBoundaryVisible addr 0x2c7a6d0 size 0x7c virtual false final false
static inline void SetBoundaryVisible(bool  boundaryVisible) ;

/// @brief Method GetAppShouldQuit addr 0x2c7a750 size 0x70 virtual false final false
static inline bool GetAppShouldQuit() ;

/// @brief Method GetDisplayAvailableFrequencies addr 0x2c7a7c0 size 0x8c virtual false final false
static inline bool GetDisplayAvailableFrequencies(::cordl_internals::intptr_t  ptr, ByRef<int32_t>  numFrequencies) ;

/// @brief Method SetDisplayFrequency addr 0x2c7a84c size 0x84 virtual false final false
static inline bool SetDisplayFrequency(float_t  refreshRate) ;

/// @brief Method GetDisplayFrequency addr 0x2c7a8d0 size 0x84 virtual false final false
static inline bool GetDisplayFrequency(ByRef<float_t>  refreshRate) ;

/// @brief Method GetSystemHeadsetType addr 0x2c7a954 size 0x68 virtual false final false
static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method GetTiledMultiResSupported addr 0x2c7a9bc size 0x70 virtual false final false
static inline bool GetTiledMultiResSupported() ;

/// @brief Method SetTiledMultiResLevel addr 0x2c7aa2c size 0x7c virtual false final false
static inline void SetTiledMultiResLevel(int32_t  level) ;

/// @brief Method GetTiledMultiResLevel addr 0x2c7aaa8 size 0x68 virtual false final false
static inline int32_t GetTiledMultiResLevel() ;

/// @brief Method SetTiledMultiResDynamic addr 0x2c7ab10 size 0x7c virtual false final false
static inline void SetTiledMultiResDynamic(bool  isDynamic) ;

/// @brief Method GetEyeTrackedFoveatedRenderingSupported addr 0x2c7ab8c size 0x70 virtual false final false
static inline bool GetEyeTrackedFoveatedRenderingSupported() ;

/// @brief Method GetShouldRestartSession addr 0x2c7ac00 size 0x70 virtual false final false
static inline bool GetShouldRestartSession() ;

// Ctor Parameters [CppParam { name: "", ty: "__NativeMethods__Internal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NativeMethods__Internal(__NativeMethods__Internal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NativeMethods__Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NativeMethods__Internal(__NativeMethods__Internal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NativeMethods__Internal()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__NativeMethods__Internal, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::NativeMethods
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15142))
// CS Name: ::Unity.XR.Oculus::NativeMethods*
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
// Declarations
using Internal = ::Unity::XR::Oculus::__NativeMethods__Internal;

using UserDefinedSettings = ::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetColorScale addr 0x2c770f4 size 0x4 virtual false final false
static inline void SetColorScale(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method SetColorOffset addr 0x2c770f8 size 0x4 virtual false final false
static inline void SetColorOffset(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method GetIsSupportedDevice addr 0x2c77bf4 size 0x4 virtual false final false
static inline bool GetIsSupportedDevice() ;

/// @brief Method LoadOVRPlugin addr 0x2c78874 size 0x4 virtual false final false
static inline bool LoadOVRPlugin(::StringW  ovrpPath) ;

/// @brief Method UnloadOVRPlugin addr 0x2c7a090 size 0x4 virtual false final false
static inline void UnloadOVRPlugin() ;

/// @brief Method SetUserDefinedSettings addr 0x2c783f4 size 0x2c virtual false final false
static inline void SetUserDefinedSettings(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings  settings) ;

/// @brief Method SetHasUserAuthorizedEyeTrackingPermission addr 0x2c78504 size 0x8 virtual false final false
static inline void SetHasUserAuthorizedEyeTrackingPermission(bool  authorized) ;

/// @brief Method SetCPULevel addr 0x2c789b8 size 0x4 virtual false final false
static inline int32_t SetCPULevel(int32_t  cpuLevel) ;

/// @brief Method SetGPULevel addr 0x2c789d4 size 0x4 virtual false final false
static inline int32_t SetGPULevel(int32_t  gpuLevel) ;

/// @brief Method GetOVRPVersion addr 0x2c78cf0 size 0x4 virtual false final false
static inline void GetOVRPVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  version) ;

/// @brief Method EnablePerfMetrics addr 0x2c79aec size 0x8 virtual false final false
static inline void EnablePerfMetrics(bool  enable) ;

/// @brief Method EnableAppMetrics addr 0x2c79e60 size 0x8 virtual false final false
static inline void EnableAppMetrics(bool  enable) ;

/// @brief Method SetDeveloperModeStrict addr 0x2c7778c size 0x8 virtual false final false
static inline bool SetDeveloperModeStrict(bool  active) ;

/// @brief Method GetHasInputFocus addr 0x2c77594 size 0x4 virtual false final false
static inline bool GetHasInputFocus() ;

/// @brief Method GetBoundaryConfigured addr 0x2c77644 size 0x4 virtual false final false
static inline bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions addr 0x2c7764c size 0x4 virtual false final false
static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType  boundaryType, ByRef<::UnityEngine::Vector3>  dimensions) ;

/// @brief Method GetBoundaryVisible addr 0x2c77654 size 0x4 virtual false final false
static inline bool GetBoundaryVisible() ;

/// @brief Method SetBoundaryVisible addr 0x2c77660 size 0x8 virtual false final false
static inline void SetBoundaryVisible(bool  boundaryVisible) ;

/// @brief Method GetAppShouldQuit addr 0x2c7a74c size 0x4 virtual false final false
static inline bool GetAppShouldQuit() ;

/// @brief Method GetDisplayAvailableFrequencies addr 0x2c78b90 size 0x4 virtual false final false
static inline bool GetDisplayAvailableFrequencies(::cordl_internals::intptr_t  ptr, ByRef<int32_t>  numFrequencies) ;

/// @brief Method SetDisplayFrequency addr 0x2c78b98 size 0x4 virtual false final false
static inline bool SetDisplayFrequency(float_t  refreshRate) ;

/// @brief Method GetDisplayFrequency addr 0x2c78ba0 size 0x4 virtual false final false
static inline bool GetDisplayFrequency(ByRef<float_t>  refreshRate) ;

/// @brief Method GetSystemHeadsetType addr 0x2c77100 size 0x4 virtual false final false
static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method GetTiledMultiResSupported addr 0x2c77190 size 0x4 virtual false final false
static inline bool GetTiledMultiResSupported() ;

/// @brief Method SetTiledMultiResLevel addr 0x2c77194 size 0x4 virtual false final false
static inline void SetTiledMultiResLevel(int32_t  level) ;

/// @brief Method GetTiledMultiResLevel addr 0x2c772a4 size 0x4 virtual false final false
static inline int32_t GetTiledMultiResLevel() ;

/// @brief Method SetTiledMultiResDynamic addr 0x2c77224 size 0x8 virtual false final false
static inline void SetTiledMultiResDynamic(bool  isDynamic) ;

/// @brief Method GetEyeTrackedFoveatedRenderingSupported addr 0x2c7849c size 0x4 virtual false final false
static inline bool GetEyeTrackedFoveatedRenderingSupported() ;

/// @brief Method GetShouldRestartSession addr 0x2c7abfc size 0x4 virtual false final false
static inline bool GetShouldRestartSession() ;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMethods(NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMethods(NativeMethods const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeMethods()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods*, "Unity.XR.Oculus", "NativeMethods");
NEED_NO_BOX(::Unity::XR::Oculus::__NativeMethods__Internal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__NativeMethods__Internal*, "Unity.XR.Oculus", "NativeMethods/Internal");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, "Unity.XR.Oculus", "NativeMethods/UserDefinedSettings");
