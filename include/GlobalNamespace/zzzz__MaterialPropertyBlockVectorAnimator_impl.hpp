#pragma once
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockVectorAnimator_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockVectorAnimator.SetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x211546c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockVectorAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21154a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialPropertyBlockVectorAnimator::__set__vector(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x30>(this, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::MaterialPropertyBlockVectorAnimator::__get__vector()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x30>(this);
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MaterialPropertyBlockVectorAnimator::__get__vector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x30>(this);
}
inline void GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                            "SetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockVectorAnimator* GlobalNamespace::MaterialPropertyBlockVectorAnimator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>());
}
inline void GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
