#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CommandBufferGOCore_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBufferBlurryScreenGrab)
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__KernelSize;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferBlurryScreenGrab;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandBufferBlurryScreenGrab);
// Type: ::CommandBufferBlurryScreenGrab
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15278))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15276))
// CS Name: ::CommandBufferBlurryScreenGrab*
class CORDL_TYPE CommandBufferBlurryScreenGrab : public ::GlobalNamespace::CommandBufferGOCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::CommandBufferGOCore)]{};

/// @brief Field _kawaseBlurRenderer offset 0x28
 __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer)) ::GlobalNamespace::KawaseBlurRendererSO*  _kawaseBlurRenderer;

/// @brief Field _kernelSize offset 0x30
 __declspec(property(get=__get__kernelSize, put=__set__kernelSize)) ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize  _kernelSize;

/// @brief Field _cameraEvent offset 0x34
 __declspec(property(get=__get__cameraEvent, put=__set__cameraEvent)) ::UnityEngine::Rendering::CameraEvent  _cameraEvent;

/// @brief Field _downsample offset 0x38
 __declspec(property(get=__get__downsample, put=__set__downsample)) int32_t  _downsample;

constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO*  value) ;

constexpr ::GlobalNamespace::KawaseBlurRendererSO* __get__kawaseBlurRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> __get__kawaseBlurRenderer() const;

constexpr void __set__kernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize  value) ;

constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& __get__kernelSize() ;

constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& __get__kernelSize() const;

constexpr void __set__cameraEvent(::UnityEngine::Rendering::CameraEvent  value) ;

constexpr ::UnityEngine::Rendering::CameraEvent& __get__cameraEvent() ;

constexpr ::UnityEngine::Rendering::CameraEvent const& __get__cameraEvent() const;

constexpr void __set__downsample(int32_t  value) ;

constexpr int32_t& __get__downsample() ;

constexpr int32_t const& __get__downsample() const;

static inline void setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>* getStaticF__cameras() ;

/// @brief Method CreateCommandBuffer addr 0x28063e8 size 0xfc virtual true final false
inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera*  camera) ;

/// @brief Method CamerasDict addr 0x28064e4 size 0x58 virtual true final false
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>* CamerasDict() ;

/// @brief Method CommandBufferCameraEvent addr 0x280653c size 0x8 virtual true final false
inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent() ;

static inline ::GlobalNamespace::CommandBufferBlurryScreenGrab* New_ctor() ;

/// @brief Method .ctor addr 0x2806544 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommandBufferBlurryScreenGrab()  = default;
public:


// Fields

// Static field _cameras


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferBlurryScreenGrab, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferBlurryScreenGrab);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferBlurryScreenGrab*, "", "CommandBufferBlurryScreenGrab");
