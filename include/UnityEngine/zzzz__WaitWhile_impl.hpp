#pragma once
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitWhile_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitWhile.get_keepWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::WaitWhile::*)()>(&::UnityEngine::WaitWhile::get_keepWaiting)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cd361c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitWhile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::WaitWhile::*)(::System::Func_1<bool>*)>(&::UnityEngine::WaitWhile::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cd3640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::WaitWhile::__set_m_Predicate(::System::Func_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<bool>*, 0x10>(this, std::forward<::System::Func_1<bool>*>(value));
}
constexpr ::System::Func_1<bool>* UnityEngine::WaitWhile::__get_m_Predicate()  {
return ::cordl_internals::getInstanceField<::System::Func_1<bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> UnityEngine::WaitWhile::__get_m_Predicate() const {
return ::cordl_internals::getInstanceField<::System::Func_1<bool>*, 0x10>(this);
}
inline bool UnityEngine::WaitWhile::get_keepWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(),
                            "get_keepWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::WaitWhile* UnityEngine::WaitWhile::New_ctor(::System::Func_1<bool>*  predicate)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::WaitWhile*>(predicate));
}
inline void UnityEngine::WaitWhile::_ctor(::System::Func_1<bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, predicate);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
