#pragma once
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingJobsFence(::Unity::Jobs::JobHandle  value)  {
::cordl_internals::setInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Jobs::JobHandle>(value));
}
constexpr ::Unity::Jobs::JobHandle& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingJobsFence()  {
return ::cordl_internals::getInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Jobs::JobHandle const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingJobsFence() const {
return ::cordl_internals::getInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingMatrix()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingPlanes(::cordl_internals::Ptr<::UnityEngine::Plane>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::UnityEngine::Plane>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::UnityEngine::Plane>>(value));
}
constexpr ::cordl_internals::Ptr<::UnityEngine::Plane>& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingPlanes()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::Plane>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::UnityEngine::Plane> const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingPlanes() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::Plane>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_batchVisibility(::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>>(value));
}
constexpr ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>& UnityEngine::Rendering::BatchRendererCullingOutput::__get_batchVisibility()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility> const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_batchVisibility() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_visibleIndices(::cordl_internals::Ptr<int32_t>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<int32_t>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<int32_t>>(value));
}
constexpr ::cordl_internals::Ptr<int32_t>& UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndices()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<int32_t> const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndices() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_visibleIndicesY(::cordl_internals::Ptr<int32_t>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<int32_t>, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<int32_t>>(value));
}
constexpr ::cordl_internals::Ptr<int32_t>& UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndicesY()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<int32_t> const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndicesY() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingPlanesCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingPlanesCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingPlanesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_batchVisibilityCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::BatchRendererCullingOutput::__get_batchVisibilityCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_batchVisibilityCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_visibleIndicesCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndicesCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndicesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchRendererCullingOutput::__set_nearPlane(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Rendering::BatchRendererCullingOutput::__get_nearPlane()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Rendering::BatchRendererCullingOutput::__get_nearPlane() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlanes", ty: "::cordl_internals::Ptr<::UnityEngine::Plane>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "batchVisibility", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "visibleIndices", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "visibleIndicesY", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cullingPlanesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchVisibilityCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndicesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput(::Unity::Jobs::JobHandle  cullingJobsFence, ::UnityEngine::Matrix4x4  cullingMatrix, ::cordl_internals::Ptr<::UnityEngine::Plane>  cullingPlanes, ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>  batchVisibility, ::cordl_internals::Ptr<int32_t>  visibleIndices, ::cordl_internals::Ptr<int32_t>  visibleIndicesY, int32_t  cullingPlanesCount, int32_t  batchVisibilityCount, int32_t  visibleIndicesCount, float_t  nearPlane) noexcept : ::bs_hook::ValueTypeWrapper<0x80>() {this->cullingJobsFence = cullingJobsFence;
this->cullingMatrix = cullingMatrix;
this->cullingPlanes = cullingPlanes;
this->batchVisibility = batchVisibility;
this->visibleIndices = visibleIndices;
this->visibleIndicesY = visibleIndicesY;
this->cullingPlanesCount = cullingPlanesCount;
this->batchVisibilityCount = batchVisibilityCount;
this->visibleIndicesCount = visibleIndicesCount;
this->nearPlane = nearPlane;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
