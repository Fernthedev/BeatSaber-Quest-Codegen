#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider2_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)(::UnityEngine::ResourceManagement::ResourceManager*)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bd87c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)(::System::Collections::Generic::HashSet_1<::System::Object*>*)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2bd8bd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bd8820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2bd8cac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::GetDependencies)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2bd8fe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::get_DebugName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2bd9130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::Execute)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2bd91d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.InternalLoadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, bool, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::InternalLoadScene)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2bd9804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "InternalLoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.InternalLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)(::StringW, bool, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::InternalLoad)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bd98d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "InternalLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::Destroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2bd995c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::get_Progress)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bd99ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp.UnityEngine_ResourceManagement_IUpdateReceiver_Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::*)(float_t)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2bd9aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "UnityEngine.ResourceManagement.IUpdateReceiver.Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr  UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__set_m_ActivateOnLoad(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_ActivateOnLoad()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_ActivateOnLoad() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__set_m_Inst(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x98>(this, std::forward<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_Inst()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x98>(this);
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_Inst() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x98>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0xa8>(this, std::forward<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_Location()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_Location() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0xa8>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__set_m_LoadMode(::UnityEngine::SceneManagement::LoadSceneMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::LoadSceneMode, 0xb0>(this, std::forward<::UnityEngine::SceneManagement::LoadSceneMode>(value));
}
constexpr ::UnityEngine::SceneManagement::LoadSceneMode& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_LoadMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::LoadSceneMode, 0xb0>(this);
}
constexpr ::UnityEngine::SceneManagement::LoadSceneMode const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_LoadMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::LoadSceneMode, 0xb0>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__set_m_Priority(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_Priority()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, 0xb8>(this, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(value));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_DepOp()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, 0xb8>(this);
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_DepOp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, 0xb8>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceManager*, 0xd8>(this, std::forward<::UnityEngine::ResourceManagement::ResourceManager*>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_ResourceManager()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceManager*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::__get_m_ResourceManager() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceManager*, 0xd8>(this);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp* UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::New_ctor(::UnityEngine::ResourceManagement::ResourceManager*  rm)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>(rm));
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::_ctor(::UnityEngine::ResourceManagement::ResourceManager*  rm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rm);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(*this, ___internal_method, visited);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::Init(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  depOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, location, loadMode, activateOnLoad, priority, depOp);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::InternalLoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, bool  loadingFromBundle, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "InternalLoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, false>(*this, ___internal_method, location, loadingFromBundle, loadMode, activateOnLoad, priority);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::InternalLoad(::StringW  path, bool  loadingFromBundle, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "InternalLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(*this, ___internal_method, path, loadingFromBundle, mode);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t  unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*>::get(),
                            "UnityEngine.ResourceManagement.IUpdateReceiver.Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unscaledDeltaTime);
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::Init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bd8b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::Execute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2bd9bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bd9e40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp.UnloadSceneCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::*)(::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::UnloadSceneCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2bd9d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "UnloadSceneCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp.UnloadSceneCompletedNoRelease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::*)(::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::UnloadSceneCompletedNoRelease)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bd9d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "UnloadSceneCompletedNoRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::get_Progress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bd9ef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bd8aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__set_m_Instance(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x90>(this, std::forward<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__get_m_Instance()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x90>(this);
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__get_m_Instance() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x90>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__set_m_sceneLoadHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0xa0>(this, std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__get_m_sceneLoadHandle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0xa0>(this);
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__get_m_sceneLoadHandle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0xa0>(this);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__set_m_UnloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::UnloadSceneOptions, 0xc0>(this, std::forward<::UnityEngine::SceneManagement::UnloadSceneOptions>(value));
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__get_m_UnloadOptions()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::UnloadSceneOptions, 0xc0>(this);
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::__get_m_UnloadOptions() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::UnloadSceneOptions, 0xc0>(this);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  sceneLoadHandle, ::UnityEngine::SceneManagement::UnloadSceneOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneLoadHandle, options);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::UnloadSceneCompleted(::UnityEngine::AsyncOperation*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "UnloadSceneCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::UnloadSceneCompletedNoRelease(::UnityEngine::AsyncOperation*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "UnloadSceneCompletedNoRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp* UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ProvideScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2bd8468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            "ProvideScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ReleaseScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bd88e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            "ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2bd89cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd8bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2"
constexpr  UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
constexpr  UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(static_cast<void*>(this));
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene(::UnityEngine::ResourceManagement::ResourceManager*  resourceManager, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            "ProvideScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(*this, ___internal_method, resourceManager, location, loadMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager*  resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  sceneLoadHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            "ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(*this, ___internal_method, resourceManager, sceneLoadHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager*  resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  sceneLoadHandle, ::UnityEngine::SceneManagement::UnloadSceneOptions  unloadOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(*this, ___internal_method, resourceManager, sceneLoadHandle, unloadOptions);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider* UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
