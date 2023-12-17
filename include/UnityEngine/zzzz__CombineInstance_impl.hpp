#pragma once
#include "UnityEngine/zzzz__CombineInstance_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::CombineInstance.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (::UnityEngine::CombineInstance::*)()>(&::UnityEngine::CombineInstance::get_mesh)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cc4670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CombineInstance.set_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::CombineInstance::*)(::UnityEngine::Mesh*)>(&::UnityEngine::CombineInstance::set_mesh)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2cc467c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "set_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CombineInstance.set_subMeshIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::CombineInstance::*)(int32_t)>(&::UnityEngine::CombineInstance::set_subMeshIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc48a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "set_subMeshIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CombineInstance.set_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::CombineInstance::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::CombineInstance::set_transform)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cc48b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::CombineInstance::__set_m_MeshInstanceID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::CombineInstance::__get_m_MeshInstanceID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::CombineInstance::__get_m_MeshInstanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::CombineInstance::__set_m_SubMeshIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::CombineInstance::__get_m_SubMeshIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::CombineInstance::__get_m_SubMeshIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::CombineInstance::__set_m_Transform(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::CombineInstance::__get_m_Transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::CombineInstance::__get_m_Transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::CombineInstance::__set_m_LightmapScaleOffset(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& UnityEngine::CombineInstance::__get_m_LightmapScaleOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::CombineInstance::__get_m_LightmapScaleOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::CombineInstance::__set_m_RealtimeLightmapScaleOffset(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& UnityEngine::CombineInstance::__get_m_RealtimeLightmapScaleOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::CombineInstance::__get_m_RealtimeLightmapScaleOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::Mesh* UnityEngine::CombineInstance::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(*this, ___internal_method);
}
inline void UnityEngine::CombineInstance::set_mesh(::UnityEngine::Mesh*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "set_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::CombineInstance::set_subMeshIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "set_subMeshIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::CombineInstance::set_transform(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CombineInstance>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_MeshInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SubMeshIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RealtimeLightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CombineInstance::CombineInstance(int32_t  m_MeshInstanceID, int32_t  m_SubMeshIndex, ::UnityEngine::Matrix4x4  m_Transform, ::UnityEngine::Vector4  m_LightmapScaleOffset, ::UnityEngine::Vector4  m_RealtimeLightmapScaleOffset) noexcept : ::bs_hook::ValueTypeWrapper<0x68>() {this->m_MeshInstanceID = m_MeshInstanceID;
this->m_SubMeshIndex = m_SubMeshIndex;
this->m_Transform = m_Transform;
this->m_LightmapScaleOffset = m_LightmapScaleOffset;
this->m_RealtimeLightmapScaleOffset = m_RealtimeLightmapScaleOffset;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
