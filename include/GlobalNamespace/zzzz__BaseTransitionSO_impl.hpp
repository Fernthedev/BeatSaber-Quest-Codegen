#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO.get_easeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EaseType (::GlobalNamespace::BaseTransitionSO::*)()>(&::GlobalNamespace::BaseTransitionSO::get_easeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x227cddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO.get_easeDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BaseTransitionSO::*)()>(&::GlobalNamespace::BaseTransitionSO::get_easeDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x227cdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(),
                            "get_easeDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BaseTransitionSO::*)()>(&::GlobalNamespace::BaseTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227ce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BaseTransitionSO::__set__transitionTiming(::GlobalNamespace::TransitionTimingSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TransitionTimingSO*, 0x18>(this, std::forward<::GlobalNamespace::TransitionTimingSO*>(value));
}
constexpr ::GlobalNamespace::TransitionTimingSO* GlobalNamespace::BaseTransitionSO::__get__transitionTiming()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TransitionTimingSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TransitionTimingSO*> GlobalNamespace::BaseTransitionSO::__get__transitionTiming() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TransitionTimingSO*, 0x18>(this);
}
inline ::GlobalNamespace::EaseType GlobalNamespace::BaseTransitionSO::get_easeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BaseTransitionSO::get_easeDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(),
                            "get_easeDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BaseTransitionSO* GlobalNamespace::BaseTransitionSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BaseTransitionSO*>());
}
inline void GlobalNamespace::BaseTransitionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
