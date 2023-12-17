#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableComponentWithCommandArgument_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableComponentWithCommandArgument.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableComponentWithCommandArgument::*)()>(&::GlobalNamespace::EnableComponentWithCommandArgument::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20f2038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableComponentWithCommandArgument._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableComponentWithCommandArgument::*)()>(&::GlobalNamespace::EnableComponentWithCommandArgument::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f20c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnableComponentWithCommandArgument::__set__argument(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::EnableComponentWithCommandArgument::__get__argument()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::EnableComponentWithCommandArgument::__get__argument() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::EnableComponentWithCommandArgument::__set__component(::UnityEngine::Behaviour*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Behaviour*, 0x20>(this, std::forward<::UnityEngine::Behaviour*>(value));
}
constexpr ::UnityEngine::Behaviour* GlobalNamespace::EnableComponentWithCommandArgument::__get__component()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Behaviour*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Behaviour*> GlobalNamespace::EnableComponentWithCommandArgument::__get__component() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Behaviour*, 0x20>(this);
}
inline void GlobalNamespace::EnableComponentWithCommandArgument::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::EnableComponentWithCommandArgument* GlobalNamespace::EnableComponentWithCommandArgument::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnableComponentWithCommandArgument*>());
}
inline void GlobalNamespace::EnableComponentWithCommandArgument::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
