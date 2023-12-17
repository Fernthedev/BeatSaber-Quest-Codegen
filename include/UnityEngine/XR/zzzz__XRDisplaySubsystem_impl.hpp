#pragma once
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
constexpr void UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__XRDisplaySubsystem__LateLatchNode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode  UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::Head{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode  UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::LeftHand{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode  UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::RightHand{static_cast<int32_t>(0x2)};
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_displaySubsystemInstance(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_displaySubsystemInstance()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_displaySubsystemInstance() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_renderPassIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_renderPassIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_renderPassIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_renderTarget()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_renderTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTextureDescriptor, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::RenderTextureDescriptor>(value));
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_renderTargetDesc()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTextureDescriptor, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_renderTargetDesc() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTextureDescriptor, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_hasMotionVectorPass(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_hasMotionVectorPass()  {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_hasMotionVectorPass() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_motionVectorRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_motionVectorRenderTarget()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_motionVectorRenderTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_motionVectorRenderTargetDesc(::UnityEngine::RenderTextureDescriptor  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTextureDescriptor, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::RenderTextureDescriptor>(value));
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_motionVectorRenderTargetDesc()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTextureDescriptor, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_motionVectorRenderTargetDesc() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTextureDescriptor, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_shouldFillOutDepth(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xcc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_shouldFillOutDepth()  {
return ::cordl_internals::getInstanceField<bool, 0xcc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_shouldFillOutDepth() const {
return ::cordl_internals::getInstanceField<bool, 0xcc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__set_cullingPassIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_cullingPassIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__get_cullingPassIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__XRDisplaySubsystem__XRRenderPass(::cordl_internals::intptr_t  displaySubsystemInstance, int32_t  renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier  renderTarget, ::UnityEngine::RenderTextureDescriptor  renderTargetDesc, bool  hasMotionVectorPass, ::UnityEngine::Rendering::RenderTargetIdentifier  motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor  motionVectorRenderTargetDesc, bool  shouldFillOutDepth, int32_t  cullingPassIndex) noexcept : ::bs_hook::ValueTypeWrapper<0xd8>() {this->displaySubsystemInstance = displaySubsystemInstance;
this->renderPassIndex = renderPassIndex;
this->renderTarget = renderTarget;
this->renderTargetDesc = renderTargetDesc;
this->hasMotionVectorPass = hasMotionVectorPass;
this->motionVectorRenderTarget = motionVectorRenderTarget;
this->motionVectorRenderTargetDesc = motionVectorRenderTargetDesc;
this->shouldFillOutDepth = shouldFillOutDepth;
this->cullingPassIndex = cullingPassIndex;
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_displaySubsystemInstance(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_displaySubsystemInstance()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_displaySubsystemInstance() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_nativeBlitAvailable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_nativeBlitAvailable()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_nativeBlitAvailable() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_nativeBlitInvalidStates(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_nativeBlitInvalidStates()  {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_nativeBlitInvalidStates() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_blitParamsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_blitParamsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_blitParamsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__XRDisplaySubsystem__XRMirrorViewBlitDesc(::cordl_internals::intptr_t  displaySubsystemInstance, bool  nativeBlitAvailable, bool  nativeBlitInvalidStates, int32_t  blitParamsCount) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->displaySubsystemInstance = displaySubsystemInstance;
this->nativeBlitAvailable = nativeBlitAvailable;
this->nativeBlitInvalidStates = nativeBlitInvalidStates;
this->blitParamsCount = blitParamsCount;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
