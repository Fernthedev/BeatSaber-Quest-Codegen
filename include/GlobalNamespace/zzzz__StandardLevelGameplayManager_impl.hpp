#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelGameplayManager_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager__InitData::*)(bool)>(&::GlobalNamespace::__StandardLevelGameplayManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23bd840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__StandardLevelGameplayManager__InitData::__set_failOn0Energy(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__StandardLevelGameplayManager__InitData::__get_failOn0Energy()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__StandardLevelGameplayManager__InitData::__get_failOn0Energy() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__StandardLevelGameplayManager__InitData* GlobalNamespace::__StandardLevelGameplayManager__InitData::New_ctor(bool  failOn0Energy)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StandardLevelGameplayManager__InitData*>(failOn0Energy));
}
inline void GlobalNamespace::__StandardLevelGameplayManager__InitData::_ctor(bool  failOn0Energy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, failOn0Energy);
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager__GameState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__StandardLevelGameplayManager__GameState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__StandardLevelGameplayManager__GameState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState::__StandardLevelGameplayManager__GameState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Intro{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Playing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Paused{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Finished{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Failed{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::*)(int32_t)>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23bd384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23bd868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x23bd86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bdbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23bdbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bdc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__set___4__this(::GlobalNamespace::StandardLevelGameplayManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelGameplayManager*, 0x20>(this, std::forward<::GlobalNamespace::StandardLevelGameplayManager*>(value));
}
constexpr ::GlobalNamespace::StandardLevelGameplayManager* GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelGameplayManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelGameplayManager*> GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelGameplayManager*, 0x20>(this);
}
inline ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22* GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>(__1__state));
}
inline void GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandardLevelGameplayManager___Start_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__22*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelWillStartIntroEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelWillStartIntroEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bce34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelWillStartIntroEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelWillStartIntroEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelWillStartIntroEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bced0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelWillStartIntroEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bcf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bd008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bd0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bd140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bd1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bd278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bd314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23bd31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::OnDestroy)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x23bd3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23bd614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandleGameEnergyDidReach0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandleGameEnergyDidReach0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23bd75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandleGameEnergyDidReach0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandleSongDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandleSongDidFinish)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23bd7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandleSongDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandlePauseControllerCanPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerCanPause)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23bd7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandlePauseControllerCanPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandlePauseControllerDidPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidPause)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23bd808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandlePauseControllerDidPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandlePauseControllerDidResume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidResume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23bd820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandlePauseControllerDidResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bd838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr  GlobalNamespace::StandardLevelGameplayManager::operator ::GlobalNamespace::ILevelEndActions*() noexcept {
return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
constexpr  GlobalNamespace::StandardLevelGameplayManager::operator ::GlobalNamespace::ILevelStartController*() noexcept {
return static_cast<::GlobalNamespace::ILevelStartController*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x18>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::StandardLevelGameplayManager::__get__gameScenesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::StandardLevelGameplayManager::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x18>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set__gameSongController(::GlobalNamespace::GameSongController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameSongController*, 0x20>(this, std::forward<::GlobalNamespace::GameSongController*>(value));
}
constexpr ::GlobalNamespace::GameSongController* GlobalNamespace::StandardLevelGameplayManager::__get__gameSongController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> GlobalNamespace::StandardLevelGameplayManager::__get__gameSongController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x20>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x28>(this, std::forward<::GlobalNamespace::GameEnergyCounter*>(value));
}
constexpr ::GlobalNamespace::GameEnergyCounter* GlobalNamespace::StandardLevelGameplayManager::__get__gameEnergyCounter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> GlobalNamespace::StandardLevelGameplayManager::__get__gameEnergyCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x28>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set__pauseController(::GlobalNamespace::PauseController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PauseController*, 0x30>(this, std::forward<::GlobalNamespace::PauseController*>(value));
}
constexpr ::GlobalNamespace::PauseController* GlobalNamespace::StandardLevelGameplayManager::__get__pauseController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PauseController*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseController*> GlobalNamespace::StandardLevelGameplayManager::__get__pauseController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PauseController*, 0x30>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set__initData(::GlobalNamespace::__StandardLevelGameplayManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__InitData*, 0x38>(this, std::forward<::GlobalNamespace::__StandardLevelGameplayManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__InitData* GlobalNamespace::StandardLevelGameplayManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__InitData*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StandardLevelGameplayManager__InitData*> GlobalNamespace::StandardLevelGameplayManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__InitData*, 0x38>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set_levelWillStartIntroEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x40>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::StandardLevelGameplayManager::__get_levelWillStartIntroEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::StandardLevelGameplayManager::__get_levelWillStartIntroEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x40>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set_levelDidStartEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x48>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::StandardLevelGameplayManager::__get_levelDidStartEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::StandardLevelGameplayManager::__get_levelDidStartEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set_levelFailedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x50>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::StandardLevelGameplayManager::__get_levelFailedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::StandardLevelGameplayManager::__get_levelFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x50>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set_levelFinishedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x58>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::StandardLevelGameplayManager::__get_levelFinishedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::StandardLevelGameplayManager::__get_levelFinishedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x58>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set__gameState(::GlobalNamespace::__StandardLevelGameplayManager__GameState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__GameState, 0x60>(this, std::forward<::GlobalNamespace::__StandardLevelGameplayManager__GameState>(value));
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState& GlobalNamespace::StandardLevelGameplayManager::__get__gameState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__GameState, 0x60>(this);
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState const& GlobalNamespace::StandardLevelGameplayManager::__get__gameState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__GameState, 0x60>(this);
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__set__prePauseGameState(::GlobalNamespace::__StandardLevelGameplayManager__GameState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__GameState, 0x64>(this, std::forward<::GlobalNamespace::__StandardLevelGameplayManager__GameState>(value));
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState& GlobalNamespace::StandardLevelGameplayManager::__get__prePauseGameState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__GameState, 0x64>(this);
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState const& GlobalNamespace::StandardLevelGameplayManager::__get__prePauseGameState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__StandardLevelGameplayManager__GameState, 0x64>(this);
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelWillStartIntroEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelWillStartIntroEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelWillStartIntroEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelWillStartIntroEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::StandardLevelGameplayManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandleGameEnergyDidReach0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandleGameEnergyDidReach0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandleSongDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandleSongDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerCanPause(::System::Action_1<bool>*  canPause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandlePauseControllerCanPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, canPause);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidPause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandlePauseControllerDidPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidResume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            "HandlePauseControllerDidResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelGameplayManager* GlobalNamespace::StandardLevelGameplayManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelGameplayManager*>());
}
inline void GlobalNamespace::StandardLevelGameplayManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
