#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneLoader_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneLoader_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader__SceneInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader__SceneInfo::*)(::System::Collections::Generic::List_1<::StringW>*, int64_t)>(&::GlobalNamespace::__OVRSceneLoader__SceneInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27818b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRSceneLoader__SceneInfo::__set_scenes(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__OVRSceneLoader__SceneInfo::__get_scenes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__OVRSceneLoader__SceneInfo::__get_scenes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRSceneLoader__SceneInfo::__set_version(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::__OVRSceneLoader__SceneInfo::__get_version()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& GlobalNamespace::__OVRSceneLoader__SceneInfo::__get_version() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRSceneLoader__SceneInfo::_ctor(::System::Collections::Generic::List_1<::StringW>*  sceneList, int64_t  currentSceneEpochVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneList, currentSceneEpochVersion);
}
// Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo::__OVRSceneLoader__SceneInfo(::System::Collections::Generic::List_1<::StringW>*  scenes, int64_t  version) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->scenes = scenes;
this->version = version;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)(int32_t)>(&::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27816a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(&::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27818bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(&::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27818c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(&::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(&::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x278196c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(&::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27819ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__set___4__this(::GlobalNamespace::OVRSceneLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSceneLoader*, 0x20>(this, std::forward<::GlobalNamespace::OVRSceneLoader*>(value));
}
constexpr ::GlobalNamespace::OVRSceneLoader* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneLoader*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneLoader*> GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneLoader*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>(__1__state));
}
inline void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)(int32_t)>(&::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27816d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(&::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27819b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(&::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x27819b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(&::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(&::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2781d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(&::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__set___4__this(::GlobalNamespace::OVRSceneLoader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSceneLoader*, 0x20>(this, std::forward<::GlobalNamespace::OVRSceneLoader*>(value));
}
constexpr ::GlobalNamespace::OVRSceneLoader* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneLoader*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneLoader*> GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneLoader*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>(__1__state));
}
inline void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2780398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Start)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2780404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.LoadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)(::GlobalNamespace::__OVRSceneLoader__SceneInfo)>(&::GlobalNamespace::OVRSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x2780844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "LoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.LoadSceneOperation_completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27810f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "LoadSceneOperation_completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2781234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.UpdateCanvasPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x27814a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "UpdateCanvasPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.GetSceneInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSceneLoader__SceneInfo (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::GetSceneInfo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x27805b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "GetSceneInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.DelayCanvasPosUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2780550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "DelayCanvasPosUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.onCheckSceneCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27811cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "onCheckSceneCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.DestroyAllGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27816f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "DestroyAllGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2781808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRSceneLoader::__set_sceneCheckIntervalSeconds(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRSceneLoader::__get_sceneCheckIntervalSeconds()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__get_sceneCheckIntervalSeconds() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_logCloseTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRSceneLoader::__get_logCloseTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__get_logCloseTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_mainCanvas(::UnityEngine::Canvas*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Canvas*, 0x20>(this, std::forward<::UnityEngine::Canvas*>(value));
}
constexpr ::UnityEngine::Canvas* GlobalNamespace::OVRSceneLoader::__get_mainCanvas()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Canvas*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> GlobalNamespace::OVRSceneLoader::__get_mainCanvas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Canvas*, 0x20>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_logTextBox(::UnityEngine::UI::Text*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Text*, 0x28>(this, std::forward<::UnityEngine::UI::Text*>(value));
}
constexpr ::UnityEngine::UI::Text* GlobalNamespace::OVRSceneLoader::__get_logTextBox()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Text*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> GlobalNamespace::OVRSceneLoader::__get_logTextBox() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Text*, 0x28>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_loadSceneOperation(::UnityEngine::AsyncOperation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AsyncOperation*, 0x30>(this, std::forward<::UnityEngine::AsyncOperation*>(value));
}
constexpr ::UnityEngine::AsyncOperation* GlobalNamespace::OVRSceneLoader::__get_loadSceneOperation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AsyncOperation*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> GlobalNamespace::OVRSceneLoader::__get_loadSceneOperation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AsyncOperation*, 0x30>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_formattedLogText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__get_formattedLogText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__get_formattedLogText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_closeLogTimer(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRSceneLoader::__get_closeLogTimer()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__get_closeLogTimer() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_closeLogDialogue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRSceneLoader::__get_closeLogDialogue()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& GlobalNamespace::OVRSceneLoader::__get_closeLogDialogue() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_canvasPosUpdated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x45>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRSceneLoader::__get_canvasPosUpdated()  {
return ::cordl_internals::getInstanceField<bool, 0x45>(this);
}
constexpr bool const& GlobalNamespace::OVRSceneLoader::__get_canvasPosUpdated() const {
return ::cordl_internals::getInstanceField<bool, 0x45>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_scenePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__get_scenePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__get_scenePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_sceneLoadDataPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__get_sceneLoadDataPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__get_sceneLoadDataPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_loadedAssetBundles(::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*, 0x58>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>* GlobalNamespace::OVRSceneLoader::__get_loadedAssetBundles()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*> GlobalNamespace::OVRSceneLoader::__get_loadedAssetBundles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*, 0x58>(this);
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_currentSceneInfo(::GlobalNamespace::__OVRSceneLoader__SceneInfo  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRSceneLoader__SceneInfo, 0x60>(this, std::forward<::GlobalNamespace::__OVRSceneLoader__SceneInfo>(value));
}
constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo& GlobalNamespace::OVRSceneLoader::__get_currentSceneInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSceneLoader__SceneInfo, 0x60>(this);
}
constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo const& GlobalNamespace::OVRSceneLoader::__get_currentSceneInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSceneLoader__SceneInfo, 0x60>(this);
}
inline void GlobalNamespace::OVRSceneLoader::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::LoadScene(::GlobalNamespace::__OVRSceneLoader__SceneInfo  sceneInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "LoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneInfo);
}
inline void GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed(::UnityEngine::AsyncOperation*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "LoadSceneOperation_completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void GlobalNamespace::OVRSceneLoader::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "UpdateCanvasPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSceneLoader__SceneInfo GlobalNamespace::OVRSceneLoader::GetSceneInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "GetSceneInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSceneLoader__SceneInfo, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "DelayCanvasPosUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "onCheckSceneCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            "DestroyAllGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneLoader* GlobalNamespace::OVRSceneLoader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSceneLoader*>());
}
inline void GlobalNamespace::OVRSceneLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
