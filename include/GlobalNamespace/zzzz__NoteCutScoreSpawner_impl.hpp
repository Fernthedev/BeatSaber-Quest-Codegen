#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)()>(&::GlobalNamespace::NoteCutScoreSpawner::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23a36a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)()>(&::GlobalNamespace::NoteCutScoreSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23a3794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner.HandleScoringForNoteStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)(::GlobalNamespace::ScoringElement*)>(&::GlobalNamespace::NoteCutScoreSpawner::HandleScoringForNoteStarted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23a389c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            "HandleScoringForNoteStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScoringElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutScoreSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutScoreSpawner::*)()>(&::GlobalNamespace::NoteCutScoreSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a3948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutScoreSpawner::__set__flyingScoreSpawner(::GlobalNamespace::FlyingScoreSpawner*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FlyingScoreSpawner*, 0x18>(this, std::forward<::GlobalNamespace::FlyingScoreSpawner*>(value));
}
constexpr ::GlobalNamespace::FlyingScoreSpawner* GlobalNamespace::NoteCutScoreSpawner::__get__flyingScoreSpawner()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FlyingScoreSpawner*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingScoreSpawner*> GlobalNamespace::NoteCutScoreSpawner::__get__flyingScoreSpawner() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FlyingScoreSpawner*, 0x18>(this);
}
constexpr void GlobalNamespace::NoteCutScoreSpawner::__set__scoreController(::GlobalNamespace::IScoreController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IScoreController*, 0x20>(this, std::forward<::GlobalNamespace::IScoreController*>(value));
}
constexpr ::GlobalNamespace::IScoreController* GlobalNamespace::NoteCutScoreSpawner::__get__scoreController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> GlobalNamespace::NoteCutScoreSpawner::__get__scoreController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x20>(this);
}
inline void GlobalNamespace::NoteCutScoreSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutScoreSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutScoreSpawner::HandleScoringForNoteStarted(::GlobalNamespace::ScoringElement*  scoringElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            "HandleScoringForNoteStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScoringElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scoringElement);
}
inline ::GlobalNamespace::NoteCutScoreSpawner* GlobalNamespace::NoteCutScoreSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutScoreSpawner*>());
}
inline void GlobalNamespace::NoteCutScoreSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutScoreSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
