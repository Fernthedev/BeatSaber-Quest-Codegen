#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionSyncData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionSyncData_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_SessionSyncData__Status::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_SessionSyncData__Status::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_SessionSyncData__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status::__HEU_SessionSyncData__Status(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status  HoudiniEngineUnity::__HEU_SessionSyncData__Status::Stopped{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status  HoudiniEngineUnity::__HEU_SessionSyncData__Status::Started{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status  HoudiniEngineUnity::__HEU_SessionSyncData__Status::Connecting{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status  HoudiniEngineUnity::__HEU_SessionSyncData__Status::Initializing{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status  HoudiniEngineUnity::__HEU_SessionSyncData__Status::Connected{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionSyncData.get_SyncStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_SessionSyncData__Status (::HoudiniEngineUnity::HEU_SessionSyncData::*)()>(&::HoudiniEngineUnity::HEU_SessionSyncData::get_SyncStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21a53d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                            "get_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionSyncData.set_SyncStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionSyncData::*)(::HoudiniEngineUnity::__HEU_SessionSyncData__Status)>(&::HoudiniEngineUnity::HEU_SessionSyncData::set_SyncStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a53e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                            "set_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_SessionSyncData__Status>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionSyncData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionSyncData::*)()>(&::HoudiniEngineUnity::HEU_SessionSyncData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21a2764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__status(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__status()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__status() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__timeLastUpdate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeLastUpdate()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeLastUpdate() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__timeStartConnection(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeStartConnection()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeStartConnection() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__newNodeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_SessionSyncData::__get__newNodeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_SessionSyncData::__get__newNodeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__nodeTypeIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__nodeTypeIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__nodeTypeIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__validForConnection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_SessionSyncData::__get__validForConnection()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_SessionSyncData::__get__validForConnection() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportHAPI(::HoudiniEngineUnity::HAPI_Viewport  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_Viewport, 0x30>(this, std::forward<::HoudiniEngineUnity::HAPI_Viewport>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportHAPI()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Viewport, 0x30>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport const& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportHAPI() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Viewport, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportLocal(::HoudiniEngineUnity::HAPI_Viewport  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_Viewport, 0x48>(this, std::forward<::HoudiniEngineUnity::HAPI_Viewport>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportLocal()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Viewport, 0x48>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport const& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportLocal() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Viewport, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportJustUpdated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportJustUpdated()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportJustUpdated() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__syncInfo(::HoudiniEngineUnity::HAPI_SessionSyncInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_SessionSyncInfo, 0x61>(this, std::forward<::HoudiniEngineUnity::HAPI_SessionSyncInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo& HoudiniEngineUnity::HEU_SessionSyncData::__get__syncInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_SessionSyncInfo, 0x61>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo const& HoudiniEngineUnity::HEU_SessionSyncData::__get__syncInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_SessionSyncInfo, 0x61>(this);
}
inline ::HoudiniEngineUnity::__HEU_SessionSyncData__Status HoudiniEngineUnity::HEU_SessionSyncData::get_SyncStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                            "get_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_SessionSyncData__Status, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionSyncData::set_SyncStatus(::HoudiniEngineUnity::__HEU_SessionSyncData__Status  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                            "set_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_SessionSyncData__Status>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_SessionSyncData* HoudiniEngineUnity::HEU_SessionSyncData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_SessionSyncData*>());
}
inline void HoudiniEngineUnity::HEU_SessionSyncData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
