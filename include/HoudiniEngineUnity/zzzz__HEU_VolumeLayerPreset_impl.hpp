#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayerPreset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeLayerPreset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeLayerPreset::*)()>(&::HoudiniEngineUnity::HEU_VolumeLayerPreset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214e868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__layerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__layerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__layerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__strength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__strength()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__strength() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__uiExpanded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__uiExpanded()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__uiExpanded() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__tile(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__tile()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__tile() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline ::HoudiniEngineUnity::HEU_VolumeLayerPreset* HoudiniEngineUnity::HEU_VolumeLayerPreset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>());
}
inline void HoudiniEngineUnity::HEU_VolumeLayerPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
