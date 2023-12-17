#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compositor_FrameTiming)
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Compositor_FrameTiming);
// Type: OVR.OpenVR::Compositor_FrameTiming
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8704))
// CS Name: ::OVR.OpenVR::Compositor_FrameTiming
struct CORDL_TYPE Compositor_FrameTiming : public ::bs_hook::ValueTypeWrapper<0xb0> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field m_nSize offset 0x0
 __declspec(property(get=__get_m_nSize, put=__set_m_nSize)) uint32_t  m_nSize;

/// @brief Field m_nFrameIndex offset 0x4
 __declspec(property(get=__get_m_nFrameIndex, put=__set_m_nFrameIndex)) uint32_t  m_nFrameIndex;

/// @brief Field m_nNumFramePresents offset 0x8
 __declspec(property(get=__get_m_nNumFramePresents, put=__set_m_nNumFramePresents)) uint32_t  m_nNumFramePresents;

/// @brief Field m_nNumMisPresented offset 0xc
 __declspec(property(get=__get_m_nNumMisPresented, put=__set_m_nNumMisPresented)) uint32_t  m_nNumMisPresented;

/// @brief Field m_nNumDroppedFrames offset 0x10
 __declspec(property(get=__get_m_nNumDroppedFrames, put=__set_m_nNumDroppedFrames)) uint32_t  m_nNumDroppedFrames;

/// @brief Field m_nReprojectionFlags offset 0x14
 __declspec(property(get=__get_m_nReprojectionFlags, put=__set_m_nReprojectionFlags)) uint32_t  m_nReprojectionFlags;

/// @brief Field m_flSystemTimeInSeconds offset 0x18
 __declspec(property(get=__get_m_flSystemTimeInSeconds, put=__set_m_flSystemTimeInSeconds)) double_t  m_flSystemTimeInSeconds;

/// @brief Field m_flPreSubmitGpuMs offset 0x20
 __declspec(property(get=__get_m_flPreSubmitGpuMs, put=__set_m_flPreSubmitGpuMs)) float_t  m_flPreSubmitGpuMs;

/// @brief Field m_flPostSubmitGpuMs offset 0x24
 __declspec(property(get=__get_m_flPostSubmitGpuMs, put=__set_m_flPostSubmitGpuMs)) float_t  m_flPostSubmitGpuMs;

/// @brief Field m_flTotalRenderGpuMs offset 0x28
 __declspec(property(get=__get_m_flTotalRenderGpuMs, put=__set_m_flTotalRenderGpuMs)) float_t  m_flTotalRenderGpuMs;

/// @brief Field m_flCompositorRenderGpuMs offset 0x2c
 __declspec(property(get=__get_m_flCompositorRenderGpuMs, put=__set_m_flCompositorRenderGpuMs)) float_t  m_flCompositorRenderGpuMs;

/// @brief Field m_flCompositorRenderCpuMs offset 0x30
 __declspec(property(get=__get_m_flCompositorRenderCpuMs, put=__set_m_flCompositorRenderCpuMs)) float_t  m_flCompositorRenderCpuMs;

/// @brief Field m_flCompositorIdleCpuMs offset 0x34
 __declspec(property(get=__get_m_flCompositorIdleCpuMs, put=__set_m_flCompositorIdleCpuMs)) float_t  m_flCompositorIdleCpuMs;

/// @brief Field m_flClientFrameIntervalMs offset 0x38
 __declspec(property(get=__get_m_flClientFrameIntervalMs, put=__set_m_flClientFrameIntervalMs)) float_t  m_flClientFrameIntervalMs;

/// @brief Field m_flPresentCallCpuMs offset 0x3c
 __declspec(property(get=__get_m_flPresentCallCpuMs, put=__set_m_flPresentCallCpuMs)) float_t  m_flPresentCallCpuMs;

/// @brief Field m_flWaitForPresentCpuMs offset 0x40
 __declspec(property(get=__get_m_flWaitForPresentCpuMs, put=__set_m_flWaitForPresentCpuMs)) float_t  m_flWaitForPresentCpuMs;

/// @brief Field m_flSubmitFrameMs offset 0x44
 __declspec(property(get=__get_m_flSubmitFrameMs, put=__set_m_flSubmitFrameMs)) float_t  m_flSubmitFrameMs;

