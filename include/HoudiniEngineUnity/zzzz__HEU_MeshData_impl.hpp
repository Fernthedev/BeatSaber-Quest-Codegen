#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshData_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshData::*)()>(&::HoudiniEngineUnity::HEU_MeshData::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x21cffb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__indices(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* HoudiniEngineUnity::HEU_MeshData::__get__indices()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> HoudiniEngineUnity::HEU_MeshData::__get__indices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HoudiniEngineUnity::HEU_MeshData::__get__vertices()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> HoudiniEngineUnity::HEU_MeshData::__get__vertices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Color32>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>* HoudiniEngineUnity::HEU_MeshData::__get__colors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Color32>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color32>*> HoudiniEngineUnity::HEU_MeshData::__get__colors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Color32>*, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HoudiniEngineUnity::HEU_MeshData::__get__normals()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> HoudiniEngineUnity::HEU_MeshData::__get__normals() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* HoudiniEngineUnity::HEU_MeshData::__get__tangents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> HoudiniEngineUnity::HEU_MeshData::__get__tangents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__uvs(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>, 0x38>(this, std::forward<::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>>(value));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>& HoudiniEngineUnity::HEU_MeshData::__get__uvs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>, 0x38>(this);
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> const& HoudiniEngineUnity::HEU_MeshData::__get__uvs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__triangleNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x40>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HoudiniEngineUnity::HEU_MeshData::__get__triangleNormals()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> HoudiniEngineUnity::HEU_MeshData::__get__triangleNormals() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__pointIndexToMeshIndexMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x48>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* HoudiniEngineUnity::HEU_MeshData::__get__pointIndexToMeshIndexMap()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*> HoudiniEngineUnity::HEU_MeshData::__get__pointIndexToMeshIndexMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__set__meshTopology(::UnityEngine::MeshTopology  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshTopology, 0x50>(this, std::forward<::UnityEngine::MeshTopology>(value));
}
constexpr ::UnityEngine::MeshTopology& HoudiniEngineUnity::HEU_MeshData::__get__meshTopology()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshTopology, 0x50>(this);
}
constexpr ::UnityEngine::MeshTopology const& HoudiniEngineUnity::HEU_MeshData::__get__meshTopology() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshTopology, 0x50>(this);
}
inline ::HoudiniEngineUnity::HEU_MeshData* HoudiniEngineUnity::HEU_MeshData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_MeshData*>());
}
inline void HoudiniEngineUnity::HEU_MeshData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
