#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelFinishedController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFinishedController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFinishedController::*)()>(&::GlobalNamespace::StandardLevelFinishedController::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23cad44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFinishedController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFinishedController::*)()>(&::GlobalNamespace::StandardLevelFinishedController::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23cae34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFinishedController.HandleLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFinishedController::*)()>(&::GlobalNamespace::StandardLevelFinishedController::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23caf3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFinishedController.StartLevelFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFinishedController::*)()>(&::GlobalNamespace::StandardLevelFinishedController::StartLevelFinished)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23caf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "StartLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFinishedController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFinishedController::*)()>(&::GlobalNamespace::StandardLevelFinishedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23caf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelFinishedController::__set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::StandardLevelFinishedController::__get__standardLevelSceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::StandardLevelFinishedController::__get__standardLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::StandardLevelFinishedController::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x20>(this, std::forward<::GlobalNamespace::PrepareLevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::StandardLevelFinishedController::__get__prepareLevelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> GlobalNamespace::StandardLevelFinishedController::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x20>(this);
}
constexpr void GlobalNamespace::StandardLevelFinishedController::__set__gameplayManager(::GlobalNamespace::ILevelEndActions*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILevelEndActions*, 0x28>(this, std::forward<::GlobalNamespace::ILevelEndActions*>(value));
}
constexpr ::GlobalNamespace::ILevelEndActions* GlobalNamespace::StandardLevelFinishedController::__get__gameplayManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelEndActions*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> GlobalNamespace::StandardLevelFinishedController::__get__gameplayManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelEndActions*, 0x28>(this);
}
inline void GlobalNamespace::StandardLevelFinishedController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelFinishedController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelFinishedController::HandleLevelFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "HandleLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelFinishedController::StartLevelFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            "StartLevelFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelFinishedController* GlobalNamespace::StandardLevelFinishedController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelFinishedController*>());
}
inline void GlobalNamespace::StandardLevelFinishedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFinishedController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
