#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePrefabOverride::*)()>(&::GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x278939c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePrefabOverride::*)()>(&::GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27893a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePrefabOverride::*)()>(&::GlobalNamespace::OVRScenePrefabOverride::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2789808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride._UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRScenePrefabOverride::_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x27894f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            "<UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>g__IndexOf|4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  GlobalNamespace::OVRScenePrefabOverride::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::OVRScenePrefabOverride::__set_Prefab(::GlobalNamespace::OVRSceneAnchor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x10>(this, std::forward<::GlobalNamespace::OVRSceneAnchor*>(value));
}
constexpr ::GlobalNamespace::OVRSceneAnchor* GlobalNamespace::OVRScenePrefabOverride::__get_Prefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> GlobalNamespace::OVRScenePrefabOverride::__get_Prefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRSceneAnchor*, 0x10>(this);
}
constexpr void GlobalNamespace::OVRScenePrefabOverride::__set_ClassificationLabel(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::OVRScenePrefabOverride::__get_ClassificationLabel()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::OVRScenePrefabOverride::__get_ClassificationLabel() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::OVRScenePrefabOverride::__set__editorClassificationIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRScenePrefabOverride::__get__editorClassificationIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::OVRScenePrefabOverride::__get__editorClassificationIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline void GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRScenePrefabOverride* GlobalNamespace::OVRScenePrefabOverride::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRScenePrefabOverride*>());
}
inline void GlobalNamespace::OVRScenePrefabOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRScenePrefabOverride::_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0(::StringW  label, ::System::Collections::Generic::IEnumerable_1<::StringW>*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                            "<UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>g__IndexOf|4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, label, collection);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
