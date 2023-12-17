#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Classification.get_List
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (*)()>(&::GlobalNamespace::__OVRSceneManager__Classification::get_List)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27852c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get(),
                            "get_List",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSceneManager__Classification::setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get>(std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::__OVRSceneManager__Classification::getStaticF__List_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::__OVRSceneManager__Classification::get_List()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get(),
                            "get_List",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::*)()>(&::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2784614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__set_Floor(::GlobalNamespace::OVRScenePlane*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRScenePlane*, 0x10>(this, std::forward<::GlobalNamespace::OVRScenePlane*>(value));
}
constexpr ::GlobalNamespace::OVRScenePlane* GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Floor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRScenePlane*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Floor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRScenePlane*, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__set_Ceiling(::GlobalNamespace::OVRScenePlane*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRScenePlane*, 0x18>(this, std::forward<::GlobalNamespace::OVRScenePlane*>(value));
}
constexpr ::GlobalNamespace::OVRScenePlane* GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Ceiling()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRScenePlane*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Ceiling() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRScenePlane*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__set_Walls(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Walls()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*> GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Walls() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>());
}
inline void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__OVRSceneManager__LogForwarder::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2782b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__OVRSceneManager__LogForwarder::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2784c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__OVRSceneManager__LogForwarder::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2781f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @param gameObject: ::UnityEngine::GameObject* (default: csnull)
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: csnull)
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: csnull)
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, message, gameObject);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__OVRSceneManager__Development::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27857d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__OVRSceneManager__Development::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2785894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__OVRSceneManager__Development::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2785950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @param gameObject: ::UnityEngine::GameObject* (default: csnull)
inline void GlobalNamespace::__OVRSceneManager__Development::Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: csnull)
inline void GlobalNamespace::__OVRSceneManager__Development::LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: csnull)
inline void GlobalNamespace::__OVRSceneManager__Development::LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::*)()>(&::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x2785a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2785ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__set_isPaused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get_isPaused()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get_isPaused() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__set___4__this(::GlobalNamespace::OVRSceneManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSceneManager*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRSceneManager*>(value));
}
constexpr ::GlobalNamespace::OVRSceneManager* GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneManager*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneManager*> GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneManager*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__set__anchors_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get__anchors_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get__anchors_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__set___7__wrap2(::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>>(value));
}
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___7__wrap2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> const& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__set___u__1(::GlobalNamespace::__OVRTask_1__Awaiter<bool>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__Awaiter<bool>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__Awaiter<bool>>(value));
}
constexpr ::GlobalNamespace::__OVRTask_1__Awaiter<bool>& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___u__1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Awaiter<bool>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRTask_1__Awaiter<bool> const& GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__get___u__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Awaiter<bool>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRSceneManager*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_anchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::__OVRTask_1__Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__OVRSceneManager___OnApplicationPause_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  isPaused, ::GlobalNamespace::OVRSceneManager*  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__2, ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::__OVRTask_1__Awaiter<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x58>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->isPaused = isPaused;
this->__4__this = __4__this;
this->_anchors_5__2 = _anchors_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::*)()>(&::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x2786004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27865fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__set___7__wrap1(::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>>(value));
}
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> const& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__set___7__wrap2(::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>>(value));
}
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___7__wrap2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid> const& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__set___u__1(::GlobalNamespace::__OVRTask_1__Awaiter<bool>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTask_1__Awaiter<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTask_1__Awaiter<bool>>(value));
}
constexpr ::GlobalNamespace::__OVRTask_1__Awaiter<bool>& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___u__1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Awaiter<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRTask_1__Awaiter<bool> const& GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__get___u__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTask_1__Awaiter<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::__OVRTask_1__Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1, ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>  __7__wrap2, ::GlobalNamespace::__OVRTask_1__Awaiter<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::*)()>(&::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27833f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0._DoesRoomSetupExist_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_DoesRoomSetupExist_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2786608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(),
                            "<DoesRoomSetupExist>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x10>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_requestedAnchorClassifications()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_requestedAnchorClassifications() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__set_task(::GlobalNamespace::OVRTask_1<bool>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTask_1<bool>, 0x18>(this, std::forward<::GlobalNamespace::OVRTask_1<bool>>(value));
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_task()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTask_1<bool>, 0x18>(this);
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_task() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTask_1<bool>, 0x18>(this);
}
inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0* GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>());
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_DoesRoomSetupExist_b__0(bool  result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(),
                            "<DoesRoomSetupExist>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, anchors);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::*)()>(&::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2783954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0._CheckClassificationsInRooms_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::*)(bool)>(&::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_CheckClassificationsInRooms_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2786620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(),
                            "<CheckClassificationsInRooms>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x10>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_requestedAnchorClassifications()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_requestedAnchorClassifications() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__set_task(::GlobalNamespace::OVRTask_1<bool>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTask_1<bool>, 0x18>(this, std::forward<::GlobalNamespace::OVRTask_1<bool>>(value));
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_task()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTask_1<bool>, 0x18>(this);
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_task() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTask_1<bool>, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_roomAnchors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_roomAnchors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x28>(this);
}
inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0* GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>());
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_CheckClassificationsInRooms_b__0(bool  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(),
                            "<CheckClassificationsInRooms>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_InitialAnchorParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::get_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "get_InitialAnchorParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.set_InitialAnchorParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::set_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "set_InitialAnchorParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_Verbose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::get_Verbose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2781d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "get_Verbose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Awake)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2781dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool)>(&::GlobalNamespace::OVRSceneManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2782000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.QueryForExistingAnchorsTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27820a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "QueryForExistingAnchorsTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LoadSceneModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::LoadSceneModel)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2782134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "LoadSceneModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnAnchorsFetchCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager::OnAnchorsFetchCompleted)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2782430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnAnchorsFetchCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneRooms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager::InstantiateSceneRooms)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x27824d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "InstantiateSceneRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnSceneRoomLoadCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnSceneRoomLoadCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x278297c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnSceneRoomLoadCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DestroyExistingAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::DestroyExistingAnchors)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x278224c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "DestroyExistingAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2782c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2782d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DoesRoomSetupExist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::DoesRoomSetupExist)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2783194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "DoesRoomSetupExist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfClassificationsAreValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2782d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CheckIfClassificationsAreValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetUuidsToQuery
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRAnchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*)>(&::GlobalNamespace::OVRSceneManager::GetUuidsToQuery)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x27833fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "GetUuidsToQuery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Guid>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckClassificationsInRooms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(&::GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x27834e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CheckClassificationsInRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfAnchorsContainClassifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(&::GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x278395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CheckIfAnchorsContainClassifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CollectLabelsFromAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2783de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CollectLabelsFromAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnTrackingSpaceChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2783f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnTrackingSpaceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x278415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateAllSceneAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2783f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "UpdateAllSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateSomeSceneAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2784160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "UpdateSomeSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetRoomLayoutInformation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2782a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "GetRoomLayoutInformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::StringW)>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2782c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnEnable)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2784690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnDisable)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2784920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OVRManager_SceneCaptureComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(&::GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2784b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OVRManager_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneAnchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSceneAnchor* (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneAnchor*)>(&::GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x2784d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "InstantiateSceneAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2785234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRSceneManager::__set_PlanePrefab(::GlobalNamespace::OVRSceneAnchor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x18>(this, std::forward<::GlobalNamespace::OVRSceneAnchor*>(value));
}
constexpr ::GlobalNamespace::OVRSceneAnchor* GlobalNamespace::OVRSceneManager::__get_PlanePrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> GlobalNamespace::OVRSceneManager::__get_PlanePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x18>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_VolumePrefab(::GlobalNamespace::OVRSceneAnchor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x20>(this, std::forward<::GlobalNamespace::OVRSceneAnchor*>(value));
}
constexpr ::GlobalNamespace::OVRSceneAnchor* GlobalNamespace::OVRSceneManager::__get_VolumePrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> GlobalNamespace::OVRSceneManager::__get_VolumePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x20>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* GlobalNamespace::OVRSceneManager::__get_PrefabOverrides()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*> GlobalNamespace::OVRSceneManager::__get_PrefabOverrides() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*, 0x28>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_VerboseLogging(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__get_VerboseLogging()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__get_VerboseLogging() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_MaxSceneAnchorUpdatesPerFrame(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__get_MaxSceneAnchorUpdatesPerFrame()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__get_MaxSceneAnchorUpdatesPerFrame() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__initialAnchorParent(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x38>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRSceneManager::__get__initialAnchorParent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRSceneManager::__get__initialAnchorParent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_SceneModelLoadedSuccessfully(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x40>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRSceneManager::__get_SceneModelLoadedSuccessfully()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRSceneManager::__get_SceneModelLoadedSuccessfully() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x40>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_NoSceneModelToLoad(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x48>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRSceneManager::__get_NoSceneModelToLoad()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRSceneManager::__get_NoSceneModelToLoad() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_SceneCaptureReturnedWithoutError(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x50>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRSceneManager::__get_SceneCaptureReturnedWithoutError()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRSceneManager::__get_SceneCaptureReturnedWithoutError() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x50>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_UnexpectedErrorWithSceneCapture(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x58>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRSceneManager::__get_UnexpectedErrorWithSceneCapture()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRSceneManager::__get_UnexpectedErrorWithSceneCapture() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x58>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_NewSceneModelAvailable(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x60>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRSceneManager::__get_NewSceneModelAvailable()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRSceneManager::__get_NewSceneModelAvailable() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x60>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_RoomLayout(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*, 0x68>(this, std::forward<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>(value));
}
constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GlobalNamespace::OVRSceneManager::__get_RoomLayout()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*> GlobalNamespace::OVRSceneManager::__get_RoomLayout() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*, 0x68>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__sceneCaptureRequestId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x70>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& GlobalNamespace::OVRSceneManager::__get__sceneCaptureRequestId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x70>(this);
}
constexpr uint64_t const& GlobalNamespace::OVRSceneManager::__get__sceneCaptureRequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x70>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__cameraRig(::GlobalNamespace::OVRCameraRig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRCameraRig*, 0x78>(this, std::forward<::GlobalNamespace::OVRCameraRig*>(value));
}
constexpr ::GlobalNamespace::OVRCameraRig* GlobalNamespace::OVRSceneManager::__get__cameraRig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> GlobalNamespace::OVRSceneManager::__get__cameraRig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x78>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__sceneAnchorUpdateIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__get__sceneAnchorUpdateIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__get__sceneAnchorUpdateIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__roomCounter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__get__roomCounter()  {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__get__roomCounter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__onAnchorsFetchCompleted(::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*, 0x88>(this, std::forward<::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*>(value));
}
constexpr ::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* GlobalNamespace::OVRSceneManager::__get__onAnchorsFetchCompleted()  {
return ::cordl_internals::getInstanceField<::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*> GlobalNamespace::OVRSceneManager::__get__onAnchorsFetchCompleted() const {
return ::cordl_internals::getInstanceField<::System::Action_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*, 0x88>(this);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__hasLoadedScene(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__get__hasLoadedScene()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__get__hasLoadedScene() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
inline ::UnityEngine::Transform* GlobalNamespace::OVRSceneManager::get_InitialAnchorParent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "get_InitialAnchorParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::set_InitialAnchorParent(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "set_InitialAnchorParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> GlobalNamespace::OVRSceneManager::get_Verbose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "get_Verbose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder>, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnApplicationPause(bool  isPaused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isPaused);
}
inline void GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "QueryForExistingAnchorsTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::LoadSceneModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "LoadSceneModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnAnchorsFetchCompleted(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnAnchorsFetchCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, success, roomLayoutAnchors);
}
inline void GlobalNamespace::OVRSceneManager::InstantiateSceneRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomLayoutAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "InstantiateSceneRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, roomLayoutAnchors);
}
inline void GlobalNamespace::OVRSceneManager::OnSceneRoomLoadCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnSceneRoomLoadCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::DestroyExistingAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "DestroyExistingAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, requestedAnchorClassifications);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneManager::DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "DoesRoomSetupExist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(*this, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CheckIfClassificationsAreValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::GetUuidsToQuery(::GlobalNamespace::OVRAnchor  anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*  uuidsToQuery)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "GetUuidsToQuery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Guid>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchor, uuidsToQuery);
}
inline void GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CheckClassificationsInRooms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success, rooms, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomAnchors, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CheckIfAnchorsContainClassifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success, roomAnchors, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::List_1<::StringW>*  labels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "CollectLabelsFromAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, labels);
}
inline void GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged(::UnityEngine::Transform*  trackingSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnTrackingSpaceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingSpace);
}
inline void GlobalNamespace::OVRSceneManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "UpdateAllSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "UpdateSomeSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "GetRoomLayoutInformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::StringW  requestString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, requestString);
}
inline void GlobalNamespace::OVRSceneManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete(uint64_t  requestId, bool  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "OVRManager_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, requestId, result);
}
inline ::GlobalNamespace::OVRSceneAnchor* GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRSceneAnchor*  prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            "InstantiateSceneAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSceneAnchor*, false>(*this, ___internal_method, anchor, prefab);
}
inline ::GlobalNamespace::OVRSceneManager* GlobalNamespace::OVRSceneManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSceneManager*>());
}
inline void GlobalNamespace::OVRSceneManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
