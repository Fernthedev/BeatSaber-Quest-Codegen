#pragma once
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
constexpr void GlobalNamespace::OVRMeshData::__set_mesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* GlobalNamespace::OVRMeshData::__get_mesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> GlobalNamespace::OVRMeshData::__get_mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRMeshData::__set_material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::OVRMeshData::__get_material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::OVRMeshData::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRMeshData::__set_baseAttributes(::GlobalNamespace::OVRMeshAttributes  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRMeshAttributes, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRMeshAttributes>(value));
}
constexpr ::GlobalNamespace::OVRMeshAttributes& GlobalNamespace::OVRMeshData::__get_baseAttributes()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRMeshAttributes, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::OVRMeshAttributes const& GlobalNamespace::OVRMeshData::__get_baseAttributes() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRMeshAttributes, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRMeshData::__set_morphTargets(::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>& GlobalNamespace::OVRMeshData::__get_morphTargets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*> const& GlobalNamespace::OVRMeshData::__get_morphTargets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "baseAttributes", ty: "::GlobalNamespace::OVRMeshAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "morphTargets", ty: "::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData(::UnityEngine::Mesh*  mesh, ::UnityEngine::Material*  material, ::GlobalNamespace::OVRMeshAttributes  baseAttributes, ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>  morphTargets) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->mesh = mesh;
this->material = material;
this->baseAttributes = baseAttributes;
this->morphTargets = morphTargets;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
