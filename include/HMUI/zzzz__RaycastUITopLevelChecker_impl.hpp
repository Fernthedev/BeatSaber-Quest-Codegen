#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__RaycastUITopLevelChecker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x211eca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker.get_isOnTop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::get_isOnTop)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x211ed1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(),
                            "get_isOnTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x211ef24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::RaycastUITopLevelChecker::__set_results(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* HMUI::RaycastUITopLevelChecker::__get_results()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*> HMUI::RaycastUITopLevelChecker::__get_results() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, 0x18>(this);
}
constexpr void HMUI::RaycastUITopLevelChecker::__set__canvas(::UnityEngine::Canvas*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Canvas*, 0x20>(this, std::forward<::UnityEngine::Canvas*>(value));
}
constexpr ::UnityEngine::Canvas* HMUI::RaycastUITopLevelChecker::__get__canvas()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Canvas*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> HMUI::RaycastUITopLevelChecker::__get__canvas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Canvas*, 0x20>(this);
}
inline void HMUI::RaycastUITopLevelChecker::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HMUI::RaycastUITopLevelChecker::get_isOnTop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(),
                            "get_isOnTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::HMUI::RaycastUITopLevelChecker* HMUI::RaycastUITopLevelChecker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::RaycastUITopLevelChecker*>());
}
inline void HMUI::RaycastUITopLevelChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
