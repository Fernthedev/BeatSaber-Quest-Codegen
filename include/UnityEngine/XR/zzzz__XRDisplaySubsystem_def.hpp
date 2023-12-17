#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem)
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__LateLatchNode;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRMirrorViewBlitDesc;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderPass;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass);
// Type: ::LateLatchNode
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15641))
// CS Name: ::XRDisplaySubsystem::LateLatchNode
struct CORDL_TYPE __XRDisplaySubsystem__LateLatchNode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____XRDisplaySubsystem__LateLatchNode_Unwrapped
enum struct ____XRDisplaySubsystem__LateLatchNode_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_LeftHand = static_cast<int32_t>(0x1),
__E_RightHand = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Head value: static_cast<int32_t>(0x0)
static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const Head;

/// @brief Field LeftHand value: static_cast<int32_t>(0x1)
static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const LeftHand;

/// @brief Field RightHand value: static_cast<int32_t>(0x2)
static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const RightHand;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____XRDisplaySubsystem__LateLatchNode_Unwrapped () const noexcept {
return std::bit_cast<____XRDisplaySubsystem__LateLatchNode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __XRDisplaySubsystem__LateLatchNode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XRDisplaySubsystem__LateLatchNode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XRDisplaySubsystem__LateLatchNode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
// Type: ::XRRenderPass
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15642))
// CS Name: ::XRDisplaySubsystem::XRRenderPass
struct CORDL_TYPE __XRDisplaySubsystem__XRRenderPass : public ::bs_hook::ValueTypeWrapper<0xd8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd8};

/// @brief Field displaySubsystemInstance offset 0x0
 __declspec(property(get=__get_displaySubsystemInstance, put=__set_displaySubsystemInstance)) ::cordl_internals::intptr_t  displaySubsystemInstance;

/// @brief Field renderPassIndex offset 0x8
 __declspec(property(get=__get_renderPassIndex, put=__set_renderPassIndex)) int32_t  renderPassIndex;

