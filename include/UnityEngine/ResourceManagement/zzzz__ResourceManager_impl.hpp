#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__DelegateList_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__ListWithEvents_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::__ResourceManager__DiagnosticEventType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationFail{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationCreate{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationPercentComplete{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationComplete{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationReferenceCount{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationDestroy{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_OperationHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_OperationHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bce620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_OperationHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_EventValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_EventValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_EventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Location
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, ::StringW, ::System::Object*)>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2bce65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__set__OperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(value));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__OperationHandle_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__OperationHandle_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__set__Type_k__BackingField(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType>(value));
}
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Type_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Type_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__set__EventValue_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__EventValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__EventValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Location_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Location_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__set__Context_k__BackingField(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Context_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Context_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__set__Error_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Error_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__get__Error_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_OperationHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_OperationHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_EventValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_EventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Location()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
/// @param eventValue: int32_t (default: static_cast<int32_t>(0x0))
/// @param error: ::StringW (default: csnull)
/// @param context: ::System::Object* (default: csnull)
inline void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  type, int32_t  eventValue, ::StringW  error, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, op, type, eventValue, error, context);
}
// Ctor Parameters [CppParam { name: "_OperationHandle_k__BackingField", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Type_k__BackingField", ty: "::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EventValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Location_k__BackingField", ty: "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_Context_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_Error_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__ResourceManager__DiagnosticEventContext(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _OperationHandle_k__BackingField, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  _Type_k__BackingField, int32_t  _EventValue_k__BackingField, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  _Location_k__BackingField, ::System::Object*  _Context_k__BackingField, ::StringW  _Error_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->_OperationHandle_k__BackingField = _OperationHandle_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
this->_EventValue_k__BackingField = _EventValue_k__BackingField;
this->_Location_k__BackingField = _Location_k__BackingField;
this->_Context_k__BackingField = _Context_k__BackingField;
this->_Error_k__BackingField = _Error_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__set_operation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(value));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__get_operation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*> UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__get_operation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__set_incrementRefCount(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__get_incrementRefCount()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__get_incrementRefCount() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "incrementRefCount", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__ResourceManager__DeferredCallbackRegisterRequest(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, bool  incrementRefCount) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->operation = operation;
this->incrementRefCount = incrementRefCount;
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>)>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Init)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bcd854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)(::System::Collections::Generic::HashSet_1<::System::Object*>*)>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2bce760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDependencies)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2bce83c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2bce964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.InstanceScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InstanceScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcea74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "InstanceScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Destroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bcea7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_Progress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bceb30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2bceb78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Execute)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2bceca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bceee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__set_m_dependency(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>, 0x88>(this, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>(value));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_dependency()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>, 0x88>(this);
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_dependency() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>, 0x88>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__set_m_instantiationParams(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, 0xa8>(this, std::forward<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_instantiationParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, 0xa8>(this);
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_instantiationParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, 0xa8>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__set_m_instanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, 0xd8>(this, std::forward<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_instanceProvider()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*> UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_instanceProvider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, 0xd8>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__set_m_instance(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0xe0>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_instance()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_instance() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xe0>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__set_m_scene(::UnityEngine::SceneManagement::Scene  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0xe8>(this, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
constexpr ::UnityEngine::SceneManagement::Scene& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_scene()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0xe8>(this);
}
constexpr ::UnityEngine::SceneManagement::Scene const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__get_m_scene() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0xe8>(this);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Init(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  instanceProvider, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiationParams, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>  dependency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rm, instanceProvider, instantiationParams, dependency);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(*this, ___internal_method, visited);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InstanceScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "InstanceScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation* UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>());
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_ExceptionHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* (*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_ExceptionHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bc9b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_ExceptionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_ExceptionHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_ExceptionHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bc9bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_ExceptionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_InternalIdTransformFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_InternalIdTransformFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.TransformInternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceManager::TransformInternalId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc9c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "TransformInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_WebRequestOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_WebRequestOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_WebRequestOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_WebRequestOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_OperationCacheCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_OperationCacheCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2bc9cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_OperationCacheCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_InstanceOperationCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_InstanceOperationCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bc9d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_InstanceOperationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AddUpdateReceiver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(&::UnityEngine::ResourceManagement::ResourceManager::AddUpdateReceiver)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bc9d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "AddUpdateReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RemoveUpdateReciever
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(&::UnityEngine::ResourceManagement::ResourceManager::RemoveUpdateReciever)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2bc9dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RemoveUpdateReciever",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_Allocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_Allocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_Allocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_Allocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_Allocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_Allocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_ResourceProviders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_ResourceProviders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_ResourceProviders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_CertificateHandlerInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::CertificateHandler* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_CertificateHandlerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_CertificateHandlerInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_CertificateHandlerInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::Networking::CertificateHandler*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_CertificateHandlerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_CertificateHandlerInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::CertificateHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*)>(&::UnityEngine::ResourceManagement::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x2bc9f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnObjectAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnObjectAdded)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bca5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnObjectAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnObjectRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnObjectRemoved)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bca618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnObjectRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterForCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterForCallbacks)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2bca68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterForCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ClearDiagnosticsCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ClearDiagnosticsCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ClearDiagnosticCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticCallbacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ClearDiagnosticCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.UnregisterDiagnosticCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*)>(&::UnityEngine::ResourceManagement::ResourceManager::UnregisterDiagnosticCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2bca768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "UnregisterDiagnosticCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterDiagnosticCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*)>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterDiagnosticCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterDiagnosticCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*)>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2bca86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterDiagnosticCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.PostDiagnosticEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext)>(&::UnityEngine::ResourceManagement::ResourceManager::PostDiagnosticEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2bca914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "PostDiagnosticEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetResourceProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceManager::GetResourceProvider)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x2bcaa2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "GetResourceProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetDefaultTypeForLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceManager::GetDefaultTypeForLocation)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2bcae74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "GetDefaultTypeForLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CalculateLocationsHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::System::Type*)>(&::UnityEngine::ResourceManagement::ResourceManager::CalculateLocationsHash)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x2bcafbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CalculateLocationsHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideResource)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x2bcb40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.StartOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::ResourceManager::StartOperation)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2bcc544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnInstanceOperationDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnInstanceOperationDestroy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2bcc6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnInstanceOperationDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnOperationDestroyNonCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyNonCached)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2bcc7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnOperationDestroyNonCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnOperationDestroyCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyCached)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2bcc8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnOperationDestroyCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AddOperationToCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::AddOperationToCache)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bccb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "AddOperationToCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RemoveOperationFromCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::ResourceManager::RemoveOperationFromCache)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2bccaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RemoveOperationFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.IsOperationCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::ResourceManager::IsOperationCached)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bccba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "IsOperationCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CachedOperationCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::CachedOperationCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2bccbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CachedOperationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::ResourceManager::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bccc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Acquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::ResourceManager::Acquire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bccd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AcquireGroupOpFromCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::ResourceManager::AcquireGroupOpFromCache)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2bccdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "AcquireGroupOpFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CreateGenericGroupOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::CreateGenericGroupOperation)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2bccf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CreateGenericGroupOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideResourceGroupCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, int32_t, ::System::Type*, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideResourceGroupCached)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x2bcbdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideResourceGroupCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideScene)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2bcd330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ReleaseScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&::UnityEngine::ResourceManagement::ResourceManager::ReleaseScene)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2bcd470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideInstance)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2bcd5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CleanupSceneInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::ResourceManagement::ResourceManager::CleanupSceneInstances)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x2bcd884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CleanupSceneInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ExecuteDeferredCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ExecuteDeferredCallbacks)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2bcdc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ExecuteDeferredCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterForDeferredCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterForDeferredCallback)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2bcde40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterForDeferredCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(float_t)>(&::UnityEngine::ResourceManagement::ResourceManager::Update)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2bce050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bce464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.__ctor_b__53_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(&::UnityEngine::ResourceManagement::ResourceManager::__ctor_b__53_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bce61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "<.ctor>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::ResourceManagement::ResourceManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_postProfilerEvents(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__get_postProfilerEvents()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__get_postProfilerEvents() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF__ExceptionHandler_k__BackingField(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*, "<ExceptionHandler>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>(std::forward<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*>(value));
}
inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* UnityEngine::ResourceManagement::ResourceManager::getStaticF__ExceptionHandler_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*, "<ExceptionHandler>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>();
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set__InternalIdTransformFunc_k__BackingField(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, 0x18>(this, std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*>(value));
}
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* UnityEngine::ResourceManagement::ResourceManager::__get__InternalIdTransformFunc_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*> UnityEngine::ResourceManagement::ResourceManager::__get__InternalIdTransformFunc_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, 0x18>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set__WebRequestOverride_k__BackingField(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*, 0x20>(this, std::forward<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* UnityEngine::ResourceManagement::ResourceManager::__get__WebRequestOverride_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*> UnityEngine::ResourceManagement::ResourceManager::__get__WebRequestOverride_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*, 0x20>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_CallbackHooksEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__get_CallbackHooksEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__get_CallbackHooksEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_ResourceProviders(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, 0x30>(this, std::forward<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*>(value));
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_ResourceProviders()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_ResourceProviders() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, 0x30>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, 0x38>(this, std::forward<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(value));
}
constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* UnityEngine::ResourceManagement::ResourceManager::__get_m_allocator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*> UnityEngine::ResourceManagement::ResourceManager::__get_m_allocator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, 0x38>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_UpdateReceivers(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*, 0x40>(this, std::forward<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*>(value));
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdateReceivers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdateReceivers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*, 0x40>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_UpdateReceiversToRemove(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*, 0x48>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdateReceiversToRemove()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdateReceiversToRemove() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*, 0x48>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_UpdatingReceivers(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdatingReceivers()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdatingReceivers() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_InsideUpdateMethod(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__get_m_InsideUpdateMethod()  {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__get_m_InsideUpdateMethod() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_providerMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, 0x58>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_providerMap()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_providerMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, 0x58>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_AssetOperationCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0x60>(this, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_AssetOperationCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_AssetOperationCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0x60>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_TrackedInstanceOperations(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*, 0x68>(this, std::forward<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_TrackedInstanceOperations()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_TrackedInstanceOperations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*, 0x68>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DelegateList_1<float_t>*, 0x70>(this, std::forward<::GlobalNamespace::DelegateList_1<float_t>*>(value));
}
constexpr ::GlobalNamespace::DelegateList_1<float_t>* UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdateCallbacks()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DelegateList_1<float_t>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_UpdateCallbacks() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DelegateList_1<float_t>*, 0x70>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_DeferredCompleteCallbacks(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0x78>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_DeferredCompleteCallbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_DeferredCompleteCallbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0x78>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_InsideExecuteDeferredCallbacksMethod(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__get_m_InsideExecuteDeferredCallbacksMethod()  {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__get_m_InsideExecuteDeferredCallbacksMethod() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_DeferredCallbacksToRegister(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*, 0x88>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>* UnityEngine::ResourceManagement::ResourceManager::__get_m_DeferredCallbacksToRegister()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_DeferredCallbacksToRegister() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*, 0x88>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_obsoleteDiagnosticsHandler(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*, 0x90>(this, std::forward<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*>(value));
}
constexpr ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_obsoleteDiagnosticsHandler()  {
return ::cordl_internals::getInstanceField<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_obsoleteDiagnosticsHandler() const {
return ::cordl_internals::getInstanceField<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*, 0x90>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_diagnosticsHandler(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*, 0x98>(this, std::forward<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>* UnityEngine::ResourceManagement::ResourceManager::__get_m_diagnosticsHandler()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_diagnosticsHandler() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*, 0x98>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_ReleaseOpNonCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xa0>(this, std::forward<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_ReleaseOpNonCached()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_ReleaseOpNonCached() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xa0>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_ReleaseOpCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xa8>(this, std::forward<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_ReleaseOpCached()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_ReleaseOpCached() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xa8>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_ReleaseInstanceOp(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xb0>(this, std::forward<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_ReleaseInstanceOp()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_ReleaseInstanceOp() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, 0xb0>(this);
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF_s_GroupOperationTypeHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_GroupOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::getStaticF_s_GroupOperationTypeHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_GroupOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>();
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF_s_InstanceOperationTypeHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InstanceOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::getStaticF_s_InstanceOperationTypeHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_InstanceOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>();
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set__CertificateHandlerInstance_k__BackingField(::UnityEngine::Networking::CertificateHandler*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Networking::CertificateHandler*, 0xb8>(this, std::forward<::UnityEngine::Networking::CertificateHandler*>(value));
}
constexpr ::UnityEngine::Networking::CertificateHandler* UnityEngine::ResourceManagement::ResourceManager::__get__CertificateHandlerInstance_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Networking::CertificateHandler*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::CertificateHandler*> UnityEngine::ResourceManagement::ResourceManager::__get__CertificateHandlerInstance_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Networking::CertificateHandler*, 0xb8>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_RegisteredForCallbacks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__get_m_RegisteredForCallbacks()  {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__get_m_RegisteredForCallbacks() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__set_m_ProviderOperationTypeCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*, 0xc8>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>* UnityEngine::ResourceManagement::ResourceManager::__get_m_ProviderOperationTypeCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*> UnityEngine::ResourceManagement::ResourceManager::__get_m_ProviderOperationTypeCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*, 0xc8>(this);
}
inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* UnityEngine::ResourceManagement::ResourceManager::get_ExceptionHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_ExceptionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_ExceptionHandler(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_ExceptionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* UnityEngine::ResourceManagement::ResourceManager::get_InternalIdTransformFunc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceManager::TransformInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "TransformInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, location);
}
inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* UnityEngine::ResourceManagement::ResourceManager::get_WebRequestOverride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_OperationCacheCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_OperationCacheCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_InstanceOperationCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_InstanceOperationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::AddUpdateReceiver(::UnityEngine::ResourceManagement::IUpdateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "AddUpdateReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, receiver);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RemoveUpdateReciever(::UnityEngine::ResourceManagement::IUpdateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RemoveUpdateReciever",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, receiver);
}
inline ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* UnityEngine::ResourceManagement::ResourceManager::get_Allocator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_Allocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_Allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_Allocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* UnityEngine::ResourceManagement::ResourceManager::get_ResourceProviders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_ResourceProviders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Networking::CertificateHandler* UnityEngine::ResourceManagement::ResourceManager::get_CertificateHandlerInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "get_CertificateHandlerInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::CertificateHandler*, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_CertificateHandlerInstance(::UnityEngine::Networking::CertificateHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "set_CertificateHandlerInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::CertificateHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
/// @param alloc: ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (default: csnull)
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::ResourceManagement::ResourceManager::New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  alloc)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ResourceManager*>(alloc));
}
/// @param alloc: ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (default: csnull)
inline void UnityEngine::ResourceManagement::ResourceManager::_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  alloc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, alloc);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnObjectAdded(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnObjectAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnObjectRemoved(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnObjectRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterForCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterForCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticsCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ClearDiagnosticsCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ClearDiagnosticCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::UnregisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "UnregisterDiagnosticCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, func);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*  func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterDiagnosticCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, func);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterDiagnosticCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, func);
}
inline void UnityEngine::ResourceManagement::ResourceManager::PostDiagnosticEvent(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "PostDiagnosticEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* UnityEngine::ResourceManagement::ResourceManager::GetResourceProvider(::System::Type*  t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "GetResourceProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, false>(*this, ___internal_method, t, location);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceManager::GetDefaultTypeForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  loc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "GetDefaultTypeForLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method, loc);
}
/// @param t: ::System::Type* (default: csnull)
inline int32_t UnityEngine::ResourceManagement::ResourceManager::CalculateLocationsHash(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CalculateLocationsHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, locations, t);
}
/// @param desiredType: ::System::Type* (default: csnull)
/// @param releaseDependenciesOnFailure: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ResourceManager::ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Type*  desiredType, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(*this, ___internal_method, location, desiredType, releaseDependenciesOnFailure);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideResource",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, location);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "StartOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, operation, dependency);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ResourceManager::StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(*this, ___internal_method, operation, dependency);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnInstanceOperationDestroy(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnInstanceOperationDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyNonCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnOperationDestroyNonCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "OnOperationDestroyCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
template<typename T>
inline T UnityEngine::ResourceManagement::ResourceManager::CreateOperation(::System::Type*  actualType, int32_t  typeHash, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  cacheKey, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  onDestroyAction)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, actualType, typeHash, cacheKey, onDestroyAction);
}
inline void UnityEngine::ResourceManagement::ResourceManager::AddOperationToCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "AddOperationToCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, operation);
}
inline bool UnityEngine::ResourceManagement::ResourceManager::RemoveOperationFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RemoveOperationFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
inline bool UnityEngine::ResourceManagement::ResourceManager::IsOperationCached(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "IsOperationCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::CachedOperationCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CachedOperationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperation(TObject  result, ::StringW  errorMsg)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateCompletedOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, result, errorMsg);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperationWithException(TObject  result, ::System::Exception*  exception)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateCompletedOperationWithException",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, result, exception);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperationInternal(TObject  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateCompletedOperationInternal",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, handle);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* UnityEngine::ResourceManagement::ResourceManager::AcquireGroupOpFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "AcquireGroupOpFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*, false>(*this, ___internal_method, key);
}
template<typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateGroupOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(*this, ___internal_method, locations);
}
template<typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  allowFailedDependencies)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateGroupOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(*this, ___internal_method, locations, allowFailedDependencies);
}
/// @param releasedCachedOpOnComplete: bool (default: false)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::CreateGenericGroupOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  operations, bool  releasedCachedOpOnComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CreateGenericGroupOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(*this, ___internal_method, operations, releasedCachedOpOnComplete);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::ProvideResourceGroupCached(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, int32_t  groupHash, ::System::Type*  desiredType, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  callback, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideResourceGroupCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(*this, ___internal_method, locations, groupHash, desiredType, callback, releaseDependenciesOnFailure);
}
/// @param callback: ::System::Action_1<TObject>* (default: csnull)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::ResourceManagement::ResourceManager::ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideResources",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(*this, ___internal_method, locations, callback);
}
/// @param callback: ::System::Action_1<TObject>* (default: csnull)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::ResourceManagement::ResourceManager::ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  releaseDependenciesOnFailure, ::System::Action_1<TObject>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideResources",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(*this, ___internal_method, locations, releaseDependenciesOnFailure, callback);
}
template<typename TObject,typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateChainOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, dependentOp, callback);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateChainOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, dependentOp, callback);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject,typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateChainOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateChainOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceManager::ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*  sceneProvider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(*this, ___internal_method, sceneProvider, location, loadMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceManager::ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*  sceneProvider, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  sceneLoadHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(*this, ___internal_method, sceneProvider, sceneLoadHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> UnityEngine::ResourceManagement::ResourceManager::ProvideInstance(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ProvideInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>, false>(*this, ___internal_method, provider, location, instantiateParameters);
}
inline void UnityEngine::ResourceManagement::ResourceManager::CleanupSceneInstances(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "CleanupSceneInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scene);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ExecuteDeferredCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "ExecuteDeferredCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param incrementRefCount: bool (default: true)
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterForDeferredCallback(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, bool  incrementRefCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "RegisterForDeferredCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, op, incrementRefCount);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Update(float_t  unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unscaledDeltaTime);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::__ctor_b__53_0(::UnityEngine::ResourceManagement::IUpdateReceiver*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                            "<.ctor>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool, ::StringW, bool)>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool, ::System::Exception*, bool)>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_Success(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Success()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Success() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_Exception(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x98>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Exception()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Exception() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x98>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_ReleaseDependenciesOnFailure(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_ReleaseDependenciesOnFailure()  {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>());
}
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Init(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Init(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::*)(int64_t, bool, ::StringW, bool)>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::*)(int64_t, bool, ::System::Exception*, bool)>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__set_m_Success(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__get_m_Success()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__get_m_Success() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__set_m_Exception(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x90>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__get_m_Exception()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__get_m_Exception() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x90>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__set_m_ReleaseDependenciesOnFailure(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__get_m_ReleaseDependenciesOnFailure()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>());
}
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::Init(int64_t  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::Init(int64_t  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<int64_t>*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::*)(bool, bool, ::StringW, bool)>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::*)(bool, bool, ::System::Exception*, bool)>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__set_m_Success(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__get_m_Success()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__get_m_Success() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__set_m_Exception(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x90>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__get_m_Exception()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__get_m_Exception() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x90>(this);
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__set_m_ReleaseDependenciesOnFailure(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__get_m_ReleaseDependenciesOnFailure()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>());
}
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::Init(bool  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::Init(bool  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<bool>*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__set_m_Success(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__get_m_Success()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__get_m_Success() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__set_m_Exception(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x90>(this, std::forward<::System::Exception*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr ::System::Exception* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__get_m_Exception()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x90>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__get_m_Exception() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x90>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__set_m_ReleaseDependenciesOnFailure(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__get_m_ReleaseDependenciesOnFailure()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::Init(TObject  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::Init(TObject  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline bool UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__set_callback(::System::Action_1<TObject>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<TObject>*, 0x10>(this, std::forward<::System::Action_1<TObject>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr ::System::Action_1<TObject>* UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<TObject>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<TObject>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__set_releaseDependenciesOnFailure(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__get_releaseDependenciesOnFailure()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__get_releaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__set___4__this(::UnityEngine::ResourceManagement::ResourceManager*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceManager*, 0x20>(this, std::forward<::UnityEngine::ResourceManagement::ResourceManager*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceManager*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceManager*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline ::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>* UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::_ProvideResources_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>*>::get(),
                            "<ProvideResources>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>::_ProvideResources_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>*>::get(),
                            "<ProvideResources>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(*this, ___internal_method, resultHandle);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
