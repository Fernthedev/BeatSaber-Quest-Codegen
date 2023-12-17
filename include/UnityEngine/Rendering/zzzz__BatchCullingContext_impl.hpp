#pragma once
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchCullingContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchCullingContext::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>, ::UnityEngine::Rendering::LODParameters, ::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::Rendering::BatchCullingContext::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ceec9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchCullingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LODParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_cullingPlanes(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>& UnityEngine::Rendering::BatchCullingContext::__get_cullingPlanes()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> const& UnityEngine::Rendering::BatchCullingContext::__get_cullingPlanes() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_batchVisibility(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>& UnityEngine::Rendering::BatchCullingContext::__get_batchVisibility()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> const& UnityEngine::Rendering::BatchCullingContext::__get_batchVisibility() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_visibleIndices(::Unity::Collections::NativeArray_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<int32_t>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<int32_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::BatchCullingContext::__get_visibleIndices()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<int32_t>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::BatchCullingContext::__get_visibleIndices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<int32_t>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_visibleIndicesY(::Unity::Collections::NativeArray_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::NativeArray_1<int32_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::BatchCullingContext::__get_visibleIndicesY()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::BatchCullingContext::__get_visibleIndicesY() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_lodParameters(::UnityEngine::Rendering::LODParameters  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::LODParameters, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Rendering::LODParameters>(value));
}
constexpr ::UnityEngine::Rendering::LODParameters& UnityEngine::Rendering::BatchCullingContext::__get_lodParameters()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::LODParameters, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Rendering::LODParameters const& UnityEngine::Rendering::BatchCullingContext::__get_lodParameters() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::LODParameters, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_cullingMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x5c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::BatchCullingContext::__get_cullingMatrix()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x5c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::BatchCullingContext::__get_cullingMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x5c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_nearPlane(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Rendering::BatchCullingContext::__get_nearPlane()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Rendering::BatchCullingContext::__get_nearPlane() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::Rendering::BatchCullingContext::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  inOutBatchVisibility, ::Unity::Collections::NativeArray_1<int32_t>  outVisibleIndices, ::Unity::Collections::NativeArray_1<int32_t>  outVisibleIndicesY, ::UnityEngine::Rendering::LODParameters  inLodParameters, ::UnityEngine::Matrix4x4  inCullingMatrix, float_t  inNearPlane)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchCullingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LODParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inCullingPlanes, inOutBatchVisibility, outVisibleIndices, outVisibleIndicesY, inLodParameters, inCullingMatrix, inNearPlane);
}
// Ctor Parameters [CppParam { name: "cullingPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchVisibility", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndicesY", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodParameters", ty: "::UnityEngine::Rendering::LODParameters", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingContext::BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  cullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  batchVisibility, ::Unity::Collections::NativeArray_1<int32_t>  visibleIndices, ::Unity::Collections::NativeArray_1<int32_t>  visibleIndicesY, ::UnityEngine::Rendering::LODParameters  lodParameters, ::UnityEngine::Matrix4x4  cullingMatrix, float_t  nearPlane) noexcept : ::bs_hook::ValueTypeWrapper<0xa0>() {this->cullingPlanes = cullingPlanes;
this->batchVisibility = batchVisibility;
this->visibleIndices = visibleIndices;
this->visibleIndicesY = visibleIndicesY;
this->lodParameters = lodParameters;
this->cullingMatrix = cullingMatrix;
this->nearPlane = nearPlane;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
