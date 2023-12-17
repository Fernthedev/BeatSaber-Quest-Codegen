#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionStageLockView_def.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionStage_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionStagesManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionStagesManager____c::*)()>(&::GlobalNamespace::__MissionStagesManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a255c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionStagesManager____c._InitStages_b__6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__MissionStagesManager____c::*)(::GlobalNamespace::MissionStage*)>(&::GlobalNamespace::__MissionStagesManager____c::_InitStages_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a2564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get(),
                            "<InitStages>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionStage*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MissionStagesManager____c::setStaticF___9(::GlobalNamespace::__MissionStagesManager____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__MissionStagesManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get>(std::forward<::GlobalNamespace::__MissionStagesManager____c*>(value));
}
inline ::GlobalNamespace::__MissionStagesManager____c* GlobalNamespace::__MissionStagesManager____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__MissionStagesManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get>();
}
inline void GlobalNamespace::__MissionStagesManager____c::setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::MissionStage*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::MissionStage*,int32_t>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::MissionStage*,int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::MissionStage*,int32_t>* GlobalNamespace::__MissionStagesManager____c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::MissionStage*,int32_t>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get>();
}
inline ::GlobalNamespace::__MissionStagesManager____c* GlobalNamespace::__MissionStagesManager____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MissionStagesManager____c*>());
}
inline void GlobalNamespace::__MissionStagesManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__MissionStagesManager____c::_InitStages_b__6_0(::GlobalNamespace::MissionStage*  stage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionStagesManager____c*>::get(),
                            "<InitStages>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionStage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, stage);
}
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.get_firstLockedMissionStage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionStage* (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a23a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "get_firstLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateFirtsLockedMissionStage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(int32_t)>(&::GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22a1ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateFirtsLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.InitStages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::InitStages)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x22a23ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "InitStages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::UpdateStageLockPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22a1d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateStageLockPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockPositionAnimated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(bool, float_t)>(&::GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x229fd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateStageLockPositionAnimated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(int32_t)>(&::GlobalNamespace::MissionStagesManager::UpdateStageLockText)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22a1b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateStageLockText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a24f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionStagesManager::__set__missionStageLockView(::GlobalNamespace::MissionStageLockView*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionStageLockView*, 0x18>(this, std::forward<::GlobalNamespace::MissionStageLockView*>(value));
}
constexpr ::GlobalNamespace::MissionStageLockView* GlobalNamespace::MissionStagesManager::__get__missionStageLockView()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionStageLockView*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionStageLockView*> GlobalNamespace::MissionStagesManager::__get__missionStageLockView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionStageLockView*, 0x18>(this);
}
constexpr void GlobalNamespace::MissionStagesManager::__set__missionStages(::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>& GlobalNamespace::MissionStagesManager::__get__missionStages()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*> const& GlobalNamespace::MissionStagesManager::__get__missionStages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionStage*,::Array<::GlobalNamespace::MissionStage*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::MissionStagesManager::__set__firstLockedMissionStage(::GlobalNamespace::MissionStage*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionStage*, 0x28>(this, std::forward<::GlobalNamespace::MissionStage*>(value));
}
constexpr ::GlobalNamespace::MissionStage* GlobalNamespace::MissionStagesManager::__get__firstLockedMissionStage()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionStage*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionStage*> GlobalNamespace::MissionStagesManager::__get__firstLockedMissionStage() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionStage*, 0x28>(this);
}
inline ::GlobalNamespace::MissionStage* GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "get_firstLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionStage*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage(int32_t  numberOfClearedMissions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateFirtsLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, numberOfClearedMissions);
}
inline void GlobalNamespace::MissionStagesManager::InitStages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "InitStages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateStageLockPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated(bool  animated, float_t  animationDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateStageLockPositionAnimated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, animated, animationDuration);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockText(int32_t  numberOfClearedMissions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            "UpdateStageLockText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, numberOfClearedMissions);
}
inline ::GlobalNamespace::MissionStagesManager* GlobalNamespace::MissionStagesManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionStagesManager*>());
}
inline void GlobalNamespace::MissionStagesManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