/// @brief Field m_flWaitGetPosesCalledMs offset 0x48
 __declspec(property(get=__get_m_flWaitGetPosesCalledMs, put=__set_m_flWaitGetPosesCalledMs)) float_t  m_flWaitGetPosesCalledMs;

/// @brief Field m_flNewPosesReadyMs offset 0x4c
 __declspec(property(get=__get_m_flNewPosesReadyMs, put=__set_m_flNewPosesReadyMs)) float_t  m_flNewPosesReadyMs;

/// @brief Field m_flNewFrameReadyMs offset 0x50
 __declspec(property(get=__get_m_flNewFrameReadyMs, put=__set_m_flNewFrameReadyMs)) float_t  m_flNewFrameReadyMs;

/// @brief Field m_flCompositorUpdateStartMs offset 0x54
 __declspec(property(get=__get_m_flCompositorUpdateStartMs, put=__set_m_flCompositorUpdateStartMs)) float_t  m_flCompositorUpdateStartMs;

/// @brief Field m_flCompositorUpdateEndMs offset 0x58
 __declspec(property(get=__get_m_flCompositorUpdateEndMs, put=__set_m_flCompositorUpdateEndMs)) float_t  m_flCompositorUpdateEndMs;

/// @brief Field m_flCompositorRenderStartMs offset 0x5c
 __declspec(property(get=__get_m_flCompositorRenderStartMs, put=__set_m_flCompositorRenderStartMs)) float_t  m_flCompositorRenderStartMs;

/// @brief Field m_HmdPose offset 0x60
 __declspec(property(get=__get_m_HmdPose, put=__set_m_HmdPose)) ::OVR::OpenVR::TrackedDevicePose_t  m_HmdPose;

constexpr void __set_m_nSize(uint32_t  value) ;

constexpr uint32_t& __get_m_nSize() ;

constexpr uint32_t const& __get_m_nSize() const;

constexpr void __set_m_nFrameIndex(uint32_t  value) ;

constexpr uint32_t& __get_m_nFrameIndex() ;

constexpr uint32_t const& __get_m_nFrameIndex() const;

