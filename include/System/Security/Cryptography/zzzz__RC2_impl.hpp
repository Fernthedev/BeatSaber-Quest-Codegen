#pragma once
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RC2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RC2::*)()>(&::System::Security::Cryptography::RC2::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2460030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2.get_EffectiveKeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RC2::*)()>(&::System::Security::Cryptography::RC2::get_EffectiveKeySize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24600ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2.get_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RC2::*)()>(&::System::Security::Cryptography::RC2::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24600c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2.set_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RC2::*)(int32_t)>(&::System::Security::Cryptography::RC2::set_KeySize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24600d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::RC2::__set_EffectiveKeySizeValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::RC2::__get_EffectiveKeySizeValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& System::Security::Cryptography::RC2::__get_EffectiveKeySizeValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
inline void System::Security::Cryptography::RC2::setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get>(std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*> System::Security::Cryptography::RC2::getStaticF_s_legalBlockSizes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get>();
}
inline void System::Security::Cryptography::RC2::setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get>(std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*> System::Security::Cryptography::RC2::getStaticF_s_legalKeySizes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get>();
}
inline ::System::Security::Cryptography::RC2* System::Security::Cryptography::RC2::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::RC2*>());
}
inline void System::Security::Cryptography::RC2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RC2::get_EffectiveKeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                            "get_EffectiveKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RC2::get_KeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                            "get_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void System::Security::Cryptography::RC2::set_KeySize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2*>::get(),
                            "set_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
