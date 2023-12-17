#pragma once
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPhysicsRaycaster_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRBone_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
constexpr void GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::__OVRVirtualKeyboard__KeyboardPosition(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition  GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::Far{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition  GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::Near{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition  GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::Direct{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition  GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition::Custom{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__set_root(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__get_root()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__get_root() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__set_originalPose(::GlobalNamespace::OVRPose  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRPose, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRPose>(value));
}
constexpr ::GlobalNamespace::OVRPose& GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__get_originalPose()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRPose, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::OVRPose const& GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__get_originalPose() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRPose, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__set_targetPose(::GlobalNamespace::OVRPose  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRPose, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRPose>(value));
}
constexpr ::GlobalNamespace::OVRPose& GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__get_targetPose()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRPose, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::OVRPose const& GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__get_targetPose() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRPose, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::Transform*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "originalPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData(::UnityEngine::Transform*  root, ::GlobalNamespace::OVRPose  originalPose, ::GlobalNamespace::OVRPose  targetPose) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->root = root;
this->originalPose = originalPose;
this->targetPose = targetPose;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::*)(int32_t)>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x279e4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x279e518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x279e51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279e5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x279e5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279e600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__set___4__this(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*, 0x20>(this, std::forward<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>(value));
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*> GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>(__1__state));
}
inline void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride___RevertInteractorOverrides_d__6*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride.Enqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::*)(::UnityEngine::Transform*, ::GlobalNamespace::__OVRPlugin__Posef)>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::Enqueue)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x279d634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Posef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride.LateApply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::*)(::UnityEngine::MonoBehaviour*)>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::LateApply)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x279d3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "LateApply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::Reset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x279e450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride.RevertInteractorOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::RevertInteractorOverrides)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279e3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "RevertInteractorOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride.ApplyOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData)>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::ApplyOverride)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x279e30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "ApplyOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x279e03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::__set_applyQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*, 0x10>(this, std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::__get_applyQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::__get_applyQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::__set_revertQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*, 0x18>(this, std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::__get_revertQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::__get_revertQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*, 0x18>(this);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::Enqueue(::UnityEngine::Transform*  interactorRootTransform, ::GlobalNamespace::__OVRPlugin__Posef  interactorRootPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Posef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, interactorRootTransform, interactorRootPose);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::LateApply(::UnityEngine::MonoBehaviour*  coroutineRunner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "LateApply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, coroutineRunner);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::RevertInteractorOverrides()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "RevertInteractorOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::ApplyOverride(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData  interactorOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            "ApplyOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactorOverride);
}
inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>());
}
inline void GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__InputSource::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRVirtualKeyboard__InputSource::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRVirtualKeyboard__InputSource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource::__OVRVirtualKeyboard__InputSource(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  GlobalNamespace::__OVRVirtualKeyboard__InputSource::ControllerLeft{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  GlobalNamespace::__OVRVirtualKeyboard__InputSource::ControllerRight{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  GlobalNamespace::__OVRVirtualKeyboard__InputSource::HandLeft{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  GlobalNamespace::__OVRVirtualKeyboard__InputSource::HandRight{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__IInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__IInputSource::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRVirtualKeyboard__IInputSource::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x279e608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource.OnUpdatedAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::*)(::GlobalNamespace::OVRCameraRig*)>(&::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::OnUpdatedAnchors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x279e6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            "OnUpdatedAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCameraRig*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x279e708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource.UpdateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::UpdateInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::Dispose)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x279e720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__OVRVirtualKeyboard__IInputSource"
constexpr  GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::operator ::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*() noexcept {
return static_cast<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::__set__operatingWithoutOVRCameraRig(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::__get__operatingWithoutOVRCameraRig()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::__get__operatingWithoutOVRCameraRig() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::__set__rig(::GlobalNamespace::OVRCameraRig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRCameraRig*, 0x18>(this, std::forward<::GlobalNamespace::OVRCameraRig*>(value));
}
constexpr ::GlobalNamespace::OVRCameraRig* GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::__get__rig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::__get__rig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x18>(this);
}
inline ::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource* GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>());
}
inline void GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::OnUpdatedAnchors(::GlobalNamespace::OVRCameraRig*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            "OnUpdatedAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCameraRig*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::UpdateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            "UpdateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__BaseInputSource*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource.get_TriggerIsPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::get_TriggerIsPressed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x279e7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>::get(),
                            "get_TriggerIsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::*)(::GlobalNamespace::OVRVirtualKeyboard*, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource, ::GlobalNamespace::__OVRInput__Controller, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279d800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource.UpdateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::UpdateInput)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x279e854;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__set__rootTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__rootTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__rootTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__set__directTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__directTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__directTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__set__inputSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InputSource, 0x30>(this, std::forward<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>(value));
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__inputSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InputSource, 0x30>(this);
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__inputSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InputSource, 0x30>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__set__controllerType(::GlobalNamespace::__OVRInput__Controller  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__Controller, 0x34>(this, std::forward<::GlobalNamespace::__OVRInput__Controller>(value));
}
constexpr ::GlobalNamespace::__OVRInput__Controller& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__controllerType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__Controller, 0x34>(this);
}
constexpr ::GlobalNamespace::__OVRInput__Controller const& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__controllerType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__Controller, 0x34>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__set__keyboard(::GlobalNamespace::OVRVirtualKeyboard*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRVirtualKeyboard*, 0x38>(this, std::forward<::GlobalNamespace::OVRVirtualKeyboard*>(value));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard* GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__keyboard()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRVirtualKeyboard*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__keyboard() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRVirtualKeyboard*, 0x38>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__set__lastFrameCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__lastFrameCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__lastFrameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__set__triggerButton(::GlobalNamespace::__OVRInput__RawButton  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x44>(this, std::forward<::GlobalNamespace::__OVRInput__RawButton>(value));
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__triggerButton()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x44>(this);
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::__get__triggerButton() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x44>(this);
}
inline bool GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::get_TriggerIsPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>::get(),
                            "get_TriggerIsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource* GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::New_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  inputSource, ::GlobalNamespace::__OVRInput__Controller  controllerType, ::UnityEngine::Transform*  rootTransform, ::UnityEngine::Transform*  directTransform)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>(keyboard, inputSource, controllerType, rootTransform, directTransform));
}
inline void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  inputSource, ::GlobalNamespace::__OVRInput__Controller  controllerType, ::UnityEngine::Transform*  rootTransform, ::UnityEngine::Transform*  directTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyboard, inputSource, controllerType, rootTransform, directTransform);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource::UpdateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__ControllerInputSource*>::get(),
                            "UpdateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279ed78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c._UpdateInput_b__6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::*)(::GlobalNamespace::OVRBone*)>(&::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::_UpdateInput_b__6_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x279ed80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get(),
                            "<UpdateInput>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c._UpdateInput_b__6_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::*)(::GlobalNamespace::OVRBone*)>(&::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::_UpdateInput_b__6_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x279eda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get(),
                            "<UpdateInput>b__6_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::setStaticF___9(::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get>(std::forward<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>(value));
}
inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get>();
}
inline void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::OVRBone*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OVRBone*,bool>* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get>();
}
inline void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::OVRBone*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OVRBone*,bool>* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::getStaticF___9__6_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OVRBone*,bool>*, "<>9__6_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get>();
}
inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>());
}
inline void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::_UpdateInput_b__6_0(::GlobalNamespace::OVRBone*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get(),
                            "<UpdateInput>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, b);
}
inline bool GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c::_UpdateInput_b__6_1(::GlobalNamespace::OVRBone*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource____c*>::get(),
                            "<UpdateInput>b__6_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBone*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, b);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::*)(::GlobalNamespace::OVRVirtualKeyboard*, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource, ::GlobalNamespace::OVRHand*)>(&::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x279d868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource.UpdateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::UpdateInput)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x279e9e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__set__hand(::GlobalNamespace::OVRHand*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRHand*, 0x20>(this, std::forward<::GlobalNamespace::OVRHand*>(value));
}
constexpr ::GlobalNamespace::OVRHand* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__hand()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRHand*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__hand() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRHand*, 0x20>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__set__inputSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InputSource, 0x28>(this, std::forward<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>(value));
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource& GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__inputSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InputSource, 0x28>(this);
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InputSource const& GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__inputSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InputSource, 0x28>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__set__keyboard(::GlobalNamespace::OVRVirtualKeyboard*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRVirtualKeyboard*, 0x30>(this, std::forward<::GlobalNamespace::OVRVirtualKeyboard*>(value));
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__keyboard()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRVirtualKeyboard*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__keyboard() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRVirtualKeyboard*, 0x30>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__set__skeleton(::GlobalNamespace::OVRSkeleton*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSkeleton*, 0x38>(this, std::forward<::GlobalNamespace::OVRSkeleton*>(value));
}
constexpr ::GlobalNamespace::OVRSkeleton* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__skeleton()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSkeleton*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeleton*> GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__skeleton() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSkeleton*, 0x38>(this);
}
constexpr void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__set__lastFrameCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__lastFrameCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::__get__lastFrameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
inline ::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource* GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::New_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  inputSource, ::GlobalNamespace::OVRHand*  hand)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource*>(keyboard, inputSource, hand));
}
inline void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  inputSource, ::GlobalNamespace::OVRHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyboard, inputSource, hand);
}
inline void GlobalNamespace::__OVRVirtualKeyboard__HandInputSource::UpdateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard__HandInputSource*>::get(),
                            "UpdateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboard____c::*)()>(&::GlobalNamespace::__OVRVirtualKeyboard____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279ee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard____c._LoadRuntimeVirtualKeyboardMesh_b__68_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRVirtualKeyboard____c::*)(::StringW)>(&::GlobalNamespace::__OVRVirtualKeyboard____c::_LoadRuntimeVirtualKeyboardMesh_b__68_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x279ee2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get(),
                            "<LoadRuntimeVirtualKeyboardMesh>b__68_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboard____c._PopulateCollision_b__70_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRVirtualKeyboard____c::*)(::UnityEngine::MeshFilter*)>(&::GlobalNamespace::__OVRVirtualKeyboard____c::_PopulateCollision_b__70_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279eeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get(),
                            "<PopulateCollision>b__70_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshFilter*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRVirtualKeyboard____c::setStaticF___9(::GlobalNamespace::__OVRVirtualKeyboard____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRVirtualKeyboard____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get>(std::forward<::GlobalNamespace::__OVRVirtualKeyboard____c*>(value));
}
inline ::GlobalNamespace::__OVRVirtualKeyboard____c* GlobalNamespace::__OVRVirtualKeyboard____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRVirtualKeyboard____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get>();
}
inline void GlobalNamespace::__OVRVirtualKeyboard____c::setStaticF___9__68_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__68_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* GlobalNamespace::__OVRVirtualKeyboard____c::getStaticF___9__68_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__68_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get>();
}
inline void GlobalNamespace::__OVRVirtualKeyboard____c::setStaticF___9__70_0(::System::Func_2<::UnityEngine::MeshFilter*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::MeshFilter*,bool>*, "<>9__70_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get>(std::forward<::System::Func_2<::UnityEngine::MeshFilter*,bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::MeshFilter*,bool>* GlobalNamespace::__OVRVirtualKeyboard____c::getStaticF___9__70_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::MeshFilter*,bool>*, "<>9__70_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get>();
}
inline ::GlobalNamespace::__OVRVirtualKeyboard____c* GlobalNamespace::__OVRVirtualKeyboard____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRVirtualKeyboard____c*>());
}
inline void GlobalNamespace::__OVRVirtualKeyboard____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRVirtualKeyboard____c::_LoadRuntimeVirtualKeyboardMesh_b__68_0(::StringW  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get(),
                            "<LoadRuntimeVirtualKeyboardMesh>b__68_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, p);
}
inline bool GlobalNamespace::__OVRVirtualKeyboard____c::_PopulateCollision_b__70_0(::UnityEngine::MeshFilter*  mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboard____c*>::get(),
                            "<PopulateCollision>b__70_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshFilter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, mesh);
}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_CommitText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_CommitText)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2799bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_CommitText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_CommitText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_CommitText)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2799c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_CommitText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_Backspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_Backspace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2799d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_Backspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_Backspace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2799dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_Enter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_Enter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2799e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_Enter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_Enter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_Enter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2799ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_Enter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_KeyboardShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_KeyboardShown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2799f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_KeyboardShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_KeyboardShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardShown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x279a030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_KeyboardShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.add_KeyboardHidden
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::add_KeyboardHidden)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x279a0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_KeyboardHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.remove_KeyboardHidden
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::System::Action*)>(&::GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardHidden)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x279a168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_KeyboardHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.get_Collider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Collider* (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::get_Collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279a204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "get_Collider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.set_Collider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::OVRVirtualKeyboard::set_Collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279a20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "set_Collider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.get_TextCommitField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::InputField* (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::get_TextCommitField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279a214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "get_TextCommitField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.set_TextCommitField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::UI::InputField*)>(&::GlobalNamespace::OVRVirtualKeyboard::set_TextCommitField)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x279a21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "set_TextCommitField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::InputField*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::Awake)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x279a498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnDestroy)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x279a9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x279ae14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x279b12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UseSuggestedLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition)>(&::GlobalNamespace::OVRVirtualKeyboard::UseSuggestedLocation)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x279b144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UseSuggestedLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SendVirtualKeyboardRayInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Transform*, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource, bool, bool)>(&::GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardRayInput)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x279b6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SendVirtualKeyboardRayInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SendVirtualKeyboardDirectInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Vector3, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource, bool, ::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardDirectInput)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x279bc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SendVirtualKeyboardDirectInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::GlobalNamespace::__OVRPlugin__EventDataBuffer)>(&::GlobalNamespace::OVRVirtualKeyboard::OnEvent)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x279bcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__EventDataBuffer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ChangeTextContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::ChangeTextContext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x279be1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ChangeTextContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.LoadRuntimeVirtualKeyboardMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::LoadRuntimeVirtualKeyboardMesh)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x279befc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "LoadRuntimeVirtualKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ApplyHideFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::ApplyHideFlags)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x279c2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ApplyHideFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.PopulateCollision
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::PopulateCollision)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x279c350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "PopulateCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ShowKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::ShowKeyboard)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x279ae18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ShowKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SetKeyboardVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(bool)>(&::GlobalNamespace::OVRVirtualKeyboard::SetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x279c5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SetKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.HideKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::HideKeyboard)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x279b130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "HideKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.DestroyKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::DestroyKeyboard)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x279acb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "DestroyKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.MaxElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRVirtualKeyboard::MaxElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x279c71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "MaxElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ComputeLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo (::GlobalNamespace::OVRVirtualKeyboard::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::ComputeLocation)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x279b368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ComputeLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x279c730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::LateUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x279d3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SendVirtualKeyboardInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource, ::GlobalNamespace::OVRPose, bool, ::UnityEngine::Transform*)>(&::GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardInput)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x279ba04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SendVirtualKeyboardInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UpdateInputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::UpdateInputs)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x279c760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UpdateInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.SyncKeyboardLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::SyncKeyboardLocation)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x279b420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SyncKeyboardLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UpdateAnimationState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::UpdateAnimationState)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x279cc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UpdateAnimationState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnCommitText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::OnCommitText)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x279da2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnCommitText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnTextCommitFieldChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::OnTextCommitFieldChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279dc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnTextCommitFieldChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.ChangeTextContextInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRVirtualKeyboard::ChangeTextContextInternal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x279a3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ChangeTextContextInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnBackspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnBackspace)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x279dc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnBackspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnEnter)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x279de74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnKeyboardShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnKeyboardShown)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x279df4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnKeyboardShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.OnKeyboardHidden
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::OnKeyboardHidden)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x279df64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnKeyboardHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard.UpdateVisibleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::UpdateVisibleState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x279c574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UpdateVisibleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboard::*)()>(&::GlobalNamespace::OVRVirtualKeyboard::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x279df78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboard._LoadRuntimeVirtualKeyboardMesh_b__68_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (::GlobalNamespace::OVRVirtualKeyboard::*)(::StringW, ::UnityEngine::Material*)>(&::GlobalNamespace::OVRVirtualKeyboard::_LoadRuntimeVirtualKeyboardMesh_b__68_1)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x279e0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "<LoadRuntimeVirtualKeyboardMesh>b__68_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__OVRManager__EventListener"
constexpr  GlobalNamespace::OVRVirtualKeyboard::operator ::GlobalNamespace::__OVRManager__EventListener*() noexcept {
return static_cast<::GlobalNamespace::__OVRManager__EventListener*>(static_cast<void*>(this));
}
inline void GlobalNamespace::OVRVirtualKeyboard::setStaticF_singleton_(::GlobalNamespace::OVRVirtualKeyboard*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRVirtualKeyboard*, "singleton_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get>(std::forward<::GlobalNamespace::OVRVirtualKeyboard*>(value));
}
inline ::GlobalNamespace::OVRVirtualKeyboard* GlobalNamespace::OVRVirtualKeyboard::getStaticF_singleton_()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRVirtualKeyboard*, "singleton_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get>();
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_CommitText(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::StringW>*, 0x18>(this, std::forward<::System::Action_1<::StringW>*>(value));
}
constexpr ::System::Action_1<::StringW>* GlobalNamespace::OVRVirtualKeyboard::__get_CommitText()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::StringW>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> GlobalNamespace::OVRVirtualKeyboard::__get_CommitText() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::StringW>*, 0x18>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_Backspace(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRVirtualKeyboard::__get_Backspace()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRVirtualKeyboard::__get_Backspace() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_Enter(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x28>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRVirtualKeyboard::__get_Enter()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRVirtualKeyboard::__get_Enter() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x28>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_KeyboardShown(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x30>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRVirtualKeyboard::__get_KeyboardShown()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRVirtualKeyboard::__get_KeyboardShown() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x30>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_KeyboardHidden(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x38>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::OVRVirtualKeyboard::__get_KeyboardHidden()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::OVRVirtualKeyboard::__get_KeyboardHidden() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set__Collider_k__BackingField(::UnityEngine::Collider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Collider*, 0x40>(this, std::forward<::UnityEngine::Collider*>(value));
}
constexpr ::UnityEngine::Collider* GlobalNamespace::OVRVirtualKeyboard::__get__Collider_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> GlobalNamespace::OVRVirtualKeyboard::__get__Collider_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider*, 0x40>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_InitialPosition(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition, 0x48>(this, std::forward<::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition>(value));
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition& GlobalNamespace::OVRVirtualKeyboard::__get_InitialPosition()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition, 0x48>(this);
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition const& GlobalNamespace::OVRVirtualKeyboard::__get_InitialPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition, 0x48>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_textCommitField(::UnityEngine::UI::InputField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::InputField*, 0x50>(this, std::forward<::UnityEngine::UI::InputField*>(value));
}
constexpr ::UnityEngine::UI::InputField* GlobalNamespace::OVRVirtualKeyboard::__get_textCommitField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> GlobalNamespace::OVRVirtualKeyboard::__get_textCommitField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x50>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_leftControllerRootTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x58>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRVirtualKeyboard::__get_leftControllerRootTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRVirtualKeyboard::__get_leftControllerRootTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_leftControllerDirectTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x60>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRVirtualKeyboard::__get_leftControllerDirectTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRVirtualKeyboard::__get_leftControllerDirectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_rightControllerRootTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x68>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRVirtualKeyboard::__get_rightControllerRootTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRVirtualKeyboard::__get_rightControllerRootTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x68>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_rightControllerDirectTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x70>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRVirtualKeyboard::__get_rightControllerDirectTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRVirtualKeyboard::__get_rightControllerDirectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x70>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_controllerDirectInteraction(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_controllerDirectInteraction()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_controllerDirectInteraction() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_controllerRayInteraction(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x79>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_controllerRayInteraction()  {
return ::cordl_internals::getInstanceField<bool, 0x79>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_controllerRayInteraction() const {
return ::cordl_internals::getInstanceField<bool, 0x79>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_controllerRaycaster(::UnityEngine::EventSystems::OVRPhysicsRaycaster*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::OVRPhysicsRaycaster*, 0x80>(this, std::forward<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(value));
}
constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster* GlobalNamespace::OVRVirtualKeyboard::__get_controllerRaycaster()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::OVRPhysicsRaycaster*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRPhysicsRaycaster*> GlobalNamespace::OVRVirtualKeyboard::__get_controllerRaycaster() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::OVRPhysicsRaycaster*, 0x80>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_handLeft(::GlobalNamespace::OVRHand*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRHand*, 0x88>(this, std::forward<::GlobalNamespace::OVRHand*>(value));
}
constexpr ::GlobalNamespace::OVRHand* GlobalNamespace::OVRVirtualKeyboard::__get_handLeft()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRHand*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> GlobalNamespace::OVRVirtualKeyboard::__get_handLeft() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRHand*, 0x88>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_handRight(::GlobalNamespace::OVRHand*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRHand*, 0x90>(this, std::forward<::GlobalNamespace::OVRHand*>(value));
}
constexpr ::GlobalNamespace::OVRHand* GlobalNamespace::OVRVirtualKeyboard::__get_handRight()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRHand*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> GlobalNamespace::OVRVirtualKeyboard::__get_handRight() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRHand*, 0x90>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_handDirectInteraction(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_handDirectInteraction()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_handDirectInteraction() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_handRayInteraction(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x99>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_handRayInteraction()  {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_handRayInteraction() const {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_handRaycaster(::UnityEngine::EventSystems::OVRPhysicsRaycaster*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::OVRPhysicsRaycaster*, 0xa0>(this, std::forward<::UnityEngine::EventSystems::OVRPhysicsRaycaster*>(value));
}
constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster* GlobalNamespace::OVRVirtualKeyboard::__get_handRaycaster()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::OVRPhysicsRaycaster*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRPhysicsRaycaster*> GlobalNamespace::OVRVirtualKeyboard::__get_handRaycaster() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::OVRPhysicsRaycaster*, 0xa0>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_keyboardModelShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0xa8>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRVirtualKeyboard::__get_keyboardModelShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRVirtualKeyboard::__get_keyboardModelShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xa8>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_keyboardModelAlphaBlendShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0xb0>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRVirtualKeyboard::__get_keyboardModelAlphaBlendShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRVirtualKeyboard::__get_keyboardModelAlphaBlendShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xb0>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_InputEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_InputEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_InputEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_isKeyboardCreated_(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb9>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_isKeyboardCreated_()  {
return ::cordl_internals::getInstanceField<bool, 0xb9>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_isKeyboardCreated_() const {
return ::cordl_internals::getInstanceField<bool, 0xb9>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_keyboardSpace_(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0xc0>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& GlobalNamespace::OVRVirtualKeyboard::__get_keyboardSpace_()  {
return ::cordl_internals::getInstanceField<uint64_t, 0xc0>(this);
}
constexpr uint64_t const& GlobalNamespace::OVRVirtualKeyboard::__get_keyboardSpace_() const {
return ::cordl_internals::getInstanceField<uint64_t, 0xc0>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_virtualKeyboardTextures_(::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*, 0xc8>(this, std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* GlobalNamespace::OVRVirtualKeyboard::__get_virtualKeyboardTextures_()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*> GlobalNamespace::OVRVirtualKeyboard::__get_virtualKeyboardTextures_() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::UnityEngine::Material*>*>*, 0xc8>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_virtualKeyboardScene_(::GlobalNamespace::OVRGLTFScene  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRGLTFScene, 0xd0>(this, std::forward<::GlobalNamespace::OVRGLTFScene>(value));
}
constexpr ::GlobalNamespace::OVRGLTFScene& GlobalNamespace::OVRVirtualKeyboard::__get_virtualKeyboardScene_()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRGLTFScene, 0xd0>(this);
}
constexpr ::GlobalNamespace::OVRGLTFScene const& GlobalNamespace::OVRVirtualKeyboard::__get_virtualKeyboardScene_() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRGLTFScene, 0xd0>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_virtualKeyboardModelKey_(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0xf8>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& GlobalNamespace::OVRVirtualKeyboard::__get_virtualKeyboardModelKey_()  {
return ::cordl_internals::getInstanceField<uint64_t, 0xf8>(this);
}
constexpr uint64_t const& GlobalNamespace::OVRVirtualKeyboard::__get_virtualKeyboardModelKey_() const {
return ::cordl_internals::getInstanceField<uint64_t, 0xf8>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_modelInitialized_(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x100>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_modelInitialized_()  {
return ::cordl_internals::getInstanceField<bool, 0x100>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_modelInitialized_() const {
return ::cordl_internals::getInstanceField<bool, 0x100>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_modelAvailable_(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x101>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_modelAvailable_()  {
return ::cordl_internals::getInstanceField<bool, 0x101>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_modelAvailable_() const {
return ::cordl_internals::getInstanceField<bool, 0x101>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_keyboardVisible_(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x102>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_keyboardVisible_()  {
return ::cordl_internals::getInstanceField<bool, 0x102>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_keyboardVisible_() const {
return ::cordl_internals::getInstanceField<bool, 0x102>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set__interactorRootTransformOverride(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*, 0x108>(this, std::forward<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*>(value));
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride* GlobalNamespace::OVRVirtualKeyboard::__get__interactorRootTransformOverride()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*> GlobalNamespace::OVRVirtualKeyboard::__get__interactorRootTransformOverride() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride*, 0x108>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set__inputSources(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*, 0x110>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>* GlobalNamespace::OVRVirtualKeyboard::__get__inputSources()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*> GlobalNamespace::OVRVirtualKeyboard::__get__inputSources() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRVirtualKeyboard__IInputSource*>*, 0x110>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_ignoreTextCommmitFieldOnValueChanged_(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x118>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboard::__get_ignoreTextCommmitFieldOnValueChanged_()  {
return ::cordl_internals::getInstanceField<bool, 0x118>(this);
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboard::__get_ignoreTextCommmitFieldOnValueChanged_() const {
return ::cordl_internals::getInstanceField<bool, 0x118>(this);
}
constexpr void GlobalNamespace::OVRVirtualKeyboard::__set_runtimeInputField_(::UnityEngine::UI::InputField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::InputField*, 0x120>(this, std::forward<::UnityEngine::UI::InputField*>(value));
}
constexpr ::UnityEngine::UI::InputField* GlobalNamespace::OVRVirtualKeyboard::__get_runtimeInputField_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> GlobalNamespace::OVRVirtualKeyboard::__get_runtimeInputField_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x120>(this);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_CommitText(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_CommitText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_CommitText(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_CommitText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_Backspace(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_Backspace(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_Enter(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_Enter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_Enter(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_Enter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_KeyboardShown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_KeyboardShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardShown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_KeyboardShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::add_KeyboardHidden(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "add_KeyboardHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::remove_KeyboardHidden(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "remove_KeyboardHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Collider* GlobalNamespace::OVRVirtualKeyboard::get_Collider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "get_Collider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Collider*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::set_Collider(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "set_Collider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField* GlobalNamespace::OVRVirtualKeyboard::get_TextCommitField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "get_TextCommitField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::set_TextCommitField(::UnityEngine::UI::InputField*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "set_TextCommitField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::InputField*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRVirtualKeyboard::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UseSuggestedLocation(::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UseSuggestedLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__KeyboardPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, position);
}
/// @param useRaycastMask: bool (default: true)
inline void GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardRayInput(::UnityEngine::Transform*  inputTransform, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  source, bool  isPressed, bool  useRaycastMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SendVirtualKeyboardRayInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputTransform, source, isPressed, useRaycastMask);
}
/// @param interactorRootTransform: ::UnityEngine::Transform* (default: csnull)
inline void GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardDirectInput(::UnityEngine::Vector3  position, ::GlobalNamespace::__OVRVirtualKeyboard__InputSource  source, bool  isPressed, ::UnityEngine::Transform*  interactorRootTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SendVirtualKeyboardDirectInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRVirtualKeyboard__InputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, position, source, isPressed, interactorRootTransform);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnEvent(::GlobalNamespace::__OVRPlugin__EventDataBuffer  eventDataBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__EventDataBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventDataBuffer);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ChangeTextContext(::StringW  textContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ChangeTextContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, textContext);
}
inline bool GlobalNamespace::OVRVirtualKeyboard::LoadRuntimeVirtualKeyboardMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "LoadRuntimeVirtualKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ApplyHideFlags(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ApplyHideFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::OVRVirtualKeyboard::PopulateCollision()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "PopulateCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ShowKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ShowKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::SetKeyboardVisibility(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SetKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, visible);
}
inline void GlobalNamespace::OVRVirtualKeyboard::HideKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "HideKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::DestroyKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "DestroyKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::OVRVirtualKeyboard::MaxElement(::UnityEngine::Vector3  vec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "MaxElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, vec);
}
inline ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo GlobalNamespace::OVRVirtualKeyboard::ComputeLocation(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ComputeLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo, false>(*this, ___internal_method, transform);
}
inline void GlobalNamespace::OVRVirtualKeyboard::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param interactorRootTransform: ::UnityEngine::Transform* (default: csnull)
inline void GlobalNamespace::OVRVirtualKeyboard::SendVirtualKeyboardInput(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource  inputSource, ::GlobalNamespace::OVRPose  pose, bool  isPressed, ::UnityEngine::Transform*  interactorRootTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SendVirtualKeyboardInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputSource, pose, isPressed, interactorRootTransform);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UpdateInputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UpdateInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::SyncKeyboardLocation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "SyncKeyboardLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UpdateAnimationState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UpdateAnimationState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnCommitText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnCommitText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnTextCommitFieldChange(::StringW  textContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnTextCommitFieldChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, textContext);
}
inline void GlobalNamespace::OVRVirtualKeyboard::ChangeTextContextInternal(::StringW  textContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "ChangeTextContextInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, textContext);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnBackspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnBackspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnEnter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnKeyboardShown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnKeyboardShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::OnKeyboardHidden()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "OnKeyboardHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboard::UpdateVisibleState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "UpdateVisibleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboard* GlobalNamespace::OVRVirtualKeyboard::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRVirtualKeyboard*>());
}
inline void GlobalNamespace::OVRVirtualKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Texture2D* GlobalNamespace::OVRVirtualKeyboard::_LoadRuntimeVirtualKeyboardMesh_b__68_1(::StringW  rawUri, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboard*>::get(),
                            "<LoadRuntimeVirtualKeyboardMesh>b__68_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(*this, ___internal_method, rawUri, mat);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
