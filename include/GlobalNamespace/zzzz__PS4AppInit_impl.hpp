#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__PS4AppInit_def.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__PS4ActivePublisherSKUSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.InitializeModules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::PS4AppInit::InitializeModules)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2229e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            "InitializeModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.AppStartAndMultiSceneEditorSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2229eb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.RepeatableSetupAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2229f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.TransitionToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2229fbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2229ff0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4AppInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4AppInit::*)()>(&::GlobalNamespace::PS4AppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222a1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS4AppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this, std::forward<::GlobalNamespace::MainSystemInit*>(value));
}
constexpr ::GlobalNamespace::MainSystemInit* GlobalNamespace::PS4AppInit::__get__mainSystemInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> GlobalNamespace::PS4AppInit::__get__mainSystemInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this);
}
constexpr void GlobalNamespace::PS4AppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this, std::forward<::GlobalNamespace::DefaultScenesTransitionsFromInit*>(value));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit* GlobalNamespace::PS4AppInit::__get__defaultScenesTransitionsFromInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> GlobalNamespace::PS4AppInit::__get__defaultScenesTransitionsFromInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this);
}
constexpr void GlobalNamespace::PS4AppInit::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x58>(this, std::forward<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>(value));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* GlobalNamespace::PS4AppInit::__get__appInitScenesTransitionSetupDataContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> GlobalNamespace::PS4AppInit::__get__appInitScenesTransitionSetupDataContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x58>(this);
}
constexpr void GlobalNamespace::PS4AppInit::__set__activePublisherSKUSettingsSO(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*, 0x60>(this, std::forward<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*>(value));
}
constexpr ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO* GlobalNamespace::PS4AppInit::__get__activePublisherSKUSettingsSO()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*> GlobalNamespace::PS4AppInit::__get__activePublisherSKUSettingsSO() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*, 0x60>(this);
}
constexpr void GlobalNamespace::PS4AppInit::__set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, 0x68>(this, std::forward<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>(value));
}
constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* GlobalNamespace::PS4AppInit::__get__sonyOnGoingToBackgroundSaveHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*> GlobalNamespace::PS4AppInit::__get__sonyOnGoingToBackgroundSaveHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, 0x68>(this);
}
inline int32_t GlobalNamespace::PS4AppInit::InitializeModules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            "InitializeModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PS4AppInit::AppStartAndMultiSceneEditorSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            "AppStartAndMultiSceneEditorSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PS4AppInit::RepeatableSetupAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            "RepeatableSetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PS4AppInit::TransitionToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PS4AppInit::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PS4AppInit* GlobalNamespace::PS4AppInit::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4AppInit*>());
}
inline void GlobalNamespace::PS4AppInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4AppInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
