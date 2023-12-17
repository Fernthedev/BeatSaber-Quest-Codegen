#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectivesGameUIController_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveGameUIView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23c1424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23c1858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.HandleMissionObjectiveCheckersManagerObjectivesListDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c192c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "HandleMissionObjectiveCheckersManagerObjectivesListDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.CreateUIElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x23c14b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "CreateUIElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c1930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__missionObjectiveGameUIViewPrefab(::GlobalNamespace::MissionObjectiveGameUIView*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionObjectiveGameUIView*, 0x18>(this, std::forward<::GlobalNamespace::MissionObjectiveGameUIView*>(value));
}
constexpr ::GlobalNamespace::MissionObjectiveGameUIView* GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViewPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveGameUIView*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveGameUIView*> GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViewPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveGameUIView*, 0x18>(this);
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__separator(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MissionObjectivesGameUIController::__get__separator()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::MissionObjectivesGameUIController::__get__separator() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__elementWidth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MissionObjectivesGameUIController::__get__elementWidth()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::MissionObjectivesGameUIController::__get__elementWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager*, 0x28>(this, std::forward<::GlobalNamespace::MissionObjectiveCheckersManager*>(value));
}
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager* GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveCheckersManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveCheckersManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager*, 0x28>(this);
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__missionObjectiveGameUIViews(::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>* GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViews()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*> GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViews() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*, 0x30>(this);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "HandleMissionObjectiveCheckersManagerObjectivesListDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            "CreateUIElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectivesGameUIController* GlobalNamespace::MissionObjectivesGameUIController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionObjectivesGameUIController*>());
}
inline void GlobalNamespace::MissionObjectivesGameUIController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
