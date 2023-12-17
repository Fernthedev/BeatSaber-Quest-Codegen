#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferMesh._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferMesh::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21abc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferMesh*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__geoCache(::HoudiniEngineUnity::HEU_GenerateGeoCache*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_GenerateGeoCache*, 0x30>(this, std::forward<::HoudiniEngineUnity::HEU_GenerateGeoCache*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_GenerateGeoCache* HoudiniEngineUnity::HEU_LoadBufferMesh::__get__geoCache()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GenerateGeoCache*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GenerateGeoCache*> HoudiniEngineUnity::HEU_LoadBufferMesh::__get__geoCache() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GenerateGeoCache*, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__LODGroupMeshes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* HoudiniEngineUnity::HEU_LoadBufferMesh::__get__LODGroupMeshes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> HoudiniEngineUnity::HEU_LoadBufferMesh::__get__LODGroupMeshes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__defaultMaterialKey(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__defaultMaterialKey()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__defaultMaterialKey() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bGenerateUVs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateUVs()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateUVs() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bGenerateTangents(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x45>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateTangents()  {
return ::cordl_internals::getInstanceField<bool, 0x45>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateTangents() const {
return ::cordl_internals::getInstanceField<bool, 0x45>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bGenerateNormals(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x46>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateNormals()  {
return ::cordl_internals::getInstanceField<bool, 0x46>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x46>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bPartInstanced(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x47>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bPartInstanced()  {
return ::cordl_internals::getInstanceField<bool, 0x47>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bPartInstanced() const {
return ::cordl_internals::getInstanceField<bool, 0x47>(this);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferMesh* HoudiniEngineUnity::HEU_LoadBufferMesh::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_LoadBufferMesh*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferMesh*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
