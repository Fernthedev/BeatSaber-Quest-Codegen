#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__BakedEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstanceInputUIState_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_RecookPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetSerializedMetaData_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__CookedEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__ReloadEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BakedDataEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::__HEU_HoudiniAsset__HEU_AssetType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType  HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_INVALID{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType  HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_HDA{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType  HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_CURVE{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType  HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_INPUT{static_cast<int32_t>(0x3)};
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::__HEU_HoudiniAsset__AssetBuildAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::RELOAD{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::COOK{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::INVALID{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::STRIP_HEDATA{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::DUPLICATE{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::RESET_PARAMS{static_cast<int32_t>(0x6)};
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::__HEU_HoudiniAsset__AssetCookStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::COOKING{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::POSTCOOK{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::LOADING{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::POSTLOAD{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::PRELOAD{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::SELECT_SUBASSET{static_cast<int32_t>(0x6)};
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::__HEU_HoudiniAsset__AssetCookResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::SUCCESS{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::ERRORED{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x216d018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)()>(&::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x216d0d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x216d0e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::IAsyncResult*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216d108;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate* HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>(object, method));
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::__HEU_HoudiniAsset__AssetInstantiationMethod(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::DEFAULT{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::DUPLICATED{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod  HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::UNDO{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::*)()>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0._BakeToExistingPrefab_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::*)(::UnityEngine::Transform*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_BakeToExistingPrefab_b__0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x216d11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(),
                            "<BakeToExistingPrefab>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::__set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::__get_previousTransformValues()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::__get_previousTransformValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*, 0x10>(this);
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0* HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>());
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_BakeToExistingPrefab_b__0(::UnityEngine::Transform*  trans)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(),
                            "<BakeToExistingPrefab>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, trans);
}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)()>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidCurves_b__309_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_Curve*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidCurves_b__309_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidCurves>b__309_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_ObjectNode*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidLists>b__364_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_Curve*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidLists>b__364_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_MaterialData*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidLists>b__364_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9(::HoudiniEngineUnity::__HEU_HoudiniAsset____c*  value)  {
::cordl_internals::setStaticField<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(std::forward<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>(value));
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__309_0(::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*, "<>9__309_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__309_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*, "<>9__309_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__364_0(::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*,bool>*, "<>9__364_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*,bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*,bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__364_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*,bool>*, "<>9__364_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__364_1(::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*, "<>9__364_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__364_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*,bool>*, "<>9__364_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__364_2(::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*,bool>*, "<>9__364_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*,bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*,bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__364_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*,bool>*, "<>9__364_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c* HoudiniEngineUnity::__HEU_HoudiniAsset____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>());
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidCurves_b__309_0(::HoudiniEngineUnity::HEU_Curve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidCurves>b__309_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, curve);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_0(::HoudiniEngineUnity::HEU_ObjectNode*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidLists>b__364_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_1(::HoudiniEngineUnity::HEU_Curve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidLists>b__364_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, curve);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_2(::HoudiniEngineUnity::HEU_MaterialData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(),
                            "<ClearInvalidLists>b__364_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, data);
}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::*)()>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0._CopyPropertiesTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::*)(::HoudiniEngineUnity::HEU_Curve*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_CopyPropertiesTo_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x216d40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(),
                            "<CopyPropertiesTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__set_newAsset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x10>(this, std::forward<::HoudiniEngineUnity::HEU_HoudiniAsset*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_newAsset()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_newAsset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x10>(this);
}
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__set_i(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_i()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_i() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__set___9__0(::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*  value)  {
::cordl_internals::setInstanceField<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*, 0x20>(this, std::forward<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*>(value));
}
constexpr ::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>* HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get___9__0()  {
return ::cordl_internals::getInstanceField<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*> HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get___9__0() const {
return ::cordl_internals::getInstanceField<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*, 0x20>(this);
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0* HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>());
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_CopyPropertiesTo_b__0(::HoudiniEngineUnity::HEU_Curve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(),
                            "<CopyPropertiesTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, curve);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_AssetInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x215bd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_NodeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_NodeInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x215bd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_NodeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetOpName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetOpName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetHelp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetHelp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformInputCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_TransformInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GeoInputCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GeoInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_LoadAssetFromMemory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_LoadAssetFromMemory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AlwaysOverwriteOnLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AlwaysOverwriteOnLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandleCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_HandleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_OwnerGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2159400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_OwnerGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_RootGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_RootGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Parameters* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SubassetNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SubassetNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SessionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_WarnedPrefabNotSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_WarnedPrefabNotSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bdbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_InstanceInputUIState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InstanceInputUIState* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_InstanceInputUIState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PushTransformToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PushTransformToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformChangeTriggersCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_TransformChangeTriggersCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CookingTriggersDownCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CookingTriggersDownCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AutoCookOnParameterChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AutoCookOnParameterChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_IgnoreNonDisplayNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_IgnoreNonDisplayNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateMeshUsingPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateMeshUsingPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_UseLODGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_UseLODGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SplitGeosByGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SplitGeosByGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionSyncAutoCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215beb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SessionSyncAutoCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_BakeUpdateKeepPreviousTransformValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_BakeUpdateKeepPreviousTransformValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PauseCooking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PauseCooking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveEditorEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveEditorEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDrawCollision
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDrawCollision
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Collider*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawLayerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurveDrawLayerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::LayerMask)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDisableScaleRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDisableScaleRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveCookOnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveCookOnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodeDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodeDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(float_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandlesEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_HandlesEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_EditableNodesToolsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_EditableNodesToolsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_ToolsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ToolsInfo* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bfa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_ToolsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SerializedMetaData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AssetSerializedMetaData* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SerializedMetaData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PendingAutoCookOnMouseRelease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PendingAutoCookOnMouseRelease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetupAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType, ::StringW, ::UnityEngine::GameObject*, ::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x215bfc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetupAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpAndDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpAndDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x215c340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CleanUpAndDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetSavedInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x215c640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsAssetSavedInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvalidateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215c39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvalidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AssetUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PostAssetUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "PostAssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestResetParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestResetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestReload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestReload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x214be64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestBakeInPlace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x215c674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestBakeInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearBuildRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x215c68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearBuildRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasValidAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x215c69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HasValidAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x215c6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ProcessRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeReloadEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x215d43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvokeReloadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x215cbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "StartRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.FinishRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x215cd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "FinishRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RecookAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x215f3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RecookAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RecookBlocking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RecookBlocking)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x215fb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RecookBlocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DoPostCookWork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DoPostCookWork)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x215ff4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DoPostCookWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsValidForInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(ByRef<::StringW>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21600c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsValidForInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2160138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ExecutePostCookCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x215faf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ExecutePostCookCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokePostCookEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2160168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvokePostCookEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InternalStartRecook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x215f4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InternalStartRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InternalSetAssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InternalSetAssetID)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x215d5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InternalSetAssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCookStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus, ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215d2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCookStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2160ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessPoskCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2160ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ProcessPoskCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartHoudiniCookNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2160e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "StartHoudiniCookNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessHoudiniCookStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x215fcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ProcessHoudiniCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DoesAssetRequireRecook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x21621dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DoesAssetRequireRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteSessionDataOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21625cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DeleteSessionDataOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAllGeneratedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x215c3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DeleteAllGeneratedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2162918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CleanUpInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAssetCacheData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2162cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DeleteAssetCacheData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x215e560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DownloadParameterPresetFromHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x216126c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DownloadParameterPresetFromHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadParameterPresetToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2160410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadParameterPresetToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateParameterInputsToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21605ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateParameterInputsToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetFileWithSubasset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x215d774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "LoadAssetFileWithSubasset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAndCookAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ByRef<int32_t>, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x215dd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateAndCookAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAssetInputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x215e060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateAssetInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadCurvesParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2160690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadCurvesParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadAttributeValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x2160878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadAttributeValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncDirtyAttributesToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2161b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SyncDirtyAttributesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2160ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasInputNodeTransformChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2162ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyInputNodesCookFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x215f284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NotifyInputNodesCookFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x215e774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateAllObjectNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x216155c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateAllObjectNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjectNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>, ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x216316c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateObjectNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateObjectsGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x215e8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateObjectsGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateAttributesStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x215ed48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x215ea40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x215ee9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2162bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CleanUpHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandleByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Handle* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2163244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetHandleByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21633d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21633dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NumHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_Transform (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2163428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetObjectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectWithID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2163664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetObjectWithID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeBakedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2163734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvokeBakedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CloneAssetWithoutHDA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(ByRef<::StringW>, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x2163880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CloneAssetWithoutHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2163fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToNewPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewStandalone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x21643c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToNewStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x2164588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToExistingPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingStandalone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone)> {
  constexpr static std::size_t size = 0xc14;
  constexpr static std::size_t addrs = 0x2164bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToExistingStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyUpstreamCooked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21657dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NotifyUpstreamCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ConnectToUpstream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2165808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ConnectToUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisconnectFromUpstream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2165918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DisconnectFromUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddDownstreamConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2165898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveDownstreamConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21659a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearAllUpstreamConnections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x21626a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearAllUpstreamConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateInputsOnAssetRecreation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21602bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateInputsOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReconnectInputsUpstreamNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2165a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ReconnectInputsUpstreamNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHoudiniTransformAndApply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2165b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetHoudiniTransformAndApply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadUnityTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x215f028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadUnityTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_MaterialData* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2165e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2166004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearMaterialCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2162630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateHoudiniMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2161304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateHoudiniMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveUnusedMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x2161d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveUnusedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x216609c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValidInHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x215d590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsAssetValidInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21661e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsAssetValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasTransformChangedSinceLastUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x216621c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HasTransformChangedSinceLastUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetClonableParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2163e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x215d2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21662b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGeoNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2166404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetOutputGeoNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInternalHDAPartWithGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2166558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInternalHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2166704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Curve* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x216670c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2162d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearInvalidCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetEditableCurveCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x21668d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetEditableCurveCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x215134c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x215789c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurveDrawCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2166a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurveDrawCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2166b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearCurveDrawColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2166b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2166bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2166bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2162e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAssetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodeByIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2166d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInputNodeByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetNonParameterInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2166dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetNonParameterInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2158f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2157844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InputNodeNotifyRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2166ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InputNodeNotifyRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCacheCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2167000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetVolumeCacheCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCaches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2167048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetVolumeCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddVolumeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2167050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x215b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributesStores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2167124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAttributesStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumAttributeStores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x216712c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NumAttributeStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributesStore* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2167178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2167308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2162fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReorderAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x21674a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ReorderAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAPartWithGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData* (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21675b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetSceneHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAAssetFromGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21676f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetSceneHDAAssetFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x216783c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsHoudiniAssetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x216798c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsHoudiniAssetRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PopulateObjectInstanceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2167a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "PopulateObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddToAssetDBCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, ::UnityEngine::Object*, ::StringW, ByRef<::UnityEngine::Object*>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2167ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddToAssetDBCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurvesVisibilityInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2167c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetCurvesVisibilityInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x214be68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAssetSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetValidAssetCacheFolderPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x216600c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetValidAssetCacheFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HideAllGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2167dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HideAllGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2167f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CalculateVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisableAllColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2168084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DisableAllColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateColliderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x21681d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DuplicateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x216831c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DuplicateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectNodeByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x214c844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetObjectNodeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetMaterialOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x216920c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ResetMaterialOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetParametersToDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2169388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ResetParametersToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AssetPreset* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x214efec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAssetPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetPresetAndCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AssetPreset*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x214fe40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "LoadAssetPresetAndCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyRecookPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2161cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ApplyRecookPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyInputPresets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2169778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ApplyInputPresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCachePreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_VolumeCachePreset* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, ::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2169fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCachePreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCachePreset*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x216a1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyVolumeCachePresets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x2169b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ApplyVolumeCachePresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncInternalParametersForUndoCompare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x216a210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SyncInternalParametersForUndoCompare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateSessionSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x216a414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateSessionSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateTotalCookCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x215dff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateTotalCookCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetAndCopyInstantiatedProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x216a4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ResetAndCopyInstantiatedProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiationMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x216a820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInstantiationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiatedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x216aa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInstantiatedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidLists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x215c948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearInvalidLists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CopyPropertiesTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo)> {
  constexpr static std::size_t size = 0xbec;
  constexpr static std::size_t addrs = 0x2168620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CopyPropertiesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetSoftDeleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x216aaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetSoftDeleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x10c4;
  constexpr static std::size_t addrs = 0x216acb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::_ctor)> {
  constexpr static std::size_t size = 0x12a4;
  constexpr static std::size_t addrs = 0x216bd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset*>"
constexpr  HoudiniEngineUnity::HEU_HoudiniAsset::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetType(::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType, 0x18>(this, std::forward<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType, 0x18>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetInfo(::HoudiniEngineUnity::HAPI_AssetInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AssetInfo, 0x1c>(this, std::forward<::HoudiniEngineUnity::HAPI_AssetInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AssetInfo, 0x1c>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AssetInfo, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__nodeInfo(::HoudiniEngineUnity::HAPI_NodeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_NodeInfo, 0x5c>(this, std::forward<::HoudiniEngineUnity::HAPI_NodeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo& HoudiniEngineUnity::HEU_HoudiniAsset::__get__nodeInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_NodeInfo, 0x5c>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__nodeInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_NodeInfo, 0x5c>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetName()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetOpName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetOpName()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetOpName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetHelp(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetHelp()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetHelp() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetID()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetID() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__loadAssetFromMemory(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__loadAssetFromMemory()  {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__loadAssetFromMemory() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__alwaysOverwriteOnLoad(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc9>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__alwaysOverwriteOnLoad()  {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__alwaysOverwriteOnLoad() const {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetFileObject(::UnityEngine::Object*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object*, 0xd0>(this, std::forward<::UnityEngine::Object*>(value));
}
constexpr ::UnityEngine::Object* HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetFileObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetFileObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0xd0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__objectNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*, 0xd8>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__objectNodes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__objectNodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*, 0xd8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__rootGameObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0xe0>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::__get__rootGameObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__rootGameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xe0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__materialCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0xe8>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__materialCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__materialCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0xe8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__parameters(::HoudiniEngineUnity::HEU_Parameters*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_Parameters*, 0xf0>(this, std::forward<::HoudiniEngineUnity::HEU_Parameters*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_Parameters* HoudiniEngineUnity::HEU_HoudiniAsset::__get__parameters()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_Parameters*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_Parameters*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__parameters() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_Parameters*, 0xf0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__lastSyncedTransformMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0xf8>(this, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastSyncedTransformMatrix()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0xf8>(this);
}
constexpr ::UnityEngine::Matrix4x4 const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastSyncedTransformMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0xf8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetCacheFolderPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x138>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetCacheFolderPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x138>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetCacheFolderPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x138>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__subassetNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x140>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_HoudiniAsset::__get__subassetNames()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x140>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__subassetNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x140>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__selectedSubassetIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x148>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__selectedSubassetIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x148>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__selectedSubassetIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x148>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__savedAssetPreset(::HoudiniEngineUnity::HEU_AssetPreset*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_AssetPreset*, 0x150>(this, std::forward<::HoudiniEngineUnity::HEU_AssetPreset*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_AssetPreset* HoudiniEngineUnity::HEU_HoudiniAsset::__get__savedAssetPreset()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetPreset*, 0x150>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_AssetPreset*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__savedAssetPreset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetPreset*, 0x150>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__recookPreset(::HoudiniEngineUnity::HEU_RecookPreset*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_RecookPreset*, 0x158>(this, std::forward<::HoudiniEngineUnity::HEU_RecookPreset*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_RecookPreset* HoudiniEngineUnity::HEU_HoudiniAsset::__get__recookPreset()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_RecookPreset*, 0x158>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_RecookPreset*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__recookPreset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_RecookPreset*, 0x158>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__totalCookCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x160>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__totalCookCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x160>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__totalCookCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x160>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__requestBuildAction(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction, 0x164>(this, std::forward<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction& HoudiniEngineUnity::HEU_HoudiniAsset::__get__requestBuildAction()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction, 0x164>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__requestBuildAction() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction, 0x164>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__checkParameterChangeForCook(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x168>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__checkParameterChangeForCook()  {
return ::cordl_internals::getInstanceField<bool, 0x168>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__checkParameterChangeForCook() const {
return ::cordl_internals::getInstanceField<bool, 0x168>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__skipCookCheck(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x169>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__skipCookCheck()  {
return ::cordl_internals::getInstanceField<bool, 0x169>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__skipCookCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x169>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__uploadParameters(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x16a>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uploadParameters()  {
return ::cordl_internals::getInstanceField<bool, 0x16a>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uploadParameters() const {
return ::cordl_internals::getInstanceField<bool, 0x16a>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__forceUploadInputs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x16b>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__forceUploadInputs()  {
return ::cordl_internals::getInstanceField<bool, 0x16b>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__forceUploadInputs() const {
return ::cordl_internals::getInstanceField<bool, 0x16b>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__upstreamCookChanged(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x16c>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__upstreamCookChanged()  {
return ::cordl_internals::getInstanceField<bool, 0x16c>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__upstreamCookChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x16c>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookStatus(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus, 0x170>(this, std::forward<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookStatus()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus, 0x170>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookStatus() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus, 0x170>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__lastCookResult(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult, 0x174>(this, std::forward<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastCookResult()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult, 0x174>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastCookResult() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult, 0x174>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__isCookingAssetReloaded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x178>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__isCookingAssetReloaded()  {
return ::cordl_internals::getInstanceField<bool, 0x178>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__isCookingAssetReloaded() const {
return ::cordl_internals::getInstanceField<bool, 0x178>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bForceUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x179>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bForceUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x179>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bForceUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x179>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__sessionID(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x180>(this, std::forward<int64_t>(value));
}
constexpr int64_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionID()  {
return ::cordl_internals::getInstanceField<int64_t, 0x180>(this);
}
constexpr int64_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x180>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__WarnedPrefabNotSupported_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x188>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__WarnedPrefabNotSupported_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__WarnedPrefabNotSupported_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__uiLocked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x189>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uiLocked()  {
return ::cordl_internals::getInstanceField<bool, 0x189>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uiLocked() const {
return ::cordl_internals::getInstanceField<bool, 0x189>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showHDAOptions(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18a>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showHDAOptions()  {
return ::cordl_internals::getInstanceField<bool, 0x18a>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showHDAOptions() const {
return ::cordl_internals::getInstanceField<bool, 0x18a>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showGenerateSection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18b>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showGenerateSection()  {
return ::cordl_internals::getInstanceField<bool, 0x18b>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showGenerateSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18b>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showBakeSection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18c>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showBakeSection()  {
return ::cordl_internals::getInstanceField<bool, 0x18c>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showBakeSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18c>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showEventsSection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18d>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showEventsSection()  {
return ::cordl_internals::getInstanceField<bool, 0x18d>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showEventsSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18d>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showCurvesSection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18e>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showCurvesSection()  {
return ::cordl_internals::getInstanceField<bool, 0x18e>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showCurvesSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18e>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showInputNodesSection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18f>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showInputNodesSection()  {
return ::cordl_internals::getInstanceField<bool, 0x18f>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showInputNodesSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18f>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showToolsSection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x190>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showToolsSection()  {
return ::cordl_internals::getInstanceField<bool, 0x190>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showToolsSection() const {
return ::cordl_internals::getInstanceField<bool, 0x190>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showTerrainSection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x191>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showTerrainSection()  {
return ::cordl_internals::getInstanceField<bool, 0x191>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showTerrainSection() const {
return ::cordl_internals::getInstanceField<bool, 0x191>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__instanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_InstanceInputUIState*, 0x198>(this, std::forward<::HoudiniEngineUnity::HEU_InstanceInputUIState*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_InstanceInputUIState* HoudiniEngineUnity::HEU_HoudiniAsset::__get__instanceInputUIState()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InstanceInputUIState*, 0x198>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InstanceInputUIState*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__instanceInputUIState() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InstanceInputUIState*, 0x198>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__reloadEvent(::HoudiniEngineUnity::ReloadEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::ReloadEvent*, 0x1a0>(this, std::forward<::HoudiniEngineUnity::ReloadEvent*>(value));
}
constexpr ::HoudiniEngineUnity::ReloadEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::ReloadEvent*, 0x1a0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::ReloadEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::ReloadEvent*, 0x1a0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookedEvent(::HoudiniEngineUnity::CookedEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::CookedEvent*, 0x1a8>(this, std::forward<::HoudiniEngineUnity::CookedEvent*>(value));
}
constexpr ::HoudiniEngineUnity::CookedEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::CookedEvent*, 0x1a8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::CookedEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::CookedEvent*, 0x1a8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakedEvent(::HoudiniEngineUnity::BakedEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::BakedEvent*, 0x1b0>(this, std::forward<::HoudiniEngineUnity::BakedEvent*>(value));
}
constexpr ::HoudiniEngineUnity::BakedEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::BakedEvent*, 0x1b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::BakedEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::BakedEvent*, 0x1b0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__reloadDataEvent(::HoudiniEngineUnity::HEU_ReloadDataEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_ReloadDataEvent*, 0x1b8>(this, std::forward<::HoudiniEngineUnity::HEU_ReloadDataEvent*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_ReloadDataEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadDataEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ReloadDataEvent*, 0x1b8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ReloadDataEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadDataEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ReloadDataEvent*, 0x1b8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookedDataEvent(::HoudiniEngineUnity::HEU_CookedDataEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_CookedDataEvent*, 0x1c0>(this, std::forward<::HoudiniEngineUnity::HEU_CookedDataEvent*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_CookedDataEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedDataEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_CookedDataEvent*, 0x1c0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_CookedDataEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedDataEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_CookedDataEvent*, 0x1c0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakedDataEvent(::HoudiniEngineUnity::HEU_BakedDataEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_BakedDataEvent*, 0x1c8>(this, std::forward<::HoudiniEngineUnity::HEU_BakedDataEvent*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_BakedDataEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedDataEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_BakedDataEvent*, 0x1c8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_BakedDataEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedDataEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_BakedDataEvent*, 0x1c8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__preAssetEvent(::HoudiniEngineUnity::HEU_PreAssetEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_PreAssetEvent*, 0x1d0>(this, std::forward<::HoudiniEngineUnity::HEU_PreAssetEvent*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__preAssetEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_PreAssetEvent*, 0x1d0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_PreAssetEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__preAssetEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_PreAssetEvent*, 0x1d0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__refreshUIDelegate(::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*, 0x1d8>(this, std::forward<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate* HoudiniEngineUnity::HEU_HoudiniAsset::__get__refreshUIDelegate()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*, 0x1d8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__refreshUIDelegate() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*, 0x1d8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__downstreamConnectionCookedEvent(::HoudiniEngineUnity::CookedEvent*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::CookedEvent*, 0x1e0>(this, std::forward<::HoudiniEngineUnity::CookedEvent*>(value));
}
constexpr ::HoudiniEngineUnity::CookedEvent* HoudiniEngineUnity::HEU_HoudiniAsset::__get__downstreamConnectionCookedEvent()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::CookedEvent*, 0x1e0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::CookedEvent*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__downstreamConnectionCookedEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::CookedEvent*, 0x1e0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateUVs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1e8>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateUVs()  {
return ::cordl_internals::getInstanceField<bool, 0x1e8>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateUVs() const {
return ::cordl_internals::getInstanceField<bool, 0x1e8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateTangents(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1e9>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateTangents()  {
return ::cordl_internals::getInstanceField<bool, 0x1e9>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateTangents() const {
return ::cordl_internals::getInstanceField<bool, 0x1e9>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateNormals(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1ea>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateNormals()  {
return ::cordl_internals::getInstanceField<bool, 0x1ea>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x1ea>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__pushTransformToHoudini(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1eb>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pushTransformToHoudini()  {
return ::cordl_internals::getInstanceField<bool, 0x1eb>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pushTransformToHoudini() const {
return ::cordl_internals::getInstanceField<bool, 0x1eb>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__transformChangeTriggersCooks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1ec>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__transformChangeTriggersCooks()  {
return ::cordl_internals::getInstanceField<bool, 0x1ec>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__transformChangeTriggersCooks() const {
return ::cordl_internals::getInstanceField<bool, 0x1ec>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookingTriggersDownCooks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1ed>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookingTriggersDownCooks()  {
return ::cordl_internals::getInstanceField<bool, 0x1ed>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookingTriggersDownCooks() const {
return ::cordl_internals::getInstanceField<bool, 0x1ed>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__autoCookOnParameterChange(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1ee>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__autoCookOnParameterChange()  {
return ::cordl_internals::getInstanceField<bool, 0x1ee>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__autoCookOnParameterChange() const {
return ::cordl_internals::getInstanceField<bool, 0x1ee>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__ignoreNonDisplayNodes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1ef>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__ignoreNonDisplayNodes()  {
return ::cordl_internals::getInstanceField<bool, 0x1ef>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__ignoreNonDisplayNodes() const {
return ::cordl_internals::getInstanceField<bool, 0x1ef>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateMeshUsingPoints(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f0>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateMeshUsingPoints()  {
return ::cordl_internals::getInstanceField<bool, 0x1f0>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateMeshUsingPoints() const {
return ::cordl_internals::getInstanceField<bool, 0x1f0>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__useLODGroups(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f1>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__useLODGroups()  {
return ::cordl_internals::getInstanceField<bool, 0x1f1>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__useLODGroups() const {
return ::cordl_internals::getInstanceField<bool, 0x1f1>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__splitGeosByGroup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f2>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__splitGeosByGroup()  {
return ::cordl_internals::getInstanceField<bool, 0x1f2>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__splitGeosByGroup() const {
return ::cordl_internals::getInstanceField<bool, 0x1f2>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__sessionSyncAutoCook(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f3>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionSyncAutoCook()  {
return ::cordl_internals::getInstanceField<bool, 0x1f3>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionSyncAutoCook() const {
return ::cordl_internals::getInstanceField<bool, 0x1f3>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakeUpdateKeepPreviousTransformValues(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f4>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakeUpdateKeepPreviousTransformValues()  {
return ::cordl_internals::getInstanceField<bool, 0x1f4>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakeUpdateKeepPreviousTransformValues() const {
return ::cordl_internals::getInstanceField<bool, 0x1f4>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__pauseCooking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f5>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pauseCooking()  {
return ::cordl_internals::getInstanceField<bool, 0x1f5>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pauseCooking() const {
return ::cordl_internals::getInstanceField<bool, 0x1f5>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveEditorEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f6>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveEditorEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x1f6>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveEditorEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x1f6>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, 0x1f8>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__curves()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, 0x1f8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__curves() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, 0x1f8>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawCollision(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, 0x200>(this, std::forward<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawCollision()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, 0x200>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawCollision() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, 0x200>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawColliders(::System::Collections::Generic::List_1<::UnityEngine::Collider*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, 0x208>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawColliders()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, 0x208>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawColliders() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, 0x208>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawLayerMask(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x210>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawLayerMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x210>(this);
}
constexpr ::UnityEngine::LayerMask const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawLayerMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x210>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveProjectMaxDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x214>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectMaxDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x214>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectMaxDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x214>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveProjectDirection(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x218>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectDirection()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x218>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectDirection() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x218>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDisableScaleRotation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x224>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDisableScaleRotation()  {
return ::cordl_internals::getInstanceField<bool, 0x224>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDisableScaleRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x224>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveCookOnDrag(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x225>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveCookOnDrag()  {
return ::cordl_internals::getInstanceField<bool, 0x225>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveCookOnDrag() const {
return ::cordl_internals::getInstanceField<bool, 0x225>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveFrameSelectedNodes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x226>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodes()  {
return ::cordl_internals::getInstanceField<bool, 0x226>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodes() const {
return ::cordl_internals::getInstanceField<bool, 0x226>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveFrameSelectedNodeDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x228>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodeDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x228>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodeDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x228>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__inputNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*, 0x230>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__inputNodes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*, 0x230>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__inputNodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*, 0x230>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__handles(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*, 0x238>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__handles()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*, 0x238>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__handles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*, 0x238>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__handlesEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x240>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__handlesEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x240>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__handlesEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x240>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__volumeCaches(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*, 0x248>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__volumeCaches()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*, 0x248>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__volumeCaches() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*, 0x248>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__attributeStores(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*, 0x250>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>* HoudiniEngineUnity::HEU_HoudiniAsset::__get__attributeStores()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*, 0x250>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__attributeStores() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*, 0x250>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__editableNodesToolsEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x258>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__editableNodesToolsEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x258>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__editableNodesToolsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x258>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__toolsInfo(::HoudiniEngineUnity::HEU_ToolsInfo*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_ToolsInfo*, 0x260>(this, std::forward<::HoudiniEngineUnity::HEU_ToolsInfo*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo* HoudiniEngineUnity::HEU_HoudiniAsset::__get__toolsInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ToolsInfo*, 0x260>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ToolsInfo*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__toolsInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ToolsInfo*, 0x260>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__serializedMetaData(::HoudiniEngineUnity::HEU_AssetSerializedMetaData*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, 0x268>(this, std::forward<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_AssetSerializedMetaData* HoudiniEngineUnity::HEU_HoudiniAsset::__get__serializedMetaData()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, 0x268>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*> HoudiniEngineUnity::HEU_HoudiniAsset::__get__serializedMetaData() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, 0x268>(this);
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__pendingAutoCookOnMouseRelease(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x270>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pendingAutoCookOnMouseRelease()  {
return ::cordl_internals::getInstanceField<bool, 0x270>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pendingAutoCookOnMouseRelease() const {
return ::cordl_internals::getInstanceField<bool, 0x270>(this);
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_AssetInfo HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_AssetInfo, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_NodeInfo HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_NodeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_NodeInfo, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetOpName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetHelp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_TransformInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GeoInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_HandleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_OwnerGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_RootGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Parameters* HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Parameters*, false>(*this, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SubassetNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(*this, ___internal_method);
}
inline int64_t HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SessionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_InstanceInputUIState* HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InstanceInputUIState*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::LayerMask HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask(::UnityEngine::LayerMask  mask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mask);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_ToolsInfo* HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_ToolsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ToolsInfo*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AssetSerializedMetaData* HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_SerializedMetaData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "get_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "set_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset(::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType  assetType, ::StringW  filePath, ::UnityEngine::GameObject*  rootGameObject, ::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetupAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assetType, filePath, rootGameObject, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpAndDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CleanUpAndDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsAssetSavedInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvalidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "PostAssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters(bool  bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestResetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bAsync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload(bool  bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestReload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bAsync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook(bool  bCheckParametersChanged, bool  bAsync, bool  bSkipCookCheck, bool  bUploadParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bCheckParametersChanged, bAsync, bSkipCookCheck, bUploadParameters);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RequestBakeInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearBuildRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HasValidAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild(bool  bPromptForSubasset, int32_t  desiredSubassetIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ProcessRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent(bool  bCookSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvokeReloadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bCookSuccess, outputObjects);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild(bool  bPromptForSubasset, int32_t  desiredSubassetIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "StartRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "FinishRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync(bool  bCheckParamsChanged, bool  bSkipCookCheck, bool  bUploadParameters, bool  bUploadParameterPreset, bool  bForceUploadInputs, bool  bCookingSessionSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RecookAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs, bCookingSessionSync);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::RecookBlocking(bool  bCheckParamsChanged, bool  bSkipCookCheck, bool  bUploadParameters, bool  bUploadParameterPreset, bool  bForceUploadInputs, bool  bCookingSessionSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RecookBlocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs, bCookingSessionSync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DoPostCookWork(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DoPostCookWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction(ByRef<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsValidForInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, errorMessage);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ExecutePostCookCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent(bool  bCookSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvokePostCookEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bCookSuccess, outputObjects);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook(bool  bCheckParamsChanged, bool  bSkipCookCheck, bool  bUploadParameters, bool  bUploadParameterPreset, bool  bForceUploadInputs, bool  bCookingSessionSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InternalStartRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs, bCookingSessionSync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InternalSetAssetID(int32_t  assetID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InternalSetAssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assetID);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus  status, ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, status, result);
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ProcessPoskCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "StartHoudiniCookNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus(bool  bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ProcessHoudiniCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bAsync);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DoesAssetRequireRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DeleteSessionDataOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param bIsRebuild: bool (default: false)
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData(bool  bIsRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DeleteAllGeneratedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bIsRebuild);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CleanUpInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData(bool  bRegisterUndo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DeleteAssetCacheData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bRegisterUndo);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DownloadParameterPresetFromHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadParameterPresetToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bForceUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateParameterInputsToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, bForceUpdate);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bPromptForSubasset, int32_t  desiredSubassetIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "LoadAssetFileWithSubasset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session, bPromptForSubasset, desiredSubassetIndex);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  subassetIndex, ByRef<int32_t>  newAssetID, bool  bCookTemplatedGeos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateAndCookAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session, subassetIndex, newAssetID, bCookTemplatedGeos);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateAssetInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bCheckParamsChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadCurvesParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, bCheckParamsChanged);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadAttributeValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SyncDirtyAttributesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bForceUpdate, bool  bUpdateAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, bForceUpdate, bUpdateAll);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NotifyInputNodesCookFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateAllObjectNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline ::HoudiniEngineUnity::HEU_ObjectNode* HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode(::HoudiniEngineUnity::HEU_SessionBase*  session, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>  objectInfo, ByRef<::HoudiniEngineUnity::HAPI_Transform>  objectTranform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CreateObjectNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode*, false>(*this, ___internal_method, session, objectInfo, objectTranform);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateObjectsGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, bRebuild);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GenerateHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CleanUpHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Handle* HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName(::StringW  handleName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetHandleByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Handle*, false>(*this, ___internal_method, handleName);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NumHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_Transform HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  objectID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetObjectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_Transform, false>(*this, ___internal_method, session, objectID);
}
inline ::HoudiniEngineUnity::HEU_ObjectNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID(int32_t  objId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetObjectWithID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode*, false>(*this, ___internal_method, objId);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent(bool  bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects, bool  isNewBake)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InvokeBakedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bSuccess, outputObjects, isNewBake);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA(ByRef<::StringW>  bakedAssetPath, bool  bWriteMeshesToAssetDatabase, bool  bReconnectPrefabInstances)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CloneAssetWithoutHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, bakedAssetPath, bWriteMeshesToAssetDatabase, bReconnectPrefabInstances);
}
/// @param destinationPrefabPath: ::StringW (default: csnull)
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab(::StringW  destinationPrefabPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToNewPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, destinationPrefabPath);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToNewStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab(::UnityEngine::GameObject*  bakeTargetGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToExistingPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bakeTargetGO);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone(::UnityEngine::GameObject*  bakeTargetGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "BakeToExistingStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bakeTargetGO);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked(::HoudiniEngineUnity::HEU_HoudiniAsset*  upstreamAsset, bool  bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NotifyUpstreamCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, upstreamAsset, bSuccess, outputs);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset*  upstreamAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ConnectToUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, upstreamAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset*  upstreamAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DisconnectFromUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, upstreamAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*  receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, receiver);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*  receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, receiver);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearAllUpstreamConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateInputsOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ReconnectInputsUpstreamNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetHoudiniTransformAndApply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bOnlySendIfChangedFromLastSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UploadUnityTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, bOnlySendIfChangedFromLastSync);
}
inline ::HoudiniEngineUnity::HEU_MaterialData* HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData*, false>(*this, ___internal_method, material);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateHoudiniMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveUnusedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, material);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsAssetValidInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsAssetValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HasTransformChangedSinceLastUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*  clonableParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clonableParts);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outputObjects);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*  outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outputs);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*  outputGeoNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetOutputGeoNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outputGeoNodes);
}
inline ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject(::UnityEngine::GameObject*  outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInternalHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData*, false>(*this, ___internal_method, outputGameObject);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Curve* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve(::StringW  curveName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Curve*, false>(*this, ___internal_method, curveName);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearInvalidCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetEditableCurveCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve(::HoudiniEngineUnity::HEU_Curve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, curve);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve(::HoudiniEngineUnity::HEU_Curve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, curve);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider(::UnityEngine::Collider*  newCollider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newCollider);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collider);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode(::StringW  inputName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode*, false>(*this, ___internal_method, inputName);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode(::StringW  inputName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAssetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode*, false>(*this, ___internal_method, inputName);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInputNodeByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode*, false>(*this, ___internal_method, index);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetNonParameterInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode(::HoudiniEngineUnity::HEU_InputNode*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode(::HoudiniEngineUnity::HEU_InputNode*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved(::HoudiniEngineUnity::HEU_InputNode*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "InputNodeNotifyRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetVolumeCacheCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetVolumeCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache*  cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cache);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache*  cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cache);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAttributesStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "NumAttributeStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AttributesStore* HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore(::StringW  geoName, int32_t  partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributesStore*, false>(*this, ___internal_method, geoName, partID);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore*  attributeStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attributeStore);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore*  attributeStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attributeStore);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore(int32_t  oldIndex, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ReorderAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oldIndex, newIndex);
}
inline ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject(::UnityEngine::GameObject*  outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetSceneHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData*, false>(nullptr, ___internal_method, outputGameObject);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject(::UnityEngine::GameObject*  outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetSceneHDAAssetFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset*, false>(nullptr, ___internal_method, outputGameObject);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsHoudiniAssetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsHoudiniAssetRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*  objInstanceInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "PopulateObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, objInstanceInfos);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache(::StringW  assetObjectFileName, ::UnityEngine::Object*  objectToAdd, ::StringW  relativeFolderPath, ByRef<::UnityEngine::Object*>  targetAssetDBObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "AddToAssetDBCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assetObjectFileName, objectToAdd, relativeFolderPath, targetAssetDBObject);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene(bool  bShow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetCurvesVisibilityInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bShow);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession(bool  bCreateIfInvalid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAssetSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(*this, ___internal_method, bCreateIfInvalid);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetValidAssetCacheFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "HideAllGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CalculateVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DisableAllColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param newRootGameObject: ::UnityEngine::GameObject* (default: csnull)
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset(::UnityEngine::GameObject*  newRootGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "DuplicateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, newRootGameObject);
}
inline ::HoudiniEngineUnity::HEU_ObjectNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName(::StringW  objName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetObjectNodeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode*, false>(*this, ___internal_method, objName);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ResetMaterialOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ResetParametersToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AssetPreset* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetAssetPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AssetPreset*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook(::HoudiniEngineUnity::HEU_AssetPreset*  assetPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "LoadAssetPresetAndCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assetPreset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ApplyRecookPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets(::HoudiniEngineUnity::HEU_SessionBase*  session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*  inputPresets, bool  bAddMissingInputsToRecookPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ApplyInputPresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session, inputPresets, bAddMissingInputsToRecookPreset);
}
inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset(::StringW  objName, ::StringW  geoName, int32_t  tile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_VolumeCachePreset*, false>(*this, ___internal_method, objName, geoName, tile);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset*  preset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "RemoveVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, preset);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*  volumeCachePresets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ApplyVolumeCachePresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, volumeCachePresets);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SyncInternalParametersForUndoCompare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateSessionSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "UpdateTotalCookCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties(::HoudiniEngineUnity::HEU_HoudiniAsset*  newAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ResetAndCopyInstantiatedProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newAsset);
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInstantiationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "GetInstantiatedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "ClearInvalidLists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo(::HoudiniEngineUnity::HEU_HoudiniAsset*  newAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "CopyPropertiesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "SetSoftDeleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, asset);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_HoudiniAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_HoudiniAsset*>());
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
