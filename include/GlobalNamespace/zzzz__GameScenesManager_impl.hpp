#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__ZenjectSceneLoader_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.get_sceneNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)()>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::get_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe21a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "get_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.set_sceneNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::set_sceneNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe21a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "set_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.get_container
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)()>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::get_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe21a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "get_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.set_container
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::set_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe21a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "set_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe1f62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager__ScenesStackData.SetDiContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager__ScenesStackData::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager__ScenesStackData::SetDiContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe21a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "SetDiContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager__ScenesStackData::__set__sceneNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager__ScenesStackData::__get__sceneNames_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager__ScenesStackData::__get__sceneNames_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager__ScenesStackData::__set__container_k__BackingField(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x18>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::__GameScenesManager__ScenesStackData::__get__container_k__BackingField()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::__GameScenesManager__ScenesStackData::__get__container_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager__ScenesStackData::get_sceneNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "get_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::set_sceneNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "set_sceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Zenject::DiContainer* GlobalNamespace::__GameScenesManager__ScenesStackData::get_container()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "get_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::set_container(::Zenject::DiContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "set_container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__GameScenesManager__ScenesStackData* GlobalNamespace::__GameScenesManager__ScenesStackData::New_ctor(::System::Collections::Generic::List_1<::StringW>*  sceneNames)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager__ScenesStackData*>(sceneNames));
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::_ctor(::System::Collections::Generic::List_1<::StringW>*  sceneNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneNames);
}
inline void GlobalNamespace::__GameScenesManager__ScenesStackData::SetDiContainer(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager__ScenesStackData*>::get(),
                            "SetDiContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
constexpr void GlobalNamespace::__GameScenesManager__ScenePresentType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameScenesManager__ScenePresentType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GameScenesManager__ScenePresentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType::__GameScenesManager__ScenePresentType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType  GlobalNamespace::__GameScenesManager__ScenePresentType::DoNotLoad{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType  GlobalNamespace::__GameScenesManager__ScenePresentType::Load{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType  GlobalNamespace::__GameScenesManager__ScenePresentType::Activate{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__GameScenesManager__SceneDismissType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameScenesManager__SceneDismissType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GameScenesManager__SceneDismissType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType::__GameScenesManager__SceneDismissType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType  GlobalNamespace::__GameScenesManager__SceneDismissType::DoNotUnload{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType  GlobalNamespace::__GameScenesManager__SceneDismissType::Unload{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType  GlobalNamespace::__GameScenesManager__SceneDismissType::Deactivate{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1f4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0._PushScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe21a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*>::get(),
                            "<PushScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0._PushScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe21bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*>::get(),
                            "<PushScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x10>(this, std::forward<::GlobalNamespace::__GameScenesManager__ScenesStackData*>(value));
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData* GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get_scenesStackData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get_scenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__set___4__this(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__set_finishCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x28>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get_finishCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x28>(this);
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0* GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*>::get(),
                            "<PushScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass30_0::_PushScenes_b__1(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*>::get(),
                            "<PushScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1f90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0._PopScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::_PopScenes_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe21c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0*>::get(),
                            "<PopScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::__set___4__this(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::__set_finishCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x18>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::__get_finishCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x18>(this);
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0* GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass31_0::_PopScenes_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0*>::get(),
                            "<PopScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1fc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0._ReplaceScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe21ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            "<ReplaceScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0._ReplaceScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe21e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            "<ReplaceScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0._ReplaceScenes_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe21e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            "<ReplaceScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set___4__this(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_scenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set_newSceneNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_newSceneNames()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_newSceneNames() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_emptyTransitionSceneNameList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_emptyTransitionSceneNameList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x30>(this, std::forward<::GlobalNamespace::__GameScenesManager__ScenesStackData*>(value));
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_scenesStackData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x30>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set_finishCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x38>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_finishCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x38>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set___9__1(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x40>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get___9__1()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x40>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__set___9__2(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x48>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get___9__2()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::__get___9__2() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x48>(this);
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0* GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__0(::Zenject::DiContainer*  emptySceneContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            "<ReplaceScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, emptySceneContainer);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__1(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            "<ReplaceScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass32_0::_ReplaceScenes_b__2(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*>::get(),
                            "<ReplaceScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe202a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0._ClearAndOpenScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe21ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            "<ClearAndOpenScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0._ClearAndOpenScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe22018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            "<ClearAndOpenScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0._ClearAndOpenScenes_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe22084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            "<ClearAndOpenScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set___4__this(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_scenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set_newSceneNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_newSceneNames()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_newSceneNames() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_emptyTransitionSceneNameList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_emptyTransitionSceneNameList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x30>(this, std::forward<::GlobalNamespace::__GameScenesManager__ScenesStackData*>(value));
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_scenesStackData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x30>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set_finishCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x38>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_finishCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x38>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set___9__1(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x40>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get___9__1()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x40>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__set___9__2(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x48>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get___9__2()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::__get___9__2() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x48>(this);
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0* GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__0(::Zenject::DiContainer*  emptySceneContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            "<ClearAndOpenScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, emptySceneContainer);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__1(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            "<ClearAndOpenScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass33_0::_ClearAndOpenScenes_b__2(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*>::get(),
                            "<ClearAndOpenScenes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe20664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0._AppendScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe220fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(),
                            "<AppendScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0._AppendScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe22168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(),
                            "<AppendScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x10>(this, std::forward<::GlobalNamespace::__GameScenesManager__ScenesStackData*>(value));
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData* GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get_scenesStackData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get_scenesStackData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenesStackData*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get_scenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get_scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__set___4__this(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__set_finishCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x28>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get_finishCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x28>(this);
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0* GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(),
                            "<AppendScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass34_0::_AppendScenes_b__1(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*>::get(),
                            "<AppendScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe20a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0._RemoveScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe221e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(),
                            "<RemoveScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0._RemoveScenes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::*)(::StringW)>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe22288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(),
                            "<RemoveScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__set___4__this(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__set_finishCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x18>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__get_finishCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__set_sceneNamesToRemove(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__get_sceneNamesToRemove()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::__get_sceneNamesToRemove() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x20>(this);
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0* GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(),
                            "<RemoveScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline bool GlobalNamespace::__GameScenesManager____c__DisplayClass35_0::_RemoveScenes_b__1(::StringW  scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*>::get(),
                            "<RemoveScenes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, scene);
}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe222ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0._ScenesTransitionCoroutine_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe222f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(),
                            "<ScenesTransitionCoroutine>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0._ScenesTransitionCoroutine_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::*)()>(&::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe22318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(),
                            "<ScenesTransitionCoroutine>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__set_newScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__get_newScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::__get_newScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this);
}
inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>());
}
inline void GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(),
                            "<ScenesTransitionCoroutine>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__GameScenesManager____c__DisplayClass38_0::_ScenesTransitionCoroutine_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>::get(),
                            "<ScenesTransitionCoroutine>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)(int32_t)>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe20a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe2233c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::MoveNext)> {
  constexpr static std::size_t size = 0xefc;
  constexpr static std::size_t addrs = 0xe22374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe23310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe23360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe233b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe233b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::*)()>(&::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe233f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_newScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x20>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_newScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_newScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_scenesToDismiss(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_scenesToDismiss()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_scenesToDismiss() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x28>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___4__this(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x30>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x30>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_scenesToPresent(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_scenesToPresent()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_scenesToPresent() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x38>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_minDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_minDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_minDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_presentType(::GlobalNamespace::__GameScenesManager__ScenePresentType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameScenesManager__ScenePresentType, 0x44>(this, std::forward<::GlobalNamespace::__GameScenesManager__ScenePresentType>(value));
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_presentType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenePresentType, 0x44>(this);
}
constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_presentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__ScenePresentType, 0x44>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_afterMinDurationCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x48>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_afterMinDurationCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_afterMinDurationCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___8__1(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*, 0x50>(this, std::forward<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*>(value));
}
constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___8__1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___8__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*, 0x50>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_extraBindingsCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x58>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_extraBindingsCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_extraBindingsCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x58>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_dismissType(::GlobalNamespace::__GameScenesManager__SceneDismissType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameScenesManager__SceneDismissType, 0x60>(this, std::forward<::GlobalNamespace::__GameScenesManager__SceneDismissType>(value));
}
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_dismissType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__SceneDismissType, 0x60>(this);
}
constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_dismissType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameScenesManager__SceneDismissType, 0x60>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set_finishCallback(::System::Action_1<::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x68>(this, std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_finishCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get_finishCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::Zenject::DiContainer*>*, 0x68>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__eventSystem_5__2(::UnityEngine::EventSystems::EventSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x70>(this, std::forward<::UnityEngine::EventSystems::EventSystem*>(value));
}
constexpr ::UnityEngine::EventSystems::EventSystem* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__eventSystem_5__2()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__eventSystem_5__2() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x70>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__sceneName_5__3(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__sceneName_5__3()  {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr ::StringW const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__sceneName_5__3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__loadSceneOperation_5__4(::UnityEngine::AsyncOperation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AsyncOperation*, 0x80>(this, std::forward<::UnityEngine::AsyncOperation*>(value));
}
constexpr ::UnityEngine::AsyncOperation* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__loadSceneOperation_5__4()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AsyncOperation*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__loadSceneOperation_5__4() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AsyncOperation*, 0x80>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set__sceneNum_5__5(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__sceneNum_5__5()  {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
constexpr int32_t const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get__sceneNum_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
constexpr void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__set___7__wrap5(::System::Collections::Generic::__List_1__Enumerator<::StringW>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__List_1__Enumerator<::StringW>, 0x90>(this, std::forward<::System::Collections::Generic::__List_1__Enumerator<::StringW>>(value));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___7__wrap5()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__List_1__Enumerator<::StringW>, 0x90>(this);
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__get___7__wrap5() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__List_1__Enumerator<::StringW>, 0x90>(this);
}
inline ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>(__1__state));
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::GameScenesManager::add_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe1eac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe1eb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_beforeDismissingScenesEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action*)>(&::GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe1e8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_beforeDismissingScenesEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action*)>(&::GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe1d924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_transitionDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe1ec28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_transitionDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe1ecd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.add_installEarlyBindingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe1ed88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.remove_installEarlyBindingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe1ee38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_currentScenesContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_currentScenesContainer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe1eee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "get_currentScenesContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_isInTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1ef40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "get_isInTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.get_waitUntilSceneTransitionFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe1ef48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "get_waitUntilSceneTransitionFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.MarkSceneAsPersistent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::MarkSceneAsPersistent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe1e878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "MarkSceneAsPersistent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.GetCurrentlyLoadedSceneNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xe1eff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "GetCurrentlyLoadedSceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PushScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::PushScenes)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xe1f1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "PushScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.PopScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::PopScenes)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xe1f724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "PopScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ReplaceScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::ArrayW<::System::Collections::IEnumerator*,::Array<::System::Collections::IEnumerator*>*>, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::ReplaceScenes)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xe1f914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ReplaceScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IEnumerator*,::Array<::System::Collections::IEnumerator*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ClearAndOpenScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*, bool)>(&::GlobalNamespace::GameScenesManager::ClearAndOpenScenes)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0xe1fc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ClearAndOpenScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.AppendScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::AppendScenes)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xe202a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "AppendScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.RemoveScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::RemoveScenes)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xe2066c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "RemoveScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ScenesTransitionCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GameScenesManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::__GameScenesManager__ScenePresentType, ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::__GameScenesManager__SceneDismissType, float_t, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xe1f654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ScenesTransitionCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__ScenePresentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneDismissType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ActivatePresentedSceneRootObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xe20a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ActivatePresentedSceneRootObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsAnySceneInStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::GameScenesManager::IsAnySceneInStack)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xe20d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "IsAnySceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.AreAllScenesInStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::GameScenesManager::AreAllScenesInStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe21154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "AreAllScenesInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.IsSceneInStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::IsSceneInStack)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xe20ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "IsSceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.SceneNamesFromSceneInfoArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::GameScenesManager::*)(::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>)>(&::GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe1f504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "SceneNamesFromSceneInfoArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.SetActiveRootObjectsInScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::System::Collections::Generic::List_1<::StringW>*, bool)>(&::GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xe2115c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "SetActiveRootObjectsInScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.ReparentRootGameObjectsToDisabledGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xe212dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ReparentRootGameObjectsToDisabledGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.MoveGameObjectsFromContainerToSceneRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)(::StringW)>(&::GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xe21560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "MoveGameObjectsFromContainerToSceneRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GameScenesManager::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe218dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe21934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameScenesManager._get_waitUntilSceneTransitionFinish_b__22_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameScenesManager::*)()>(&::GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__22_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe219f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "<get_waitUntilSceneTransitionFinish>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameScenesManager::__set__emptyTransitionSceneInfo(::GlobalNamespace::SceneInfo*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SceneInfo*, 0x18>(this, std::forward<::GlobalNamespace::SceneInfo*>(value));
}
constexpr ::GlobalNamespace::SceneInfo* GlobalNamespace::GameScenesManager::__get__emptyTransitionSceneInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> GlobalNamespace::GameScenesManager::__get__emptyTransitionSceneInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneInfo*, 0x18>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set__zenjectSceneLoader(::Zenject::ZenjectSceneLoader*  value)  {
::cordl_internals::setInstanceField<::Zenject::ZenjectSceneLoader*, 0x20>(this, std::forward<::Zenject::ZenjectSceneLoader*>(value));
}
constexpr ::Zenject::ZenjectSceneLoader* GlobalNamespace::GameScenesManager::__get__zenjectSceneLoader()  {
return ::cordl_internals::getInstanceField<::Zenject::ZenjectSceneLoader*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSceneLoader*> GlobalNamespace::GameScenesManager::__get__zenjectSceneLoader() const {
return ::cordl_internals::getInstanceField<::Zenject::ZenjectSceneLoader*, 0x20>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set_transitionDidStartEvent(::System::Action_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<float_t>*, 0x28>(this, std::forward<::System::Action_1<float_t>*>(value));
}
constexpr ::System::Action_1<float_t>* GlobalNamespace::GameScenesManager::__get_transitionDidStartEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<float_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> GlobalNamespace::GameScenesManager::__get_transitionDidStartEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<float_t>*, 0x28>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set_beforeDismissingScenesEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x30>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameScenesManager::__get_beforeDismissingScenesEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameScenesManager::__get_beforeDismissingScenesEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x30>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set_transitionDidFinishEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*, 0x38>(this, std::forward<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>* GlobalNamespace::GameScenesManager::__get_transitionDidFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*> GlobalNamespace::GameScenesManager::__get_transitionDidFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*, 0x38>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*, 0x40>(this, std::forward<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>* GlobalNamespace::GameScenesManager::__get_installEarlyBindingsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*> GlobalNamespace::GameScenesManager::__get_installEarlyBindingsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*, 0x40>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set__inTransition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameScenesManager::__get__inTransition()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& GlobalNamespace::GameScenesManager::__get__inTransition() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set__scenesStack(::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*, 0x50>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* GlobalNamespace::GameScenesManager::__get__scenesStack()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*> GlobalNamespace::GameScenesManager::__get__scenesStack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*, 0x50>(this);
}
constexpr void GlobalNamespace::GameScenesManager::__set__neverUnloadScenes(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x58>(this, std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::GameScenesManager::__get__neverUnloadScenes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> GlobalNamespace::GameScenesManager::__get__neverUnloadScenes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x58>(this);
}
inline void GlobalNamespace::GameScenesManager::add_transitionDidStartEvent(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_transitionDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_beforeDismissingScenesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_transitionDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "add_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "remove_installEarlyBindingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*,::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Zenject::DiContainer* GlobalNamespace::GameScenesManager::get_currentScenesContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "get_currentScenesContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::get_isInTransition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "get_isInTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "get_waitUntilSceneTransitionFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameScenesManager::MarkSceneAsPersistent(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "MarkSceneAsPersistent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneName);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "GetCurrentlyLoadedSceneNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method);
}
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: csnull)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: csnull)
inline void GlobalNamespace::GameScenesManager::PushScenes(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, float_t  minDuration, ::System::Action*  afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>*  finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "PushScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: csnull)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: csnull)
inline void GlobalNamespace::GameScenesManager::PopScenes(float_t  minDuration, ::System::Action*  afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>*  finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "PopScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param beforeNewScenesActivateRoutines: ::ArrayW<::System::Collections::IEnumerator*,::Array<::System::Collections::IEnumerator*>*> (default: csnull)
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: csnull)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: csnull)
inline void GlobalNamespace::GameScenesManager::ReplaceScenes(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::ArrayW<::System::Collections::IEnumerator*,::Array<::System::Collections::IEnumerator*>*>  beforeNewScenesActivateRoutines, float_t  minDuration, ::System::Action*  afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>*  finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ReplaceScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IEnumerator*,::Array<::System::Collections::IEnumerator*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scenesTransitionSetupData, beforeNewScenesActivateRoutines, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: csnull)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: csnull)
/// @param unloadAllScenes: bool (default: true)
inline void GlobalNamespace::GameScenesManager::ClearAndOpenScenes(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, float_t  minDuration, ::System::Action*  afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>*  finishCallback, bool  unloadAllScenes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ClearAndOpenScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback, unloadAllScenes);
}
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: csnull)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: csnull)
inline void GlobalNamespace::GameScenesManager::AppendScenes(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, float_t  minDuration, ::System::Action*  afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>*  finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "AppendScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback);
}
/// @param minDuration: float_t (default: 0.0)
/// @param afterMinDurationCallback: ::System::Action* (default: csnull)
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: csnull)
inline void GlobalNamespace::GameScenesManager::RemoveScenes(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupDataSo, float_t  minDuration, ::System::Action*  afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>*  finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "RemoveScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scenesTransitionSetupDataSo, minDuration, afterMinDurationCallback, finishCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine(::GlobalNamespace::ScenesTransitionSetupDataSO*  newScenesTransitionSetupData, ::System::Collections::Generic::List_1<::StringW>*  scenesToPresent, ::GlobalNamespace::__GameScenesManager__ScenePresentType  presentType, ::System::Collections::Generic::List_1<::StringW>*  scenesToDismiss, ::GlobalNamespace::__GameScenesManager__SceneDismissType  dismissType, float_t  minDuration, ::System::Action*  afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsCallback, ::System::Action_1<::Zenject::DiContainer*>*  finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ScenesTransitionCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__ScenePresentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneDismissType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, newScenesTransitionSetupData, scenesToPresent, presentType, scenesToDismiss, dismissType, minDuration, afterMinDurationCallback, extraBindingsCallback, finishCallback);
}
inline void GlobalNamespace::GameScenesManager::ActivatePresentedSceneRootObjects(::System::Collections::Generic::List_1<::StringW>*  scenesToPresent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ActivatePresentedSceneRootObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scenesToPresent);
}
inline bool GlobalNamespace::GameScenesManager::IsAnySceneInStack(::System::Collections::Generic::List_1<::StringW>*  sceneNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "IsAnySceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, sceneNames);
}
inline bool GlobalNamespace::GameScenesManager::AreAllScenesInStack(::System::Collections::Generic::List_1<::StringW>*  sceneNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "AreAllScenesInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, sceneNames);
}
inline bool GlobalNamespace::GameScenesManager::IsSceneInStack(::StringW  searchSceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "IsSceneInStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, searchSceneName);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray(::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>  sceneInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "SceneNamesFromSceneInfoArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method, sceneInfos);
}
inline void GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes(::System::Collections::Generic::List_1<::StringW>*  sceneNames, bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "SetActiveRootObjectsInScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneNames, value);
}
inline void GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "ReparentRootGameObjectsToDisabledGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "MoveGameObjectsFromContainerToSceneRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneName);
}
inline void GlobalNamespace::GameScenesManager::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline ::GlobalNamespace::GameScenesManager* GlobalNamespace::GameScenesManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameScenesManager*>());
}
inline void GlobalNamespace::GameScenesManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameScenesManager::_get_waitUntilSceneTransitionFinish_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameScenesManager*>::get(),
                            "<get_waitUntilSceneTransitionFinish>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
