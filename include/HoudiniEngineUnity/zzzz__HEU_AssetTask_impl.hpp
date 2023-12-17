#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_Task_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetTask_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetTask_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_AssetTask__BuildType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_AssetTask__BuildType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_AssetTask__BuildType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType::__HEU_AssetTask__BuildType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType  HoudiniEngineUnity::__HEU_AssetTask__BuildType::NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType  HoudiniEngineUnity::__HEU_AssetTask__BuildType::LOAD{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType  HoudiniEngineUnity::__HEU_AssetTask__BuildType::COOK{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType  HoudiniEngineUnity::__HEU_AssetTask__BuildType::RELOAD{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.GetTaskSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::GetTaskSession)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21aa848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "GetTaskSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.DoTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::DoTask)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x21aa8fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.KillTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::KillTask)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x21aaed4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CompleteTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::__HEU_Task__TaskResult)>(&::HoudiniEngineUnity::HEU_AssetTask::CompleteTask)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x21ab114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21ab354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_CookedEventData*)>(&::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ab3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_ReloadEventData*)>(&::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ab3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x21ab3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__buildType(::HoudiniEngineUnity::__HEU_AssetTask__BuildType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_AssetTask__BuildType, 0x30>(this, std::forward<::HoudiniEngineUnity::__HEU_AssetTask__BuildType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType& HoudiniEngineUnity::HEU_AssetTask::__get__buildType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_AssetTask__BuildType, 0x30>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const& HoudiniEngineUnity::HEU_AssetTask::__get__buildType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_AssetTask__BuildType, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__asset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x38>(this, std::forward<::HoudiniEngineUnity::HEU_HoudiniAsset*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_AssetTask::__get__asset()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> HoudiniEngineUnity::HEU_AssetTask::__get__asset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__assetPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_AssetTask::__get__assetPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_AssetTask::__get__assetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_AssetTask::__get__position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_AssetTask::__get__position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__buildResult(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_AssetTask::__get__buildResult()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_AssetTask::__get__buildResult() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__forceSessionID(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this, std::forward<int64_t>(value));
}
constexpr int64_t& HoudiniEngineUnity::HEU_AssetTask::__get__forceSessionID()  {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr int64_t const& HoudiniEngineUnity::HEU_AssetTask::__get__forceSessionID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_AssetTask::GetTaskSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "GetTaskSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AssetTask::DoTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "DoTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AssetTask::KillTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "KillTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CompleteTask(::HoudiniEngineUnity::__HEU_Task__TaskResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "CompleteTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Task__TaskResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, asset, bSuccess, outputs);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_CookedEventData*  cookedEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cookedEventData);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_ReloadEventData*  reloadEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reloadEventData);
}
inline ::HoudiniEngineUnity::HEU_AssetTask* HoudiniEngineUnity::HEU_AssetTask::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_AssetTask*>());
}
inline void HoudiniEngineUnity::HEU_AssetTask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
