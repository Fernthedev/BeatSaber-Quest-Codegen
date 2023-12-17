#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolume_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolumeLayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferVolume._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferVolume::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferVolume::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x21abc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolume*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__tileIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__tileIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__tileIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__splatLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* HoudiniEngineUnity::HEU_LoadBufferVolume::__get__splatLayers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*> HoudiniEngineUnity::HEU_LoadBufferVolume::__get__splatLayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightMapWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMapWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMapWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightMapHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMapHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMapHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightMap(Il2CppObject*  value)  {
::cordl_internals::setInstanceField<Il2CppObject*, 0x48>(this, std::forward<Il2CppObject*>(value));
}
constexpr Il2CppObject* HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMap()  {
return ::cordl_internals::getInstanceField<Il2CppObject*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMap() const {
return ::cordl_internals::getInstanceField<Il2CppObject*, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__splatMaps(Il2CppObject*  value)  {
::cordl_internals::setInstanceField<Il2CppObject*, 0x50>(this, std::forward<Il2CppObject*>(value));
}
constexpr Il2CppObject* HoudiniEngineUnity::HEU_LoadBufferVolume::__get__splatMaps()  {
return ::cordl_internals::getInstanceField<Il2CppObject*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> HoudiniEngineUnity::HEU_LoadBufferVolume::__get__splatMaps() const {
return ::cordl_internals::getInstanceField<Il2CppObject*, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainSizeX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainSizeX()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainSizeX() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainSizeY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainSizeY()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainSizeY() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightRange(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightRange()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightRange() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x64>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainDataPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainDataPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainDataPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainDataExportPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainDataExportPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainDataExportPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_VolumeScatterTrees*, 0x80>(this, std::forward<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees* HoudiniEngineUnity::HEU_LoadBufferVolume::__get__scatterTrees()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_VolumeScatterTrees*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_VolumeScatterTrees*> HoudiniEngineUnity::HEU_LoadBufferVolume::__get__scatterTrees() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_VolumeScatterTrees*, 0x80>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__detailPrototypes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*, 0x88>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailPrototypes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*> HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailPrototypes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*, 0x88>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__detailMaps(::System::Collections::Generic::List_1<Il2CppObject*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<Il2CppObject*>*, 0x90>(this, std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<Il2CppObject*>* HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailMaps()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<Il2CppObject*>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<Il2CppObject*>*> HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailMaps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<Il2CppObject*>*, 0x90>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_DetailProperties*, 0x98>(this, std::forward<::HoudiniEngineUnity::HEU_DetailProperties*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_DetailProperties* HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailProperties()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_DetailProperties*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailProperties*> HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailProperties() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_DetailProperties*, 0x98>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__set__specifiedTerrainMaterialName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__specifiedTerrainMaterialName()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolume::__get__specifiedTerrainMaterialName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferVolume* HoudiniEngineUnity::HEU_LoadBufferVolume::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_LoadBufferVolume*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolume*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
