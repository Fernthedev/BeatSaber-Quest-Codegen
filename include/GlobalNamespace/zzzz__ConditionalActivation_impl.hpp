#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConditionalActivation_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConditionalActivation.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConditionalActivation::*)()>(&::GlobalNamespace::ConditionalActivation::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x226bf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalActivation*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalActivation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConditionalActivation::*)()>(&::GlobalNamespace::ConditionalActivation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226bfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalActivation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ConditionalActivation::__set__value(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x18>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::ConditionalActivation::__get__value()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::ConditionalActivation::__get__value() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x18>(this);
}
constexpr void GlobalNamespace::ConditionalActivation::__set__activateOnFalse(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ConditionalActivation::__get__activateOnFalse()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::ConditionalActivation::__get__activateOnFalse() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
inline void GlobalNamespace::ConditionalActivation::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalActivation*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ConditionalActivation* GlobalNamespace::ConditionalActivation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ConditionalActivation*>());
}
inline void GlobalNamespace::ConditionalActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalActivation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
