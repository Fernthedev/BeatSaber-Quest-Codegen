#pragma once
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
constexpr void GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState::__LevelDataAssetDownloadUpdate__AssetDownloadingState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState  GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState::PreparingToDownload{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState  GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState::Downloading{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState  GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState::Completed{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::LevelDataAssetDownloadUpdate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelDataAssetDownloadUpdate::*)(::StringW, uint32_t, uint32_t, ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState)>(&::GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x234cdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_levelID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_levelID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_bytesTotal(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_bytesTotal()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_bytesTotal() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_bytesTransferred(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_bytesTransferred()  {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_bytesTransferred() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_assetDownloadingState(::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState>(value));
}
constexpr ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_assetDownloadingState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState const& GlobalNamespace::LevelDataAssetDownloadUpdate::__get_assetDownloadingState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor(::StringW  levelID, uint32_t  bytesTotal, uint32_t  bytesTransferred, ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState  assetDownloadingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelID, bytesTotal, bytesTransferred, assetDownloadingState);
}
// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetDownloadingState", ty: "::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate::LevelDataAssetDownloadUpdate(::StringW  levelID, uint32_t  bytesTotal, uint32_t  bytesTransferred, ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState  assetDownloadingState) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->levelID = levelID;
this->bytesTotal = bytesTotal;
this->bytesTransferred = bytesTransferred;
this->assetDownloadingState = assetDownloadingState;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
