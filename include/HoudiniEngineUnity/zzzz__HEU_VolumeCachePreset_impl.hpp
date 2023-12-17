#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayerPreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCachePreset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCachePreset::*)()>(&::HoudiniEngineUnity::HEU_VolumeCachePreset::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x214e870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__objName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__objName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__objName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__geoName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__geoName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__geoName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__uiExpanded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__uiExpanded()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__uiExpanded() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__volumeLayersPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* HoudiniEngineUnity::HEU_VolumeCachePreset::__get__volumeLayersPresets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*> HoudiniEngineUnity::HEU_VolumeCachePreset::__get__volumeLayersPresets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__terrainDataPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__terrainDataPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__terrainDataPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__tile(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__tile()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__tile() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* HoudiniEngineUnity::HEU_VolumeCachePreset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeCachePreset*>());
}
inline void HoudiniEngineUnity::HEU_VolumeCachePreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
