#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelFailedController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelFailedController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextEffect_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSpawnRotation_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelFailedController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelFailedController__InitData::*)(bool)>(&::GlobalNamespace::__StandardLevelFailedController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23cab80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__StandardLevelFailedController__InitData::__set_autoRestart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__StandardLevelFailedController__InitData::__get_autoRestart()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__StandardLevelFailedController__InitData::__get_autoRestart() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__StandardLevelFailedController__InitData* GlobalNamespace::__StandardLevelFailedController__InitData::New_ctor(bool  autoRestart)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StandardLevelFailedController__InitData*>(autoRestart));
}
inline void GlobalNamespace::__StandardLevelFailedController__InitData::_ctor(bool  autoRestart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, autoRestart);
}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::*)(int32_t)>(&::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23cab50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23caba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23cabac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cacf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23cacfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__set___4__this(::GlobalNamespace::StandardLevelFailedController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelFailedController*, 0x20>(this, std::forward<::GlobalNamespace::StandardLevelFailedController*>(value));
}
constexpr ::GlobalNamespace::StandardLevelFailedController* GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelFailedController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelFailedController*> GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelFailedController*, 0x20>(this);
}
constexpr void GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__set__levelCompletionResults_5__2(::GlobalNamespace::LevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x28>(this, std::forward<::GlobalNamespace::LevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get__levelCompletionResults_5__2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::__get__levelCompletionResults_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x28>(this);
}
inline ::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13* GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>(__1__state));
}
inline void GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFailedController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFailedController::*)()>(&::GlobalNamespace::StandardLevelFailedController::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23ca8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFailedController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFailedController::*)()>(&::GlobalNamespace::StandardLevelFailedController::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23ca9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFailedController.HandleLevelFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFailedController::*)()>(&::GlobalNamespace::StandardLevelFailedController::HandleLevelFailed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23caac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "HandleLevelFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFailedController.LevelFailedCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::StandardLevelFailedController::*)()>(&::GlobalNamespace::StandardLevelFailedController::LevelFailedCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23caae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "LevelFailedCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelFailedController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelFailedController::*)()>(&::GlobalNamespace::StandardLevelFailedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cab78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelFailedController::__set__levelFailedTextEffect(::GlobalNamespace::LevelFailedTextEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelFailedTextEffect*, 0x18>(this, std::forward<::GlobalNamespace::LevelFailedTextEffect*>(value));
}
constexpr ::GlobalNamespace::LevelFailedTextEffect* GlobalNamespace::StandardLevelFailedController::__get__levelFailedTextEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelFailedTextEffect*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFailedTextEffect*> GlobalNamespace::StandardLevelFailedController::__get__levelFailedTextEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelFailedTextEffect*, 0x18>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x20>(this, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::StandardLevelFailedController::__get__standardLevelSceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::StandardLevelFailedController::__get__standardLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x28>(this, std::forward<::GlobalNamespace::PrepareLevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::StandardLevelFailedController::__get__prepareLevelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> GlobalNamespace::StandardLevelFailedController::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x28>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__initData(::GlobalNamespace::__StandardLevelFailedController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StandardLevelFailedController__InitData*, 0x30>(this, std::forward<::GlobalNamespace::__StandardLevelFailedController__InitData*>(value));
}
constexpr ::GlobalNamespace::__StandardLevelFailedController__InitData* GlobalNamespace::StandardLevelFailedController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelFailedController__InitData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StandardLevelFailedController__InitData*> GlobalNamespace::StandardLevelFailedController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelFailedController__InitData*, 0x30>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__gameplayManager(::GlobalNamespace::ILevelEndActions*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILevelEndActions*, 0x38>(this, std::forward<::GlobalNamespace::ILevelEndActions*>(value));
}
constexpr ::GlobalNamespace::ILevelEndActions* GlobalNamespace::StandardLevelFailedController::__get__gameplayManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelEndActions*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> GlobalNamespace::StandardLevelFailedController::__get__gameplayManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelEndActions*, 0x38>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__beatmapObjectSpawnController(::GlobalNamespace::BeatmapObjectSpawnController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectSpawnController*, 0x40>(this, std::forward<::GlobalNamespace::BeatmapObjectSpawnController*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnController* GlobalNamespace::StandardLevelFailedController::__get__beatmapObjectSpawnController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectSpawnController*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnController*> GlobalNamespace::StandardLevelFailedController::__get__beatmapObjectSpawnController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectSpawnController*, 0x40>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__gameSongController(::GlobalNamespace::GameSongController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameSongController*, 0x48>(this, std::forward<::GlobalNamespace::GameSongController*>(value));
}
constexpr ::GlobalNamespace::GameSongController* GlobalNamespace::StandardLevelFailedController::__get__gameSongController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> GlobalNamespace::StandardLevelFailedController::__get__gameSongController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x48>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x50>(this, std::forward<::GlobalNamespace::EnvironmentSpawnRotation*>(value));
}
constexpr ::GlobalNamespace::EnvironmentSpawnRotation* GlobalNamespace::StandardLevelFailedController::__get__environmentSpawnRotation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSpawnRotation*> GlobalNamespace::StandardLevelFailedController::__get__environmentSpawnRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x50>(this);
}
constexpr void GlobalNamespace::StandardLevelFailedController::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x58>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::StandardLevelFailedController::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::StandardLevelFailedController::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x58>(this);
}
inline void GlobalNamespace::StandardLevelFailedController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelFailedController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelFailedController::HandleLevelFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "HandleLevelFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::StandardLevelFailedController::LevelFailedCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            "LevelFailedCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelFailedController* GlobalNamespace::StandardLevelFailedController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelFailedController*>());
}
inline void GlobalNamespace::StandardLevelFailedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelFailedController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
