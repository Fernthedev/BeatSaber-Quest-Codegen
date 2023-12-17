#pragma once
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__MACTripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__TailStream_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x245f454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245f584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Security::Cryptography::MACTripleDES::HashCore)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x245f58c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::HashFinal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x245f78c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(bool)>(&::System::Security::Cryptography::MACTripleDES::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x245f950;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::MACTripleDES::__set_m_encryptor(::System::Security::Cryptography::ICryptoTransform*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::ICryptoTransform*, 0x30>(this, std::forward<::System::Security::Cryptography::ICryptoTransform*>(value));
}
constexpr ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::MACTripleDES::__get_m_encryptor()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::ICryptoTransform*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> System::Security::Cryptography::MACTripleDES::__get_m_encryptor() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::ICryptoTransform*, 0x30>(this);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set__cs(::System::Security::Cryptography::CryptoStream*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::CryptoStream*, 0x38>(this, std::forward<::System::Security::Cryptography::CryptoStream*>(value));
}
constexpr ::System::Security::Cryptography::CryptoStream* System::Security::Cryptography::MACTripleDES::__get__cs()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::CryptoStream*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::CryptoStream*> System::Security::Cryptography::MACTripleDES::__get__cs() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::CryptoStream*, 0x38>(this);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set__ts(::System::Security::Cryptography::TailStream*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::TailStream*, 0x40>(this, std::forward<::System::Security::Cryptography::TailStream*>(value));
}
constexpr ::System::Security::Cryptography::TailStream* System::Security::Cryptography::MACTripleDES::__get__ts()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::TailStream*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TailStream*> System::Security::Cryptography::MACTripleDES::__get__ts() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::TailStream*, 0x40>(this);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set_m_bytesPerBlock(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Cryptography::MACTripleDES::__get_m_bytesPerBlock()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& System::Security::Cryptography::MACTripleDES::__get_m_bytesPerBlock() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set_des(::System::Security::Cryptography::TripleDES*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::TripleDES*, 0x50>(this, std::forward<::System::Security::Cryptography::TripleDES*>(value));
}
constexpr ::System::Security::Cryptography::TripleDES* System::Security::Cryptography::MACTripleDES::__get_des()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::TripleDES*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TripleDES*> System::Security::Cryptography::MACTripleDES::__get_des() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::TripleDES*, 0x50>(this);
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::MACTripleDES*>());
}
inline void System::Security::Cryptography::MACTripleDES::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::HashCore(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbData, int32_t  ibStart, int32_t  cbSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                            "HashCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rgbData, ibStart, cbSize);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Security::Cryptography::MACTripleDES::HashFinal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                            "HashFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
