#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.get_bloomPrePassEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BloomPrePassEffectSO* (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(&::GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21068cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                            "get_bloomPrePassEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)(::GlobalNamespace::BloomPrePassEffectSO*)>(&::GlobalNamespace::BloomPrePassEffectContainerSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21068d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassEffectSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(&::GlobalNamespace::BloomPrePassEffectContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21068dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassEffectContainerSO::__set__bloomPrePassEffect(::GlobalNamespace::BloomPrePassEffectSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassEffectSO*, 0x18>(this, std::forward<::GlobalNamespace::BloomPrePassEffectSO*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassEffectSO* GlobalNamespace::BloomPrePassEffectContainerSO::__get__bloomPrePassEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassEffectSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectSO*> GlobalNamespace::BloomPrePassEffectContainerSO::__get__bloomPrePassEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassEffectSO*, 0x18>(this);
}
inline ::GlobalNamespace::BloomPrePassEffectSO* GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                            "get_bloomPrePassEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BloomPrePassEffectSO*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassEffectContainerSO::Init(::GlobalNamespace::BloomPrePassEffectSO*  bloomPrePassEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassEffectSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bloomPrePassEffect);
}
inline ::GlobalNamespace::BloomPrePassEffectContainerSO* GlobalNamespace::BloomPrePassEffectContainerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassEffectContainerSO*>());
}
inline void GlobalNamespace::BloomPrePassEffectContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
