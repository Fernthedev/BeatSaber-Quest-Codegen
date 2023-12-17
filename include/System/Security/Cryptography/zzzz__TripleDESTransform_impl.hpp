#pragma once
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__TripleDESTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__DESTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESTransform::*)(::System::Security::Cryptography::TripleDES*, bool, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Security::Cryptography::TripleDESTransform::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x246b81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::TripleDES*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform.ECB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESTransform::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Security::Cryptography::TripleDESTransform::ECB)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2474970;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform.GetStrongKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)()>(&::System::Security::Cryptography::TripleDESTransform::GetStrongKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24748cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                            "GetStrongKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::TripleDESTransform::__set_E1(::System::Security::Cryptography::DESTransform*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DESTransform*, 0x58>(this, std::forward<::System::Security::Cryptography::DESTransform*>(value));
}
constexpr ::System::Security::Cryptography::DESTransform* System::Security::Cryptography::TripleDESTransform::__get_E1()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> System::Security::Cryptography::TripleDESTransform::__get_E1() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x58>(this);
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_D2(::System::Security::Cryptography::DESTransform*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DESTransform*, 0x60>(this, std::forward<::System::Security::Cryptography::DESTransform*>(value));
}
constexpr ::System::Security::Cryptography::DESTransform* System::Security::Cryptography::TripleDESTransform::__get_D2()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> System::Security::Cryptography::TripleDESTransform::__get_D2() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x60>(this);
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_E3(::System::Security::Cryptography::DESTransform*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DESTransform*, 0x68>(this, std::forward<::System::Security::Cryptography::DESTransform*>(value));
}
constexpr ::System::Security::Cryptography::DESTransform* System::Security::Cryptography::TripleDESTransform::__get_E3()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> System::Security::Cryptography::TripleDESTransform::__get_E3() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x68>(this);
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_D1(::System::Security::Cryptography::DESTransform*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DESTransform*, 0x70>(this, std::forward<::System::Security::Cryptography::DESTransform*>(value));
}
constexpr ::System::Security::Cryptography::DESTransform* System::Security::Cryptography::TripleDESTransform::__get_D1()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> System::Security::Cryptography::TripleDESTransform::__get_D1() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x70>(this);
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_E2(::System::Security::Cryptography::DESTransform*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DESTransform*, 0x78>(this, std::forward<::System::Security::Cryptography::DESTransform*>(value));
}
constexpr ::System::Security::Cryptography::DESTransform* System::Security::Cryptography::TripleDESTransform::__get_E2()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> System::Security::Cryptography::TripleDESTransform::__get_E2() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x78>(this);
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_D3(::System::Security::Cryptography::DESTransform*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DESTransform*, 0x80>(this, std::forward<::System::Security::Cryptography::DESTransform*>(value));
}
constexpr ::System::Security::Cryptography::DESTransform* System::Security::Cryptography::TripleDESTransform::__get_D3()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> System::Security::Cryptography::TripleDESTransform::__get_D3() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DESTransform*, 0x80>(this);
}
inline ::System::Security::Cryptography::TripleDESTransform* System::Security::Cryptography::TripleDESTransform::New_ctor(::System::Security::Cryptography::TripleDES*  algo, bool  encryption, ::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  iv)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::TripleDESTransform*>(algo, encryption, key, iv));
}
inline void System::Security::Cryptography::TripleDESTransform::_ctor(::System::Security::Cryptography::TripleDES*  algo, bool  encryption, ::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::TripleDES*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, algo, encryption, key, iv);
}
inline void System::Security::Cryptography::TripleDESTransform::ECB(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                            "ECB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input, output);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Security::Cryptography::TripleDESTransform::GetStrongKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                            "GetStrongKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
