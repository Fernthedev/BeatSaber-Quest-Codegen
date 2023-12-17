#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PreAssetEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PreAssetEventData::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::HoudiniEngineUnity::HEU_AssetEventType)>(&::HoudiniEngineUnity::HEU_PreAssetEventData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x214e388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetEventType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_PreAssetEventData::__set_Asset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x10>(this, std::forward<::HoudiniEngineUnity::HEU_HoudiniAsset*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_PreAssetEventData::__get_Asset()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> HoudiniEngineUnity::HEU_PreAssetEventData::__get_Asset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_PreAssetEventData::__set_AssetType(::HoudiniEngineUnity::HEU_AssetEventType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_AssetEventType, 0x18>(this, std::forward<::HoudiniEngineUnity::HEU_AssetEventType>(value));
}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType& HoudiniEngineUnity::HEU_PreAssetEventData::__get_AssetType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetEventType, 0x18>(this);
}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType const& HoudiniEngineUnity::HEU_PreAssetEventData::__get_AssetType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetEventType, 0x18>(this);
}
inline ::HoudiniEngineUnity::HEU_PreAssetEventData* HoudiniEngineUnity::HEU_PreAssetEventData::New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::HoudiniEngineUnity::HEU_AssetEventType  assetType)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_PreAssetEventData*>(asset, assetType));
}
inline void HoudiniEngineUnity::HEU_PreAssetEventData::_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::HoudiniEngineUnity::HEU_AssetEventType  assetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, asset, assetType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