constexpr void __set_m_nNumFramePresents(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumFramePresents() ;

constexpr uint32_t const& __get_m_nNumFramePresents() const;

constexpr void __set_m_nNumMisPresented(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumMisPresented() ;

constexpr uint32_t const& __get_m_nNumMisPresented() const;

constexpr void __set_m_nNumDroppedFrames(uint32_t  value) ;

constexpr uint32_t& __get_m_nNumDroppedFrames() ;

constexpr uint32_t const& __get_m_nNumDroppedFrames() const;

constexpr void __set_m_nReprojectionFlags(uint32_t  value) ;

constexpr uint32_t& __get_m_nReprojectionFlags() ;

constexpr uint32_t const& __get_m_nReprojectionFlags() const;

constexpr void __set_m_flSystemTimeInSeconds(double_t  value) ;

constexpr double_t& __get_m_flSystemTimeInSeconds() ;

constexpr double_t const& __get_m_flSystemTimeInSeconds() const;

constexpr void __set_m_flPreSubmitGpuMs(float_t  value) ;

constexpr float_t& __get_m_flPreSubmitGpuMs() ;

constexpr float_t const& __get_m_flPreSubmitGpuMs() const;

constexpr void __set_m_flPostSubmitGpuMs(float_t  value) ;

constexpr float_t& __get_m_flPostSubmitGpuMs() ;

constexpr float_t const& __get_m_flPostSubmitGpuMs() const;

constexpr void __set_m_flTotalRenderGpuMs(float_t  value) ;

constexpr float_t& __get_m_flTotalRenderGpuMs() ;

constexpr float_t const& __get_m_flTotalRenderGpuMs() const;

constexpr void __set_m_flCompositorRenderGpuMs(float_t  value) ;

constexpr float_t& __get_m_flCompositorRenderGpuMs() ;

constexpr float_t const& __get_m_flCompositorRenderGpuMs() const;

constexpr void __set_m_flCompositorRenderCpuMs(float_t  value) ;

constexpr float_t& __get_m_flCompositorRenderCpuMs() ;

constexpr float_t const& __get_m_flCompositorRenderCpuMs() const;

constexpr void __set_m_flCompositorIdleCpuMs(float_t  value) ;

constexpr float_t& __get_m_flCompositorIdleCpuMs() ;

constexpr float_t const& __get_m_flCompositorIdleCpuMs() const;

constexpr void __set_m_flClientFrameIntervalMs(float_t  value) ;

constexpr float_t& __get_m_flClientFrameIntervalMs() ;

constexpr float_t const& __get_m_flClientFrameIntervalMs() const;

constexpr void __set_m_flPresentCallCpuMs(float_t  value) ;

constexpr float_t& __get_m_flPresentCallCpuMs() ;

constexpr float_t const& __get_m_flPresentCallCpuMs() const;

constexpr void __set_m_flWaitForPresentCpuMs(float_t  value) ;

constexpr float_t& __get_m_flWaitForPresentCpuMs() ;

constexpr float_t const& __get_m_flWaitForPresentCpuMs() const;

constexpr void __set_m_flSubmitFrameMs(float_t  value) ;

constexpr float_t& __get_m_flSubmitFrameMs() ;

constexpr float_t const& __get_m_flSubmitFrameMs() const;

constexpr void __set_m_flWaitGetPosesCalledMs(float_t  value) ;

constexpr float_t& __get_m_flWaitGetPosesCalledMs() ;

constexpr float_t const& __get_m_flWaitGetPosesCalledMs() const;

constexpr void __set_m_flNewPosesReadyMs(float_t  value) ;

constexpr float_t& __get_m_flNewPosesReadyMs() ;

constexpr float_t const& __get_m_flNewPosesReadyMs() const;

constexpr void __set_m_flNewFrameReadyMs(float_t  value) ;

constexpr float_t& __get_m_flNewFrameReadyMs() ;

constexpr float_t const& __get_m_flNewFrameReadyMs() const;

constexpr void __set_m_flCompositorUpdateStartMs(float_t  value) ;

constexpr float_t& __get_m_flCompositorUpdateStartMs() ;

constexpr float_t const& __get_m_flCompositorUpdateStartMs() const;

constexpr void __set_m_flCompositorUpdateEndMs(float_t  value) ;

constexpr float_t& __get_m_flCompositorUpdateEndMs() ;

constexpr float_t const& __get_m_flCompositorUpdateEndMs() const;

constexpr void __set_m_flCompositorRenderStartMs(float_t  value) ;

constexpr float_t& __get_m_flCompositorRenderStartMs() ;

constexpr float_t const& __get_m_flCompositorRenderStartMs() const;

constexpr void __set_m_HmdPose(::OVR::OpenVR::TrackedDevicePose_t  value) ;

constexpr ::OVR::OpenVR::TrackedDevicePose_t& __get_m_HmdPose() ;

constexpr ::OVR::OpenVR::TrackedDevicePose_t const& __get_m_HmdPose() const;

// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFrameIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_flSystemTimeInSeconds", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_flPreSubmitGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flPostSubmitGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flTotalRenderGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorRenderGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorRenderCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorIdleCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flClientFrameIntervalMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flPresentCallCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWaitForPresentCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flSubmitFrameMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWaitGetPosesCalledMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flNewPosesReadyMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flNewFrameReadyMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorUpdateStartMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorUpdateEndMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorRenderStartMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HmdPose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
constexpr Compositor_FrameTiming(uint32_t  m_nSize, uint32_t  m_nFrameIndex, uint32_t  m_nNumFramePresents, uint32_t  m_nNumMisPresented, uint32_t  m_nNumDroppedFrames, uint32_t  m_nReprojectionFlags, double_t  m_flSystemTimeInSeconds, float_t  m_flPreSubmitGpuMs, float_t  m_flPostSubmitGpuMs, float_t  m_flTotalRenderGpuMs, float_t  m_flCompositorRenderGpuMs, float_t  m_flCompositorRenderCpuMs, float_t  m_flCompositorIdleCpuMs, float_t  m_flClientFrameIntervalMs, float_t  m_flPresentCallCpuMs, float_t  m_flWaitForPresentCpuMs, float_t  m_flSubmitFrameMs, float_t  m_flWaitGetPosesCalledMs, float_t  m_flNewPosesReadyMs, float_t  m_flNewFrameReadyMs, float_t  m_flCompositorUpdateStartMs, float_t  m_flCompositorUpdateEndMs, float_t  m_flCompositorRenderStartMs, ::OVR::OpenVR::TrackedDevicePose_t  m_HmdPose) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Compositor_FrameTiming(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xb0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Compositor_FrameTiming()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Compositor_FrameTiming, 0xb0>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_FrameTiming, "OVR.OpenVR", "Compositor_FrameTiming");
