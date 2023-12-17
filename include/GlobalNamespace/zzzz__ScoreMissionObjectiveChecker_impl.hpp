#pragma once
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&::GlobalNamespace::ScoreMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23cd3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker.HandleScoreDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)(int32_t, int32_t)>(&::GlobalNamespace::ScoreMissionObjectiveChecker::HandleScoreDidChange)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23cd4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                            "HandleScoreDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&::GlobalNamespace::ScoreMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x23cd540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&::GlobalNamespace::ScoreMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cd748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ScoreMissionObjectiveChecker::__set__scoreController(::GlobalNamespace::IScoreController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IScoreController*, 0x48>(this, std::forward<::GlobalNamespace::IScoreController*>(value));
}
constexpr ::GlobalNamespace::IScoreController* GlobalNamespace::ScoreMissionObjectiveChecker::__get__scoreController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> GlobalNamespace::ScoreMissionObjectiveChecker::__get__scoreController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x48>(this);
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::HandleScoreDidChange(int32_t  multipliedScore, int32_t  modifiedScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                            "HandleScoreDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multipliedScore, modifiedScore);
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ScoreMissionObjectiveChecker* GlobalNamespace::ScoreMissionObjectiveChecker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScoreMissionObjectiveChecker*>());
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMissionObjectiveChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
