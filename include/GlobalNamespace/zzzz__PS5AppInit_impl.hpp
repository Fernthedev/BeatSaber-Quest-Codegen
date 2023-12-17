#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__PS5AppInit_def.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__SonyBackgroundExecutionHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.AppStartAndMultiSceneEditorSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x222a1e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.RepeatableSetupAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x222a24c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.TransitionToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x222a2e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.TransitionToNextSceneInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::TransitionToNextSceneInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x222a2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            "TransitionToNextSceneInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x222a340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222a52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS5AppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this, std::forward<::GlobalNamespace::MainSystemInit*>(value));
}
constexpr ::GlobalNamespace::MainSystemInit* GlobalNamespace::PS5AppInit::__get__mainSystemInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> GlobalNamespace::PS5AppInit::__get__mainSystemInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this);
}
constexpr void GlobalNamespace::PS5AppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this, std::forward<::GlobalNamespace::DefaultScenesTransitionsFromInit*>(value));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit* GlobalNamespace::PS5AppInit::__get__defaultScenesTransitionsFromInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> GlobalNamespace::PS5AppInit::__get__defaultScenesTransitionsFromInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this);
}
constexpr void GlobalNamespace::PS5AppInit::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x58>(this, std::forward<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>(value));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* GlobalNamespace::PS5AppInit::__get__appInitScenesTransitionSetupDataContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> GlobalNamespace::PS5AppInit::__get__appInitScenesTransitionSetupDataContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x58>(this);
}
constexpr void GlobalNamespace::PS5AppInit::__set__ps5SharedPackageSKUs(::GlobalNamespace::PS5SharedPackageSKUsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5SharedPackageSKUsSO*, 0x60>(this, std::forward<::GlobalNamespace::PS5SharedPackageSKUsSO*>(value));
}
constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO* GlobalNamespace::PS5AppInit::__get__ps5SharedPackageSKUs()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5SharedPackageSKUsSO*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5SharedPackageSKUsSO*> GlobalNamespace::PS5AppInit::__get__ps5SharedPackageSKUs() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5SharedPackageSKUsSO*, 0x60>(this);
}
constexpr void GlobalNamespace::PS5AppInit::__set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, 0x68>(this, std::forward<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>(value));
}
constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* GlobalNamespace::PS5AppInit::__get__sonyOnGoingToBackgroundSaveHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*> GlobalNamespace::PS5AppInit::__get__sonyOnGoingToBackgroundSaveHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, 0x68>(this);
}
constexpr void GlobalNamespace::PS5AppInit::__set__ps5AdvancedHapticPlayerPrefab(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x70>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::PS5AppInit::__get__ps5AdvancedHapticPlayerPrefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::PS5AppInit::__get__ps5AdvancedHapticPlayerPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x70>(this);
}
constexpr void GlobalNamespace::PS5AppInit::__set__backgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyBackgroundExecutionHelper*, 0x78>(this, std::forward<::GlobalNamespace::SonyBackgroundExecutionHelper*>(value));
}
constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper* GlobalNamespace::PS5AppInit::__get__backgroundExecutionHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyBackgroundExecutionHelper*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> GlobalNamespace::PS5AppInit::__get__backgroundExecutionHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyBackgroundExecutionHelper*, 0x78>(this);
}
inline void GlobalNamespace::PS5AppInit::AppStartAndMultiSceneEditorSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            "AppStartAndMultiSceneEditorSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PS5AppInit::RepeatableSetupAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            "RepeatableSetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PS5AppInit::TransitionToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PS5AppInit::TransitionToNextSceneInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            "TransitionToNextSceneInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PS5AppInit::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PS5AppInit* GlobalNamespace::PS5AppInit::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5AppInit*>());
}
inline void GlobalNamespace::PS5AppInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