/// @brief Field renderTarget offset 0x10
 __declspec(property(get=__get_renderTarget, put=__set_renderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier  renderTarget;

/// @brief Field renderTargetDesc offset 0x38
 __declspec(property(get=__get_renderTargetDesc, put=__set_renderTargetDesc)) ::UnityEngine::RenderTextureDescriptor  renderTargetDesc;

/// @brief Field hasMotionVectorPass offset 0x6c
 __declspec(property(get=__get_hasMotionVectorPass, put=__set_hasMotionVectorPass)) bool  hasMotionVectorPass;

/// @brief Field motionVectorRenderTarget offset 0x70
 __declspec(property(get=__get_motionVectorRenderTarget, put=__set_motionVectorRenderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier  motionVectorRenderTarget;

/// @brief Field motionVectorRenderTargetDesc offset 0x98
 __declspec(property(get=__get_motionVectorRenderTargetDesc, put=__set_motionVectorRenderTargetDesc)) ::UnityEngine::RenderTextureDescriptor  motionVectorRenderTargetDesc;

/// @brief Field shouldFillOutDepth offset 0xcc
 __declspec(property(get=__get_shouldFillOutDepth, put=__set_shouldFillOutDepth)) bool  shouldFillOutDepth;

/// @brief Field cullingPassIndex offset 0xd0
 __declspec(property(get=__get_cullingPassIndex, put=__set_cullingPassIndex)) int32_t  cullingPassIndex;

constexpr void __set_displaySubsystemInstance(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_displaySubsystemInstance() ;

constexpr ::cordl_internals::intptr_t const& __get_displaySubsystemInstance() const;

constexpr void __set_renderPassIndex(int32_t  value) ;

constexpr int32_t& __get_renderPassIndex() ;

constexpr int32_t const& __get_renderPassIndex() const;

constexpr void __set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __get_renderTarget() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __get_renderTarget() const;

constexpr void __set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr ::UnityEngine::RenderTextureDescriptor& __get_renderTargetDesc() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __get_renderTargetDesc() const;

constexpr void __set_hasMotionVectorPass(bool  value) ;

constexpr bool& __get_hasMotionVectorPass() ;

constexpr bool const& __get_hasMotionVectorPass() const;

constexpr void __set_motionVectorRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __get_motionVectorRenderTarget() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __get_motionVectorRenderTarget() const;

constexpr void __set_motionVectorRenderTargetDesc(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr ::UnityEngine::RenderTextureDescriptor& __get_motionVectorRenderTargetDesc() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __get_motionVectorRenderTargetDesc() const;

constexpr void __set_shouldFillOutDepth(bool  value) ;

constexpr bool& __get_shouldFillOutDepth() ;

constexpr bool const& __get_shouldFillOutDepth() const;

constexpr void __set_cullingPassIndex(int32_t  value) ;

constexpr int32_t& __get_cullingPassIndex() ;

constexpr int32_t const& __get_cullingPassIndex() const;

// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "renderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __XRDisplaySubsystem__XRRenderPass(::cordl_internals::intptr_t  displaySubsystemInstance, int32_t  renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier  renderTarget, ::UnityEngine::RenderTextureDescriptor  renderTargetDesc, bool  hasMotionVectorPass, ::UnityEngine::Rendering::RenderTargetIdentifier  motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor  motionVectorRenderTargetDesc, bool  shouldFillOutDepth, int32_t  cullingPassIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XRDisplaySubsystem__XRRenderPass(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xd8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XRDisplaySubsystem__XRRenderPass()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, 0xd8>, "Size mismatch!");

} // namespace end def UnityEngine::XR
// Type: ::XRMirrorViewBlitDesc
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15643))
// CS Name: ::XRDisplaySubsystem::XRMirrorViewBlitDesc
struct CORDL_TYPE __XRDisplaySubsystem__XRMirrorViewBlitDesc : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field displaySubsystemInstance offset 0x0
 __declspec(property(get=__get_displaySubsystemInstance, put=__set_displaySubsystemInstance)) ::cordl_internals::intptr_t  displaySubsystemInstance;

/// @brief Field nativeBlitAvailable offset 0x8
 __declspec(property(get=__get_nativeBlitAvailable, put=__set_nativeBlitAvailable)) bool  nativeBlitAvailable;

/// @brief Field nativeBlitInvalidStates offset 0x9
 __declspec(property(get=__get_nativeBlitInvalidStates, put=__set_nativeBlitInvalidStates)) bool  nativeBlitInvalidStates;

/// @brief Field blitParamsCount offset 0xc
 __declspec(property(get=__get_blitParamsCount, put=__set_blitParamsCount)) int32_t  blitParamsCount;

constexpr void __set_displaySubsystemInstance(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_displaySubsystemInstance() ;

constexpr ::cordl_internals::intptr_t const& __get_displaySubsystemInstance() const;

constexpr void __set_nativeBlitAvailable(bool  value) ;

constexpr bool& __get_nativeBlitAvailable() ;

constexpr bool const& __get_nativeBlitAvailable() const;

constexpr void __set_nativeBlitInvalidStates(bool  value) ;

constexpr bool& __get_nativeBlitInvalidStates() ;

constexpr bool const& __get_nativeBlitInvalidStates() const;

constexpr void __set_blitParamsCount(int32_t  value) ;

constexpr int32_t& __get_blitParamsCount() ;

constexpr int32_t const& __get_blitParamsCount() const;

// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __XRDisplaySubsystem__XRMirrorViewBlitDesc(::cordl_internals::intptr_t  displaySubsystemInstance, bool  nativeBlitAvailable, bool  nativeBlitInvalidStates, int32_t  blitParamsCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XRDisplaySubsystem__XRMirrorViewBlitDesc(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XRDisplaySubsystem__XRMirrorViewBlitDesc()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode, "UnityEngine.XR", "XRDisplaySubsystem/LateLatchNode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
