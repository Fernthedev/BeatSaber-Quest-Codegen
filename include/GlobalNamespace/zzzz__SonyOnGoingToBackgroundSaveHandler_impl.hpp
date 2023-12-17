#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__SonyBackgroundExecutionHelper_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(&::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::Initialize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2369be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(&::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2369ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler.HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(&::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2369d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            "HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(&::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2369d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__set__localLeaderboardModel(::GlobalNamespace::LocalLeaderboardsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalLeaderboardsModel*, 0x18>(this, std::forward<::GlobalNamespace::LocalLeaderboardsModel*>(value));
}
constexpr ::GlobalNamespace::LocalLeaderboardsModel* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__localLeaderboardModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalLeaderboardsModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__localLeaderboardModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalLeaderboardsModel*, 0x18>(this);
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x20>(this, std::forward<::GlobalNamespace::MainSettingsModelSO*>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__mainSettingsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x20>(this);
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x28>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x28>(this);
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__set__saveData(::GlobalNamespace::ISaveData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaveData*, 0x30>(this, std::forward<::GlobalNamespace::ISaveData*>(value));
}
constexpr ::GlobalNamespace::ISaveData* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__saveData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__saveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData*, 0x30>(this);
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__set__sonyBackgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyBackgroundExecutionHelper*, 0x38>(this, std::forward<::GlobalNamespace::SonyBackgroundExecutionHelper*>(value));
}
constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__sonyBackgroundExecutionHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyBackgroundExecutionHelper*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__get__sonyBackgroundExecutionHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyBackgroundExecutionHelper*, 0x38>(this);
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            "HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>());
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
